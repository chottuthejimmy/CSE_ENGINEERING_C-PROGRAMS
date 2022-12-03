#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2,disc;
    printf("enter the co-efficient a,b &c\n");
    scanf("%f%f%f",&a,&b,&c);
    if (a==0||b==0||c==0)
    {
        printf("it is not a quadratic equation");
        return 0;
    }
    disc=(b*b)-(4*a*c);
    if ((disc==0))
    {
        printf("the roots are real and equal\n");
        x1=x2= -b/(2*a);
        printf("root1=root2=%f",x1,x2);
    }
    else if(disc>0)
    {
        printf("the roots are real and distinct\n");
        x1=(-b+sqrt(disc))/(2*a);
        x2=(-b-sqrt(disc))/(2*a);
        printf("root 1=%f\n",x1);
        printf("root 2=%f\n",x2);
    }
    else
    {
        printf("the roots are complex and imaginary\n");
        x1=-b/(2*a);
        x2=sqrt(fabs(disc)/(2*a));
        printf("root1= %.2f+i %f\n root2=%.2f-i %f\n ",x1,x2,x1,x2);
    }
        printf("\n");
        return 0;
}
    

