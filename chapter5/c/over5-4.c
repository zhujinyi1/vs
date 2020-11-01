#include<stdio.h>
int main()
{
    int a=1,b=1;
    for(b=1;b<=9;b++){
        printf("\n");
        for(a=1;a<=b;a++){
            printf("%d*%d=%d",a,b,a*b);
        }
    }
}