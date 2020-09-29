///////////////////////////////////////
// Name     : C-Flat library
// Author   : izder456
// License  : Simplified 2-Clause BSD
// Version  : a0.1
// Lauguage : C++
///////////////////////////////////////

using namespace std;
#include <math.h>
#include <stdio.h>
#include <iostream>
#include <cstddef>
#include <type_traits>
//newline function
void coutln () {
	cout << endl;
}

//length function of string
int lens (char * s) {
	char * t;
	int size = 0;
    for (t = s; *t != '\0'; t++) {
        size++;
    };
	return size;
}

