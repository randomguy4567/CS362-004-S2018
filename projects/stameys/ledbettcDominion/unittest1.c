#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

#include "unittest.h"

int main(int argc, char** argv){ 

	printf("Testing int compare(const void* a, const void* b)\n");
	
	int a, b;
	a = 1; b = 0;
	assertTrue(compare(&a, &b) == 1, "a > b did not return 1");
	a = 3; b = 4;
	assertTrue(compare(&a, &b) == -1, "a < b did not return -1");
	a = 0; b = 0;
	assertTrue(compare(&a, &b) == 0, "a == b did not return 0");
	
	completeTest();
  
}

