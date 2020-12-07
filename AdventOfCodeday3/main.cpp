//
//  main.cpp
//  AdventOfCodeday3
//
//  Created by Zach Howes on 12/7/20.
//

#include <iostream>
#include <vector>
#include <fstream>
#include "betterArray.hpp"
#include "functions.hpp"


int main(int argc, const char * argv[]) {
	std::ifstream map;
	openFile(argv[1], map);
	std::vector<betterarray> mapArray;
	readFile(map, mapArray);
	int numRight= 1;
	int numDown = 1;
	char item = '#';
	int total = 0;
	int numTrees = numberOfItems(numRight, numDown, mapArray, item);
	std::cout << "The number of trees in path 1 is " << numTrees << "\n";
	total = numTrees;
	
	
	numRight = 3;
	numDown = 1;
	numTrees = numberOfItems(numRight, numDown, mapArray, item);
	std::cout << "The number of trees in path 2 is " << numTrees << "\n";
	total *= numTrees;
	
	numRight = 5;
	numDown = 1;
	numTrees = numberOfItems(numRight, numDown, mapArray, item);
	std::cout << "The number of trees in path 3 is " << numTrees << "\n";
	total *= numTrees;
	
	numRight = 7;
	numDown = 1;
	numTrees = numberOfItems(numRight, numDown, mapArray, item);
	std::cout << "The number of trees in path 4 is " << numTrees << "\n";
	total *= numTrees;
	
	
	numRight = 1;
	numDown = 2;
	numTrees = numberOfItems(numRight, numDown, mapArray, item);
	std::cout << "The number of trees in path 5 is " << numTrees << "\n";
	total *= numTrees;
	
	
	std::cout << "The final anser is " << total << "\n";
	
	return 0;
}
