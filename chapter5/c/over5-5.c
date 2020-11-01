/*
祝津一
2004240205
输入整数中2的个数
*/
#include<stdio.h>
int countdigit(int number,int digit);
int main(){
    int m,number,digit;
    printf("enter number：\n");
    scanf("%d",&number);
    printf("enter digit");
    scanf("%d",&digit);
    m=countdigit(number,digit);
    printf("%d\n",m);
    return 0;
}
int countdigit(int number,int digit){
    int a,b,k=0;
    do{
        a=number%10;
        b=number/10;
        if(a==2)
        k++;
		number=b;
    }while(b!=0);
    return k;
}