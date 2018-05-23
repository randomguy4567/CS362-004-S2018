

int testsFailed = 0;

void assertTrue(int isTrue, char* ifFalse){	
	if (isTrue)
		return;
	testsFailed++;
	printf("%s\n",ifFalse);
}

void completeTest(){
	if (testsFailed){
		printf("TEST FAILED\n");
	}else{
		printf("TEST SUCCESSFULLY COMPLETED\n");
	}
}
