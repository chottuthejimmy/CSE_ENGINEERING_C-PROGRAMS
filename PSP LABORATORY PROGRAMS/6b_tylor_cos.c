#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float x,x1,term,sum;
    printf("enter the angle in degree\n");
    scanf("%f",&x);
    x1=x;
    x=(x*3.142)/180;
    i=0;
    term=1;
    sum=1;
    do
    {
        i=i+2;
        term=(-term*x*x)/(i*(i-1));
        sum=sum+term;
    } 
    while (fabs(term)>0.00005);
    printf("cos(%f) is %f\n",x1,sum);
    printf("using library sunction cos(%f) is %f\n",x1,cos(x));
    return 0;
}
