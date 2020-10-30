#include<stdio.h>
#include<math.h>
double l(double x1,double y1,double x2,double y2);
int main()
{
    double x1,x2,y1,y2,x;
    printf("输入两个点x1,y1,x2,y2:");
    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
    x=l(x1,y1,x2,y2);
    printf("l=%.2lf",x);
    return 0;
}
double l(double x1,double y1,double x2,double y2)
{
    double r;
    r=pow(pow(x1-x2,2)+pow(y1-y2,2),0.5);
    return r;
}