//program to find numberwho has sum of two numbers 
#include<stdio.h>
int main()
{
int n,f=0,i,j,k,temp,temp1,sum=0;;
printf("enter limit");
scanf("%d",&n);
int a[n];
printf("enter numbers");
for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
sum=a[i]+a[j];
for(k=j;k<n;k++)
{
if(sum==a[k]){
f=1;
break;
}
}
if(f==1)break;
}
if(f==1)break;
}
printf("%d  %d  %d ",i,j,k);
}
