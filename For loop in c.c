#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a, b;
    int i;
 
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    for(i=a;i<=b;i++)
    {
    	printf("\n");
		if(i==1)
    	{
    		printf("One");
		}
		else if(i==2)
		{
			printf("Two");
		}
		else if(i==3)
		{
			printf("Three");
		}
		else if(i==4)
		{
			printf("Four");
		}
		else if(i==5)
		{
			printf("Five");
		}
		else if(i==6)
		{
			printf("Six");
		}
		else if(i==7)
		{
			printf("Seven");
		}
		else if(i==8)
		{
			printf("Eight");
		}
		else if(i==9)
		{
			printf("Nine");
		}
		else if(i>9 && i%2==0)
		{
			printf("Even");
		}
		else if(i>9 && i%2!=0)
		{
			printf("odd");
		}
	}
    return 0;
}

