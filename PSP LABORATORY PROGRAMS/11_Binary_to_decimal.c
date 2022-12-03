/*implement Recursive functions for Binary to Decimal Conversion.*/
#include<stdio.h>
int convert(int n);
int main()
{
int n,res;
printf("\nEnter any binary number:");
scanf("%d",&n);
res=convert(n);
printf("\nBinary equivalent of %d is %d",n,res);
}
int convert(int n)
{
if(n==0)
return 0;
else
return(n%10)+2*(convert(n/10));
}