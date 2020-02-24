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
int n,f=0,i,j,k,num=0;;
printf("enter limit");
scanf("%d",&n);
int a[n];
printf("enter numbers");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter number\n");
scanf("%d",&num);
i=0;j=1;
 while (i<n && j<n) 
    { 
        if (i != j && a[j]-a[i] == num) 
        { 
            printf("Pair Found: (%d, %d)", a[i], a[j]); 
        } 
        else if (a[j]-a[i] < num) 
            j++; 
        else
            i++; 
    } 
  
//printf("%d  %d  %d ",i,j,k);
}
