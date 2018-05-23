#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

#include "unittest.h"

int main(int argc, char** argv){ 

	printf("Testing int initializeGame(int numPlayers, int kingdomCards[10], int randomSeed, struct gameState *state) \n");
	struct gameState* state;
	state = newGame();
	int* kc = kingdomCards(1, 2, 3, 4, 5, 6, 7, 8, 10, 16);
	int numPlayers = 1;
	int randomSeed = 4;
	
	assertTrue(initializeGame(numPlayers, kc, randomSeed, state) == -1, 
		"Test Failed beacuse didnt detect in invalid number of players.");
	
	numPlayers = 2;
	assertTrue(initializeGame(numPlayers, kc, randomSeed, state) == 0, 
		"Test Failed, couldnt initialize with two players.");	
	
	numPlayers = 3;
	assertTrue(initializeGame(numPlayers, kc, randomSeed, state) == 0, 
		"Test Failed, couldnt initialize with two players.");
	
	kc = kingdomCards(1, 2, 3, 4, 5, 6, 7, 8, 10, 10);

	assertTrue(initializeGame(numPlayers, kc, randomSeed, state) == -1, 
		"Test Failed, did not detect repetition in KCs");
		
	completeTest();
  
}

 