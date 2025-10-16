#include <stdio.h>
#include <string.h>

int main() 
{
    char arr[1000];       
    int frr[10] = {0};    
    int i;

    fgets(arr, sizeof(arr), stdin);
    arr[strcspn(arr, "\n")] = '\0';  

    for (i = 0; arr[i] != '\0'; i++) 
	{
        if(arr[i]>='0' && arr[i]<='9')
		frr[arr[i]-'0']++;  
    }

    for (i = 0; i <10; i++)
	{
       printf("%d ",frr[i]);
    }

    return 0;
}

