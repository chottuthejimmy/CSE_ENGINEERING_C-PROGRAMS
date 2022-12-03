#include<stdio.h> 
int hcf(int, int);
int main( )
{
int x, y, gcd, lcm;
printf("Enter two numbers\n");
scanf("%d%d", &x, &y);
gcd = hcf(x, y);
lcm = (x * y)/ gcd;
printf("GCD = %d\n", gcd);
printf("LCM = %d\n", lcm);
}
int hcf( int x, int y)
{
if(x == 0)
return y;
while(y!=0)
{
if(x > y)
x = x-y;
else
y = y-x;
}
return x;
} 

