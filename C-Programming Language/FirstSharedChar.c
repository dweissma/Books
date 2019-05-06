#include <stdio.h>

/* Returns the index of the first letter in s1 
also used in s2 */

enum booleans {FALSE, TRUE};

int any(char s1[], char s2[]);

main()
{
    int loc;

    loc = any("Shared characters", "Yeet");
    printf(" %d\n", loc);
}

int in(char c, char s[]); 

int any(char s1[], char s2[])
{
    int i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (in(s1[i], s2))
        {
            return(i);
        }
    }
    return(-1);
}

int in(char c, char s[])
{
    enum booleans found;
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (c == s[i])
        {
            found = TRUE;
            return(found);
        }
    }
    found = FALSE;
    return(found);
}