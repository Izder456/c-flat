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
#include <cstring>
#include <type_traits>
#include "cf.h"
#include <iostream>
using namespace N;
using namespace std;

int main() {
	cflat cf;
	printf("line 1");
	cf.coutln();
	printf("line 2");
	cf.coutln();

	char string[] = "test";
	printf("%d", cf.lens(string));

	cf.coutln();
    cf.print2("1, ","2");
    cf.coutln();
    cf.print3("1, ","2, ","3");
    cf.coutln();

	return(0);
}
