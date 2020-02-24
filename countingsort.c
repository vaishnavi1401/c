#include<stdio.h>
int findmax(int a[],int n)
{
int max=a[0];
for(int i=1;i<n;i++)
{
if(max<a[i])
max=a[i];
}
return max;
}
int main()
{
	int i,n,j,k=-1;
	printf("enter array limit");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	k=findmax(a,n);
	int c[k+1]; 
	for(i=0;i<=k;i++)
		c[i]=0;
	for(i=0;i<n;i++)
		c[a[i]]++;
	for(i=1;i<=k;i++)
		c[i]=c[i]+c[i-1];
	
	for(i=0;i<n;i++)
	{ 
		j=c[a[i]];
		b[j-1]=a[i];
		c[a[i]]--;
	}
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
}
