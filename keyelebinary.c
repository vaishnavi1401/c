#include<stdio.h>
int main()
{
int c=0,n,i,num,c1;
printf("enter limit");
scanf("%d",&n);
int a[n];
printf("enter number");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
printf("%d",a[i]);
scanf("%d  ",&num);

int mid,first=0,last=n-1;
mid=(first+last)/2;
while(first!=mid)
{
if(a[mid]==num&&a[mid-1]!=num)
{
c=mid-1;
break;
}
else
mid=mid-1;
first++;
}
mid=n/2;
for(i=mid;i<n;i++)
{
if(a[mid]==num&&a[mid+1]!=num)
{
c1=mid-1;
break;
}
else
mid=mid+1;
}
printf("%d",c1-c+1);
}

