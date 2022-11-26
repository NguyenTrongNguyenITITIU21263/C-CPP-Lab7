/*
5. Consider a T9 phone keypad layout (i.e. numeric key 2 is also used to input a, b or c),
1 and 0 are considered empty characters. Write a program to input a series of keypads pressed
then output the possible combinations of letters.
Ex:
 ______________________________________
| Input: 36                            |
| Output: dm dn do em en eo fm fn fo   |
|______________________________________|
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void Ex5(char s[])
{
	//your codes here
	int n = strlen(s);
    int digitArray[n];
    for(int i=0;i<n;i++)
    digitArray[i]=s[i]-'0';
    char result[n + 1];
    result[n] = '\0';
    printAllWords(digitArray, 0, result, n); 
}
const char phoneTable[10][5]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };            
void printAllWords(int s[],int curr_digit,char output[],int n) 
{    
    int i;
    if (curr_digit == n) 
	{
		printf("%s ", output);
		return; 
    }
	for (i = 0; i < strlen(phoneTable[s[curr_digit]]);i++)      
    {
		output[curr_digit]= phoneTable[s[curr_digit]][i];
		printAllWords(s, curr_digit + 1, output, n);
		if (s[curr_digit] == 0|| s[curr_digit] == 1)
		{
			return;
		}	
    } 
}  
int main(int argc, char *argv[]) {
	char *s = argv[1];
    Ex5(s);
	return 0;
}
