///////////////////////////////////////
// Name     : C-Flat library
// Author   : izder456
// License  : GPLv3
// Version  : a0.1
// Language : C++
///////////////////////////////////////

#include <math.h>
#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstddef>
#include <type_traits>
#include "cf.h" // header in local directory
#include <iostream>// header in standard library
using namespace std;
using namespace N;

//newline function
void cflat::coutln() {
	cout << endl;
}

//length function of string
int cflat::lens(char * s) {
	char * t;
	int size = 0;
    for (t = s; *t != '\0'; t++) {
        size++;
    };
	return size;
}

void cflat::print2(char * s1, char * s2) {
    cout << s1 << s2;
}

void cflat::print3(char * s1, char * s2, char * s3) {
    cout << s1 << s2 << s3;
}

