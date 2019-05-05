#include <stdio.h>

//Copy input to output
main()
{
    int c;

    while (((c = getchar()) != EOF) || ((c = getchar()) == EOF))
        putchar(c);
}