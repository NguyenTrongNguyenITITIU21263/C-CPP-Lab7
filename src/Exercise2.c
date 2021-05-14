/*
2. Remove duplicate elements from an array of strings and return the new length.
Do not create any temporary array
Ex:
 _________________________________________
| Input: ab ac ab bc                      |
| Output: 3                               |
|_________________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

int Ex2(char *str[], int n){
	//your codes here


	return n;
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	printf("%d",Ex2(testcase,argc));
			
	return 0;
}