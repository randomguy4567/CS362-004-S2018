#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int compare(const void* a, const void* b);

#include "unittest.h"

int main(int argc, char** argv){ 

	printf("Testing int endTurn(struct gameState *state) \n");
	struct gameState* state;
	state = newGame();
	int* kc = kingdomCards(1, 2, 3, 4, 5, 6, 7, 8, 10, 16);
	int numPlayers = 2;
	int randomSeed = 4;
	
	initializeGame(numPlayers, kc, randomSeed, state);
	
	assertTrue(whoseTurn(state) == 0, "Should have been player 1's turn");
	
	endTurn(state);
	
	assertTrue(whoseTurn(state) == 1, "Should have been player 2's turn");
	
	endTurn(state);
	
	assertTrue(whoseTurn(state) == 0, "Should have been player 1's turn");
	
		
	completeTest();
  
}

 