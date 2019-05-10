#define ALLOCSIZE 10000 /* Available space */

static char allocbuf[ALLOCSIZE]; //storage space
static char *allocp = allocbuf; //next free position

char *alloc(int n) //return a pointer to n characters
{
    if (allocbuf + ALLOCSIZE - allocp >= n)//It fits
    {
        allocp += n;
        return allocp - n; // Pointer to beginning of the characters
    }
    else // doesn't fit
    {
        return 0;
    }
}

void afree(char *p)
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)//p is in Alloc buff
        allocp = p;
}
