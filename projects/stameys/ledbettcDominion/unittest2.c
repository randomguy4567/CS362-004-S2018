#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

#include "unittest.h"

int main(int argc, char** argv){ 

	printf("Testing int* kingdomCards(int k1, int k2, int k3, int k4, int k5, int k6, int k7, int k8, int k9, int k10) \n");
	int* kc = kingdomCards(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	assertTrue(
		(kc[0] == 1) &&
		(kc[1] == 2) &&
		(kc[2] == 3) &&
		(kc[3] == 4) &&
		(kc[4] == 5) &&
		(kc[5] == 6) &&
		(kc[6] == 7) &&
		(kc[7] == 8) &&
		(kc[8] == 9) &&
		(kc[9] == 10) ,
		"KCs did not return correct list of values"
	);

	completeTest();
  
}

