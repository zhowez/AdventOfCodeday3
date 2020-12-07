//
//  betterArray.cpp
//  AdventOfCodeday3
//
//  Created by Zach Howes on 12/7/20.
//

#include "betterArray.hpp"

char &betterarray::operator[] (int i) {
	if (i >= length) {
		return arr[i%length];
	}
	return arr[i];
}

int betterarray::size() {
	return length;
}
