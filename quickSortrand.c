#include<stdio.h>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition(int arr[], int low, int high)
{
int pivot = arr[high];
int i = (low - 1);
for (int j = low; j <= high- 1; j++)
{
if (arr[j] <= pivot)
{
i++;
swap(&arr[i], &arr[j]);
}
}
swap(&arr[i + 1], &arr[high]);
return (i + 1);
}
int partition_r(int arr[], int low, int high) 
{ 
    int random = low + rand() % (high - low); 
    swap(arr[random], arr[high]); 
  
    return partition(arr, low, high); 
} 
void QuickSort(int a[],int p,int r)
{
if(p<=r)
{
int q=partition_r(a,p,r);
QuickSort(a,p,q-1);
QuickSort(a,q+1,r);
}
}
int main()
{
int n,i;
printf("enter limit");
scanf("%d",&n);
int a[10];
printf("enter elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
QuickSort(a,0,n-1);
for(i=0;i<n;i++)
printf("%d",a[i]);
}

