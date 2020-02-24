#include<stdio.h>

int Search(int arr[], int l, int r, int x) 
{ 
     if (r < l) 
        return -1; 
     if (arr[l] == x) 
        return l; 
     if (arr[r] == x) 
        return r; 
     return Search(arr, l+1, r-1, x); 
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
	    int index = Search(a, 0, n-1, x); 
	    if (index != -1) 
	       printf("Element %d is present at index %d", x, index); 
	    else
		printf("Element %d is not present", x); 
	    return 0; 
	} 
