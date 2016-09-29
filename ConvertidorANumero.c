#include <stdio.h>
#include <stdlib.h>
double convertir(char a[])
{
    int i=0;
    double num,num3,num2;
    num=num2=0;
    num3=10;
    char signo='0';
    if (a[0]=='-')
        i=1;
    for (i;a[i]!='\0';i++){
        if(a[i]>='0'&&a[i]<='9'){
            if(signo=='0')
                num= 10*num +(a[i]-'0');
            if(signo == '.'){
                num= num +((a[i]-'0')/num3);
                num3=num3*10;
            }
            if(signo=='e'||signo=='-'){
                num2=10*num2 +(a[i]-'0');
            }
        }
        else if (a[i]=='.'){
            signo = '.';
            continue;
        }
        else if (a[i]=='e'){
            signo = 'e';
            continue;
        }
        else if (a[i]='-'){ //'-' equivale a 'e-'
            signo = '-';
            continue;
        }
    }
    while(num2>0&&signo=='e'){
        num=num*10;
        num2--;
    }
    while(num2>0&&signo=='-'){
        num=num/10;
        num2--;
    }
    if (a[0]=='-')
        return -num;
    else return num;
}
int main()
{
    char a[] = "-123.2e-2" ;
    printf("%1.3f",convertir(a));
    return 0;
}

