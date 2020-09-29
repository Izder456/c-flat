///////////////////////////////////////
// Name     : C-Flat example program
// Author   : izder456
// License  : GPLv3
// Version  : a0.1
// Lauguage : C++
///////////////////////////////////////

#include <math.h>
#include <stdio.h>
#include <iostream>
#include <cstddef>
#include <type_traits>
#include "cf.h"
#include <iostream>
using namespace N;

int main() {
	cflat cf;
	printf("line 1");
	cf.coutln();
	printf("line 2");
	cf.coutln();

	char string[] = "test";
	std::cout << cf.lens(string);

	return(0);
}
