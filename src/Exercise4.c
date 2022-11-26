/*
4. Receive 2 binary numbers using string then return the sum of those two.
Result should use string.
Ex:
 __________________________________________________________
| Input:  111 11                                           |
| Output: 1010                                             |
|__________________________________________________________|
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void Ex4(char s1[], char s2[])
{
	//your codes here
	int i_a = strlen(s1), i_b = strlen(s2);     
    char three = '1' + '1' + '1', two = '1' + '1' + '0', one = '1' + '0' + '0';     
    int maxSize = (i_a > i_b ? i_a : i_b);     
    char *s = (char*)malloc(maxSize * sizeof(char));     
    for (int i = 0; i < maxSize + 1; ++i)s[i] = '0';     
    while (--i_a >= 0 | --i_b >= 0) 
	{         
        char a_v = i_a < 0 ? '0' : s1[i_a], b_v = i_b < 0 ? '0' : s2[i_b];         
        s[maxSize] += a_v + b_v;         
        if (s[maxSize] == three) s[maxSize] = '1', s[maxSize - 1] = '1';         
        else if (s[maxSize] == two) s[maxSize] = '0', s[maxSize - 1] = '1';         
        else if (s[maxSize] == one) s[maxSize] = '1', s[maxSize - 1] = '0';         
        else s[maxSize] = '0', s[maxSize - 1] = '0';         
        maxSize--;     
	}     
        if (s[0] == '0')
		{
			for (int i = 0; i < strlen(s); ++i)s[i] = s[i + 1];
			{
				printf("Output: %s",s); 
		    
			}
		}	
}

int main(int argc, char *argv[]) {
	char *n1 = argv[1];
    char *n2 = argv[2];

    Ex4(n1,n2);
		
	return 0;
}
