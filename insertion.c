#include<stdio.h>
int main()
{
int i,j,key,n;
printf("enter array limit");
scanf("%d",&n);
int a[n];
printf("enter array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=1;i<n;i++)
{
j=i-1;
key=a[i];
while(j>=0&&a[j]>key)
{
a[j+1]=a[j];
j--;
}
a[j+1]=key;
}
printf("sorted array");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}

