#include<stdio.h>
void heapify(int a[],int n,int i)
{

	int smallest=i;
	int l=2*i+1;
	int r=2*i+2;
	int temp;
	if(l<n&&a[l]>a[smallest])
	smallest=l;
	if(r<n&&a[r]>a[smallest])
	smallest=r;
	if(smallest!=i)
	{
		temp=a[i];
		a[i]=a[smallest];
		a[smallest]=temp;

		heapify(a,n,smallest);
	}
}
void buildheap(int a[],int n)
{
	for(int i=(n/2)-1;i>=0;i--)
	heapify(a,n,i);
}
void heapsort(int a[],int n)
{
	buildheap(a,n);
	int temp;
	for (int i=n-1; i>=0; i--) 
	{ 
	
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapify(a, i, 0); 
	} 
	
}
int main()
{
	int i,n,j;
	printf("enter array limit");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	heapsort(a,n);
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
