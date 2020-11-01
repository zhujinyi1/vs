/*
2004240205
祝津一
求余弦函数近似值
*/
#include<stdio.h>
#include<math.h>
double funcos(double e,double x);
double fact(int i);
int main(){
    double y,e,x;
    printf("enter 精度\n");
    scanf("%lf",&e);
    printf("enter x\n");
    scanf("%lf",&x);
    y=funcos(e,x);
    printf("cos%lf的近似值为%lf",x,y);
    return 0;
}
double funcos(double e,double x){
    double i=0,f=1,j,result=1,a=-1;
    for(i=0;fabs(pow(x,i)/fact(i)>=e);i=i+2){
        result=result+a*pow(x,i)/fact(i);
        a=-a;
    }
    return result;
}
double fact(int j){
    if(j==0||j==1)
    return 1;
    else
    return j*fact(j-1);
}