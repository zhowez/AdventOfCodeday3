//
//  functions.cpp
//  AdventOfCodeday3
//
//  Created by Zach Howes on 12/7/20.
//

#include "functions.hpp"

void openFile(std::string fileName,std::ifstream &file) {
		file.open(fileName);
	
	if (!file.is_open()) {
		std::cout << "The file could not open" << std::endl;
		exit(-1);
	}
	
}

void readFile(std::ifstream& map, std::vector<betterarray>& arr) {
	char position;
	map >> position;
	while (!map.eof()) {
		betterarray temp;
		int i = 0;
		do {
			temp[i] = position;
			++i;
			map >> position;
		} while (i < temp.size());
		arr.push_back(temp);
	}
}

int numberOfItems(int right, int down, std::vector<betterarray>& mapArr, char item) {
	int curRightPos = 0;
	int numTrees = 0;
	for (int i = down; i < mapArr.size(); i += down) {
		curRightPos += right;
		if (findItem(curRightPos, i, mapArr, item)) {
			++numTrees;
		}
	}
	return numTrees;
}

bool findItem(int curRight,int curDown,std::vector<betterarray>& mapArr,char item) {
	if (mapArr[curDown][curRight] == item) {
		return true;
	}
	return false;
}



