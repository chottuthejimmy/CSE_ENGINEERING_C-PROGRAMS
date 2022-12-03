#include<stdio.h>
typedef struct students
{
    char name[20],usn[20];
    int marks;
}students;
int main()
{
    students s[10];
    int i,n,sum=0;
    float avg;
printf("enter the number of students\n");
scanf("%d",&n);
for ( i = 0; i<n; i++)
{
    printf("enter the name of %d student\n",i+1);
    scanf("%s",s[i].name);
    printf("enter the usn of student\n");
    scanf("%s",s[i].usn);
    printf("enter the marks of %d student\n",i+1);
    scanf("%d",&s[i].marks);
    sum= sum+s[i].marks;
}
avg=(float) sum/n;
printf("the students details above the average marks (%f) are as follows\n",avg);
printf("usn\t name\t marks\t");
for (i = 0; i<n; i++)
{
 if(s[i].marks>=avg)
 printf("%s\t %s\t %d\n",s[i].usn,s[i].name,s[i].marks);
}
printf("the students details below the average marks (%f) are as follows\n",avg);
printf("usn\t name\t marks\t");
for (i = 0; i<n; i++)
{
 if(s[i].marks<avg)
 printf("%s\t %s\t %d\n",s[i].usn,s[i].name,s[i].marks);
}
}