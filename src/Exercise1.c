/*
1.	Write a program to construct the Pascal triangle with the given integer n.
Ex:
______________________________________
| Input: 3                           |
| Output:                            |
| 1                                  |
| 1 1                                |
| 1 2 1                              |
| 1 3 3 1                            |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Ex1(int k,int n){
	//Your codes here
   
	if(k==0 || k==n)
	{
		return 1;
	}else
	{
		return Ex1(k-1,n-1)+Ex1(k,n-1);
	}
}


int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	int i,k;
	for(i=0;i<=testcase;i++)
	{
		for(k=0;k<=i;k++)
		{
			printf("%5d",Ex1(k,i));
		}
		printf("\n");
	}

	return 0;
}
