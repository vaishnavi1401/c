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
	    int a[100],i,n,x;
	    printf("enter limit");
	    scanf("%d",&n);
	    printf("enter array\n");
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    printf("enter number");
	    scanf("%d",&x);
	    int index = search(a, 0, n-1, x); 
	    if (index != -1) 
	       printf("Element %d is present at index %d", x, index); 
	    else
		printf("Element %d is not present", x); 
	    return 0; 
	} 
