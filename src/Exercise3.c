/*
3. Receive 2 complex numbers using string then return a string
that represent the product of those two. Result should use string.
Complex number has the form of a+bi (i2 = -1, b can be negative or positive)
Ex:
 __________________________________________________________
| Input: 3+2i 3+2i                                         |
| Output: 5+12i                                            |
|__________________________________________________________|
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<limits.h>
#define SIZE 1000

void Ex3(char s1[], char s2[]){
	//your codes here
		int s1Size = strlen(s1);     
	int s2Size = strlen(s2);
	int real1 = 0,real2 = 0,img1 = 0,img2 = 0;
	int flag1 = 1;     
	int flag2 = 1;
	for(int i = 0; i < s1Size; i++) 
	{
		if(s1[i] == '-') 
		{
			if(flag1 == 1)
			{
				flag1 = 0;
			}else 
			{
				flag2 = 0;
			} 
		}
		if(s1[i]== '+') 
		{
			flag1 =1;
			flag2 =0;
			if( s1[i] >= '0' && s1[i] <= '9')
			{
				if (flag2 == 1)
				{
					if(real1 < 0)
					{
						real1 *= -1;
						real1 *= 10;
						real1 += s1[i]- '0';
						if (flag1 == 0 && flag2 == 1)
						{
							real1 *= -1;
						}
					}
				}else
				{
					if(img1 < 0)
					{
						img1 *= -1;
						img1 *= 10;
						img1 += s1[i] - '0';
						if (flag1 == 0 && flag2 == 0)
						{
							img1 *= -1;
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < s2Size; i++)
	{
		if(s2[i] == '-')
		{
			if(flag1 == 1)
			{
				flag1 = 0;
			}else
			{
				flag2 = 0;
			}	
		}
		if(s2[i] == '+')
		{
			flag1 = 1;
			flag2 = 0;
			if (s2[i]>= '0' && s2[i] <= '9')
			{
				if(flag2 == 1)
				{
					if (real2 < 0)
					real2 *= -1;
					real2 *= 10;
					real2 += s2[i] - '0';
					if(flag1 == 0 && flag2 == 1)
					{
						real2 *= -1;
					}
				}else
				{
					if(img2 < 0)
					{
						img2 *= -1;
						img2 *= 10;
						img2 += s2[i] - '0';
						if(flag1 == 0 && flag2 == 0)
						{
							img2 *= -1;
						}
					}
				}
			}
		}
	}
	int realRes = real1 * real2 - (img1*img2);
	int imgRes = real1 * img2 + real2 * img1;
	if(imgRes >= 0)
	{
		printf("%d+%di\n", realRes,imgRes);
	}else
	{
		printf("%d%di\n",realRes,imgRes);
	}	
}

int main(int argc, char *argv[]) {
	char *n1 = argv[1];
	char *n2 = argv[2];
	
	Ex3(n1,n2);
		
	return 0;
}
