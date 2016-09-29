#include <stdio.h>
#include <stdlib.h>

int lower(char s)
{
    s=s+('a'-'A');
    return s;
}

main()
{
    char z;
    z=getchar();
    printf("%c",lower(z));
}
