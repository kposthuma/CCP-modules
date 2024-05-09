/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FordJohnsonL.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 14:25:52 by kposthum      #+#    #+#                 */
/*   Updated: 2024/05/09 17:44:51 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<PmergeMe.hpp>

static void mirrorList(std::list<int> &container){
	std::list<int>::iterator start = container.begin();
	std::list<int>::iterator end = container.end();
	end--;
	while (start != end){
		// std::cout << "here1" << std::endl;
		std::swap(*start, *end);
		start++;
		if (start == end)
			break ;
		end--;
	}
}

static std::list<int>::iterator incrementIterator(std::list<int>::iterator ptr,
		const size_t count, std::list<int> &list){
	std::list<int>::iterator it = ptr;
	size_t i = 0;
	while (i < count && it != list.end()){
		// std::cout << "here2" << std::endl;
		it++;
		i++;
	}
	return it;
}

static std::list<int>::iterator decrementIterator(std::list<int>::iterator ptr,
		const size_t count, std::list<int> &list){
	std::list<int>::iterator it = ptr;
	size_t i = 0;
	while (i < count && it != list.begin()){
		// std::cout << "here3" << std::endl;
		it--;
		i++;
	}
	return it;
}

static void makingPairs(std::list<int> &list, size_t layer){
	// making pairs
	std::list<int>::iterator ptr = list.begin();
	while (ptr != list.end()){
		// std::cout << "here4" << std::endl;
		std::list<int>::iterator it = incrementIterator(ptr, (2 * pow(2, layer)), list);
		if (it != list.end()){
			std::list<int>::iterator low = incrementIterator(ptr, (pow(2, layer) - 1), list);
			std::list<int>::iterator high = incrementIterator(ptr, ((2 * pow(2, layer)) - 1), list);
			if (*low > *high){
				std::list<int>::iterator range = incrementIterator(ptr, pow(2, layer), list);
				std::swap_ranges(ptr, range, range);
			}
		}
		ptr = incrementIterator(ptr, pow(2, layer), list);
		if (ptr != list.end())
			ptr = incrementIterator(ptr, pow(2, layer), list);
	}

}

static size_t stepSize(size_t layer){
	if (layer == 0)
		return 0;
	else
		return pow(2, layer - 1);
}

static void insertion(std::list<int> &list, size_t layer){
	std::cout << "CURRENT LAYER:\t" << layer << std::endl;
	// insertion part
	std::list<int>::iterator ptr = decrementIterator(list.end(), 1, list);
	if (list.size() % (int)pow(2, layer) != 0)
		ptr = decrementIterator(ptr, (pow(2, layer) - 1), list);
	std::cout << "test " << *ptr << std::endl;
	while (ptr != list.begin() && !std::is_sorted(list.begin(), list.end())
			&& list.size() / pow(2, layer + 1) >= 1){
		// std::cout << "here5" << std::endl;
		// check if something needs to be moved
		std::list<int>::iterator compare = decrementIterator(ptr, (pow(2, layer - 1) - 1), list);
// std::cout << "whut happen\t" << *ptr << "\t" << *compare << std::endl; 
		if (compare != list.begin() && *ptr < *compare){
			// make temp listor of thing to move
			std::list<int> temp;
			std::list<int>::iterator it = ptr;
			for (size_t i = 0; i < pow(2, layer); i++){
				temp.push_back(*it);
				it--;
			}

	// std::cout << "temp list:\t";
	// std::for_each(temp.begin(), temp.end(), [](const int n){std::cout << n << ' '; });
	// std::cout << '\n';

			mirrorList(temp);
			// erase the values from original list
			std::list<int>::iterator low = decrementIterator(ptr, pow(2, layer - 1), list);
			std::list<int>::iterator high = incrementIterator(ptr, 1, list);

	// std::cout << "list before erase:\t";
	// std::for_each(list.begin(), list.end(), [](const int n){std::cout << n << ' '; });
	// std::cout << '\n';

			list.erase(low, high);
			// determine correct insertion place
			it = list.begin();
			if (layer > 0)
				it = incrementIterator(it, stepSize(layer), list);
			std::list<int>::iterator tmp = decrementIterator(temp.end(), 1, temp);
			while (*tmp > *it && it != list.end()){
				// std::cout << "here6" << std::endl;
				it = incrementIterator(it, pow(2, layer), list);
			}
			it = decrementIterator(it, (pow(2, layer) - 1), list);

	// std::cout << "list after erase:\t";
	// std::for_each(list.begin(), list.end(), [](const int n){std::cout << n << ' '; });
	// std::cout << '\n';

			// insert temp listor in correct place
			list.insert(it, temp.begin(), temp.end());

	// std::cout << "list after insert:\t";
	// std::for_each(list.begin(), list.end(), [](const int n){std::cout << n << ' '; });
	// std::cout << '\n';
	
			continue ;
		}
		ptr = decrementIterator(ptr, pow(2, (layer)), list);
	}
}
void FordJohnsonL(std::list<int> &list, size_t layer){
	makingPairs(list, layer);
	// recursion
	if (list.size() / pow(2, layer + 1) >= 1 && !std::is_sorted(list.begin(), list.end()))
		FordJohnsonL(list, layer + 1);
	std::cout << "list after pairing:\t";
	std::for_each(list.begin(), list.end(), [](const int n){std::cout << n << ' '; });
	std::cout << '\n';
	insertion(list, layer);
}