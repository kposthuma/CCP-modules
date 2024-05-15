/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FordJohnsonV.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 14:25:52 by kposthum      #+#    #+#                 */
/*   Updated: 2024/05/15 13:29:52 by kposthum      ########   odam.nl         */
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

std::vector<int>::iterator IteratorComparator(std::vector<int>::iterator ptr, std::vector<int> &vect, long count){
	long i = 0;
	std::vector<int>::iterator iter = ptr;
	if (count < 0){
		while (iter != vect.begin() && i > count){
			iter--;
			i--;
		}
	}
	else if (count > 0){
		while (iter != vect.end() && i < count){
			iter++;
			i++;
		}
	}
	return iter;
}

static void makingPairs(std::vector<int> &vect, size_t layer){
	size_t stepsize = (size_t)pow(2, layer);
	// making pairs
	std::vector<int>::iterator ptr = vect.begin();
	while (ptr != vect.end()){
		if (IteratorComparator(ptr, vect, 2 * stepsize) != vect.end()){
			if (*(ptr + stepsize - 1) > *(ptr + (2 * stepsize) - 1))
				std::swap_ranges(ptr, (ptr + stepsize),  (ptr + stepsize));
		}
		ptr = IteratorComparator(ptr, vect, stepsize);
		if (ptr != vect.end())
			ptr = IteratorComparator(ptr, vect, stepsize);
	}

}

static void insertion(std::vector<int> &vect, size_t layer)
{
	size_t stepsize = (size_t)pow(2, layer);
	// insertion part
	std::vector<int>::iterator ptr = IteratorComparator(vect.end(), vect, -1);
	ptr = IteratorComparator(ptr, vect, (-1 * (vect.size() % stepsize)));
	while (ptr != vect.begin() && !std::is_sorted(vect.begin(), vect.end())
			&& vect.size() / stepsize > 2){
		// check if something needs to be moved
		std::vector<int>::iterator lower = IteratorComparator(ptr, vect, (-1 * stepsize));
		if ((lower != vect.begin() || layer != 0) && *ptr < *lower){
			// make temp vector of thing to move
			std::vector<int> temp;
			std::vector<int>::iterator it = ptr;
			for (size_t i = 0; i < stepsize; i++){
				temp.push_back(*it);
				it--;
			}
			mirrorVector(temp);
	std::cout << "temp vector:\t";
	std::for_each(temp.begin(), temp.end(), [](const int n){std::cout << n << ' '; });
	std::cout << "\n\n";

			// erase the values from original vector
			std::vector<int>::iterator low = IteratorComparator(ptr, vect, (-1 * stepsize) + 1);
			std::vector<int>::iterator high = IteratorComparator(ptr, vect, 1);
			vect.erase(low, high);
			// determine correct insertion place
			it = IteratorComparator(vect.begin(), vect, (stepsize - 1));
			std::vector<int>::iterator tmp = IteratorComparator(temp.end(), temp, -1);
			while (*it < *tmp && it != vect.end())
				it = IteratorComparator(it, vect, stepsize);
			it = IteratorComparator(it, vect, -1 * (stepsize - 1));
			// insert temp vector in correct place
			vect.insert(it, temp.begin(), temp.end());
			continue ;
		}
		ptr = IteratorComparator(ptr, vect, (-1 * stepsize));
	}
}

void FordJohnsonV(std::vector<int> &vect, size_t layer){
	makingPairs(vect, layer);
	// recursion
	if (vect.size() / pow(2, layer + 1) >= 1 && !std::is_sorted(vect.begin(), vect.end()))
		FordJohnsonV(vect, layer + 1);
	// std::cout << "vector after pairing:\t";
	// std::for_each(vect.begin(), vect.end(), [](const int n){std::cout << n << ' '; });
	// std::cout << "\n\n";
	insertion(vect, layer);
}