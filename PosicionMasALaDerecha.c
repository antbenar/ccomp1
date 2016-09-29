#include <stdio.h>
#include <stdlib.h>

int strindex(char s[],char t)
{
    int x=-1;
    int i;
    for (i=0;s[i]!='\0';++i)
        if (s[i]==t)
            x=i;
    if (x==-1)
        return -1;
    return x;
}
main()
{
    char s[]="palabrita";
    char t=getchar();
    printf("%d",strindex(s,t));
}

