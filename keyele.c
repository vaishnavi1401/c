#include<stdio.h>
int main()
{
int c=0,n,i,j;
printf("enter limit");
scanf("%d",&n);
int a[n];
printf("enter number");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d",a[i]);
scanf("%d",&j);
for(i=0;i<n;i++)
{
if(a[i]==j)
c++;
}
if(i>n)
printf("number not found");
printf("%d",c);
}
