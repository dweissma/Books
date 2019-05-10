#include <stdio.h>
/* Concatenates strings using pointers */

/* 
Takes: two pointers to char arrays
Adds t to the end of s
s can not be a null string...
Returns void
*/

#define MAXSIZE 1000

void my_strcat (char *s, char *t)
{
    while(*++s != '\0')
    ;
    while((*s++ = *t++) != '\0')
    ;
}

int main()
{
    char s[MAXSIZE] = "I have";
    char *t = " Yote";
    my_strcat(s, t);
    printf(s);
}