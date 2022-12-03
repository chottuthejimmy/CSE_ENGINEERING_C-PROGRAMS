#include<stdio.h>
int main()
{
    int units;
    float amt;
    char name[10];
    printf("enter the units consumed\n");
    scanf("%d",&units);
    printf("enter the name of consumer\n");
    scanf("%s",name);
    if (units<0)
    {
        printf("units cant be negative");
        return 0;
    }
    if (units<=200)
    amt=units*0.80+100;

    else if (units>200 && units<=300)
    amt=200*0.80+(units-200)*0.90+100;
    else 
    amt= 100+(0.80 * 200)+(0.90 * 100)+(units-300)*1.00;
    
    if(amt>400)
    amt= amt+0.15*amt;
      
    printf("The customer name is %s\n units consumed is %d \n total amount = %.2f\n",name,units,amt);
    return 0;
}