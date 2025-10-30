#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *st, *a;
    int i, c = 0, k = 0;
    st = malloc(1024 * sizeof(char));
    a  = malloc(1024 * sizeof(char));

    scanf("%[^\n]", st);

    st = realloc(st, strlen(st) + 2);  // +2 for space + null
    int len = strlen(st);
    st[len] = ' ';
    st[len + 1] = '\0';

    for (i = 0; i < strlen(st); i++)
    {
        if (st[i] == ' ' ||
            st[i] == '!' ||
            st[i] == ',' ||
            st[i] == '?' ||
            st[i] == '.' ||
            st[i] == '_' ||
            st[i] == '\'' ||
            st[i] == '@')
        {
            if (k > 0)   // ? Print only if a word was collected
            {
                a[k] = '\0';
                printf("%s\n", a);
                k = 0;
            }
        }
        else
        {
            a[k++] = st[i];
        }
    }

    free(st);
    free(a);
    return 0;
}

