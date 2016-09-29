#include <stdio.h>
#include <stdlib.h>

int invertidor(char s[],int i,int f)
{
    int a;
    if(i>=f)
        return s;
    else
        a=s[i];
        s[i]=s[f];
        s[f]=a;
        return invertidor(s,++i,--f);
}
main()
{
    char s[]="palabrita";
    int i=0;
    int f=8;
    printf("%s",invertidor(s,i,f));
}
