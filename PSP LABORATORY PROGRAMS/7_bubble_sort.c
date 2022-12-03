#include<stdio.h>
int main()
{
    int i,j,n,a[10],temp;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("enter the elements of an array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("before sorting\n");
    for (i=0; i<n; i++)
    printf("%d\n",a[i]);
    for (i=0; i<(n-1); i++)
    {
        for ( j=0; j < (n-1)-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
            
        }
        
    }
    printf("after sorting\n");
    for (i=0; i<n; i++)
    printf("%d\n",a[i]);
    return 0;
}