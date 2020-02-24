//program to find numberwho has sum of two numbers 
#include<stdio.h>
int search(int a[],int f ,int l ,int num)
{
if(f>l)
return -1;
int mid=(l+f)/2;
if(a[(f+l)/2]<num)
search(a,mid+1,l,num);
else if(a[mid]>num)
search(a,f,mid-1,num);
else 
return mid;
}
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
sum=a[i]+a[j];k=-1;
k = search(a, j, n-1, sum);
if(k!=-1)
{f=1;
break;
}
}
if(f==1)
break;
}
printf("%d  %d  %d ",i,j,k);
}
