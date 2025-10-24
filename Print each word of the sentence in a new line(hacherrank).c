#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char *s, *st;
    int i, k = 0;
    s = malloc(1024 * sizeof(char));
    st = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    st = realloc(st, strlen(st) + 1);
    int len=strlen(s);
    s[len] = ' ';         // add the character
    s[len + 1] = '\0';
    //Write your logic to print the tokens of the sentence here.

    for (i = 0; i < strlen(s); i++) 
	{
        if (s[i] == ' ') 
		{
            st[k] = '\0';  // terminate the current word
            printf("%s\n", st);  // print the word
            k = 0;  // reset index
        } else 
		{
            st[k++] = s[i];
        }
    }

    free(s);
    free(st);

    return 0;
}

