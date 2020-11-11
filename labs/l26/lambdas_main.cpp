/**
 * @file     lambdas.hpp
 * @author   Solomon Himelbloom
 * @date     November 11, 2020
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

using WikiStringVector = std::pair<std::size_t, std::string>;

int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.

	std::vector<WikiStringVector> iter;
	for (std::string str : WIKIPEDIA_CPP) {
		iter.push_back(std::make_pair(str.size(), str));
	}

	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.

	std::sort(iter.begin(), iter.end(), 
		[](WikiStringVector first, WikiStringVector second) 
		{ return first.first > second.first; });

	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector

	std::cout << printVectorPairs(iter.begin(), iter.end()) << std::endl;

	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.



	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.



	// return 0;
}
