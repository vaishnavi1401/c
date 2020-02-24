#include<stdio.h>
void insertion(int a[],int n)
{
if(n==0)
return;
else
{
insertion(a,n-1);
int key=a[n];
int j=n-1;
while(j>=0&&a[j]>key)
{
a[j+1]=a[j];
j--;
}
a[j+1]=key;
}
}

int main()
{
int i,j,key,n;
printf("enter array limit\n");
scanf("%d",&n);
int a[n];
printf("enter array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
insertion(a,n-1);
printf("sorted array\n");
for(i=0;i<n;i++)
printf("%d ",a[i]);
}

