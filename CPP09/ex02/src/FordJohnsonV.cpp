/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FordJohnsonV.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 14:25:52 by kposthum      #+#    #+#                 */
/*   Updated: 2024/05/09 17:44:57 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<PmergeMe.hpp>

static void mirrorVector(std::vector<int> &container){
	std::vector<int>::iterator start = container.begin();
	std::vector<int>::iterator end = container.end() - 1;
	while (start < end){
		std::swap(*start, *end);
		start++;
		end--;
	}
}

static void makingPairs(std::vector<int> &vect, size_t layer){
	// making pairs
	std::vector<int>::iterator ptr = vect.begin();
	while (ptr < vect.end()){
		if ((ptr + (2 * pow(2, layer))) <= vect.end()){
			if (*(ptr + pow(2, layer) - 1) > *(ptr + (2 * pow(2, layer)) - 1))
				std::swap_ranges(ptr, (ptr + pow(2, layer)),  (ptr + pow(2, layer)));
		}
		ptr += pow(2, layer);
		if (ptr != vect.end())
			ptr += pow(2, layer);
	}

}

static size_t stepSize(size_t layer){
	if (layer == 0)
		return 0;
	else
		return pow(2, layer - 1);
}

static void insertion(std::vector<int> &vect, size_t layer){
	std::cout << "CURRENT LAYER:\t" << layer << std::endl;
	// insertion part
	std::vector<int>::iterator ptr = vect.end() - 1;
	if (vect.size() % (int)pow(2, layer) != 0)
		ptr -= (int)pow(2, layer) - 1;
	std::cout << "test " << *ptr << std::endl;
	while (ptr > vect.begin() && !std::is_sorted(vect.begin(), vect.end())
			&& vect.size() / pow(2, layer + 1) >= 1){
		// check if something needs to be moved 
		if ((ptr - pow(2, layer - 1) - 1) >= vect.begin() && *ptr < *(ptr - pow(2, layer - 1) - 1)){
			// make temp vector of thing to move
			std::vector<int> temp;
			std::vector<int>::iterator it = (ptr);
			for (size_t i = 0; i < pow(2, layer); i++){
				temp.push_back(*it);
				it--;
			}
			mirrorVector(temp);
			// erase the values from original vector
			vect.erase((ptr - pow(2, layer - 1)), (ptr + 1));
			// determine correct insertion place
			it = vect.begin();
			if (layer > 0)
				it += stepSize(layer);
			while (*(temp.end() - 1) > *it && it < vect.end())
				it += pow(2, layer);
			it -= (pow(2, layer) - 1);
			// insert temp vector in correct place
			vect.insert(it, temp.begin(), temp.end());
			continue ;
		}
		ptr -= pow(2, (layer));
	}
}
void FordJohnsonV(std::vector<int> &vect, size_t layer){
	makingPairs(vect, layer);
	// recursion
	if (vect.size() / pow(2, layer + 1) >= 1 && !std::is_sorted(vect.begin(), vect.end()))
		FordJohnsonV(vect, layer + 1);
	std::cout << "vector after pairing:\t";
	std::for_each(vect.begin(), vect.end(), [](const int n){std::cout << n << ' '; });
	std::cout << '\n';
	insertion(vect, layer);
}