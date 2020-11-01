/*
2004240205
祝津一
输出水仙花数
*/
#include<stdio.h>
#include<math.h>
int is(int number);
int main()
{
    int m,n,i,k;
    printf("enter m,n(100<=m,n<=1000)");
    scanf("%d%d",&m,&n);
    if(m>=n)
    {
    k=m;
    m=n;
    n=k;
    }
    for(i=m;i<=n;i++){
        if(i==is(i))
        printf("%d是水仙花数\n",i);
    }
    return 0;
}
int is(int number){
    int a,b,c,s;
    a=number/10%10;
    b=number/100%10;
    c=number%10;
    s=pow(a,3)+pow(b,3)+pow(c,3);
    return s;
}