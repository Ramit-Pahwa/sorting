#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y)
{
	int temp =*x;
	*x=*y;
	*y=temp;
}
int partition(int *arr,int low,int high)
{
	 int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
 
    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int *array,int low ,int high )
{	if(low<high)
	{
	int p=partition(array,low,high);
	quickSort(array,low,p-1);
	quickSort(array,p+1,high);
	}
}
int main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	int *array=(int *)malloc(n*sizeof(int ));
	printf ("enter array ");
	for ( i=0;i<n;i++)
		scanf("%d",&array[i]);
	quickSort(array,0,n-1);
	for ( i=0;i<n;i++)
		printf("%d    ",array[i]);

}