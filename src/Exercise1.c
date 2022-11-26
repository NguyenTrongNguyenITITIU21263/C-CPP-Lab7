/*
1. Given an array of strings, find the longest common prefix of all element.
If there is no prefix, just print “Prefix not found!”
 ________________________________________________
| Input: abc abd abf                             |
| Output: ab                                     |
|________________________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void Ex1(char *str[], int n){
size_t findprefix( const char *str1, const char *str2 )
{
    size_t n = 0;
    for ( ; *str1 && *str1 == *str2; ++str1, ++str2 )
    {
        ++n;
    }
    return n;
}

int main( void ) 
{
    const char *str1 = "abc";
    const char *str2 = "abd";
    size_t n = findprefix( str1, str2 );
    if ( n != 0 ) printf( "\"%.*s\"\n", ( int )n, str1 );
    return 0;
}
	
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex1(testcase,argc);
			
	return 0;
}
