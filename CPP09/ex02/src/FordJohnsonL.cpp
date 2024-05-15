/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FordJohnsonL.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: kposthum <kposthum@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/05/09 14:25:52 by kposthum      #+#    #+#                 */
/*   Updated: 2024/05/15 13:29:56 by kposthum      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<PmergeMe.hpp>

static void mirrorList(std::list<int> &container){
	std::list<int>::iterator start = container.begin();
	std::list<int>::iterator end = container.end();
	end--;
	while (start != end){
		std::swap(*start, *end);
		start++;
		if (start == end)
			break ;
		end--;
	}
}

std::list<int>::iterator IteratorComparator(std::list<int>::iterator ptr, std::list<int> &list, long count){
	long i = 0;
	std::list<int>::iterator iter = ptr;
	if (count < 0){
		while (iter != list.begin() && i > count){
			iter--;
			i--;
		}
	}
	else if (count > 0){
		while (iter != list.end() && i < count){
			iter++;
			i++;
		}
	}
	return iter;
}

static void makingPairs(std::list<int> &list, size_t layer){
	size_t stepsize = (size_t)pow(2, layer);
	// making pairs
	std::list<int>::iterator ptr = list.begin();
	while (ptr != list.end()){
		std::list<int>::iterator it = IteratorComparator(ptr, list, (2 * stepsize));
		if (it != list.end()){
			std::list<int>::iterator low = IteratorComparator(ptr, list, (stepsize - 1));
			std::list<int>::iterator high = IteratorComparator(ptr, list, ((2 * stepsize) - 1));
			if (*low > *high){
				std::list<int>::iterator range = IteratorComparator(ptr, list, stepsize);
				std::swap_ranges(ptr, range, range);
			}
		}
		ptr = IteratorComparator(ptr, list, stepsize);
		if (ptr != list.end())
			ptr = IteratorComparator(ptr, list, stepsize);
	}

}

static void insertion(std::list<int> &list, size_t layer)
{
	size_t stepsize = (size_t)pow(2, layer);
	// insertion part
	std::list<int>::iterator ptr = IteratorComparator(list.end(), list, -1);
	ptr = IteratorComparator(ptr, list, (-1 * (list.size() % stepsize)));
	while (ptr != list.begin() && !std::is_sorted(list.begin(), list.end())
			&& list.size() / stepsize > 2){
		// check if something needs to be moved
		std::list<int>::iterator lower = IteratorComparator(ptr, list, (-1 * stepsize));
		if ((lower != list.begin() || layer != 0) && *ptr < *lower){
			// make temp list of thing to move
			std::list<int> temp;
			std::list<int>::iterator it = ptr;
			for (size_t i = 0; i < stepsize; i++){
				temp.push_back(*it);
				it--;
			}
			mirrorList(temp);
	std::cout << "temp list:\t";
	std::for_each(temp.begin(), temp.end(), [](const int n){std::cout << n << ' '; });
	std::cout << "\n\n";

			// erase the values from original list
			std::list<int>::iterator low = IteratorComparator(ptr, list, (-1 * stepsize) + 1);
			std::list<int>::iterator high = IteratorComparator(ptr, list, 1);
			list.erase(low, high);
			// determine correct insertion place
			it = IteratorComparator(list.begin(), list, (stepsize - 1));
			std::list<int>::iterator tmp = IteratorComparator(temp.end(), temp, -1);
			while (*it < *tmp && it != list.end())
				it = IteratorComparator(it, list, stepsize);
			it = IteratorComparator(it, list, -1 * (stepsize - 1));
			// insert temp listor in correct place
			list.insert(it, temp.begin(), temp.end());
			ptr = IteratorComparator(list.end(), list, -1);
			ptr = IteratorComparator(ptr, list, (-1 * (list.size() % stepsize)));
			continue ;
		}
		ptr = IteratorComparator(ptr, list, (-1 * stepsize));
	}
}

void FordJohnsonL(std::list<int> &list, size_t layer){
	makingPairs(list, layer);
	// recursion
	if (list.size() / pow(2, layer + 1) >= 1 && !std::is_sorted(list.begin(), list.end()))
		FordJohnsonL(list, layer + 1);
	// std::cout << "list after pairing:\t";
	// std::for_each(list.begin(), list.end(), [](const int n){std::cout << n << ' '; });
	// std::cout << '\n\n';
	insertion(list, layer);
}