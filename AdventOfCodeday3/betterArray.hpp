//
//  betterArray.hpp
//  AdventOfCodeday3
//
//  Created by Zach Howes on 12/7/20.
//

#ifndef betterArray_hpp
#define betterArray_hpp
#include <iostream>

class betterarray {
private:
	const static int length = 31;
	char arr[length];

public:
	
	betterarray() {
		for (int i = 0; i < length; ++i) {
			arr[i] = ' ';
		}
	}
	
	char &operator[] (int i);
	
	int size();

};

#endif /* betterArray_hpp */
