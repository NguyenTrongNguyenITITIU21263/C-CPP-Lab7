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

int Ex2(char *str[], int n)
{
    int i, j, k, count = 0, flag = 0;
    int *statusArray = (int*) malloc(sizeof(int)*n);
    for(i = 0; i < n; i++)
        statusArray[i] = 0;
    for(i = 0; i < n; i++)
    {
        char *temp = str[i];
       for(j = i+1; j < n; j++)
       {
           if(statusArray[j] == 0) 
           {
                char *toBeCompared = str[j];     
                k = 0;
                flag = 0;
                if(strlen(toBeCompared) != strlen(temp))  continue;
                while(toBeCompared[k]!='\0')
                {
                    if(toBeCompared[k] != temp[k])
                    {
                        flag = 1;
                        break;
                    }
                    k++;
                }

                if(!flag) statusArray[j] = 1;
           }
       }
    }
    for(i = 0; i < n; i++)
    {
        if(statusArray[i] == 0)count++;
    } 
	return count;
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