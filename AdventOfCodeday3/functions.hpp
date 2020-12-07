//
//  functions.hpp
//  AdventOfCodeday3
//
//  Created by Zach Howes on 12/7/20.
//

#ifndef functions_hpp
#define functions_hpp
#include <iostream>
#include <vector>
#include <fstream>
#include "betterArray.hpp"

void openFile(std::string, std::ifstream&);

void readFile(std::ifstream&, std::vector<betterarray>&);

int numberOfItems(int, int,std::vector<betterarray>&, char item);

bool findItem(int curRight,int curDown,std::vector<betterarray>& mapArr, char item);

#endif /* functions_hpp */
