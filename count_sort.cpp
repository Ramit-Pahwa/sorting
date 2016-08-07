#include <stdlib.h>
#include <stdio.h>



#define MAX 1000

void countSort(int arr[],int size)
{

	int *output;
	output=(int * )malloc(size*sizeof(int));
	
	int count[MAX];
	int i;
	for(i=0;i<size;i++)
	{
		count[arr[i]]=count[arr[i]]+1;
	}
	for(i=0;i<MAX;i++)
	{
		count[i]=count[i]+count[i-1];
	}
	for (i=n-1;i>0;i--)
	{
		output[count[arr[i]]]=arr[i];
		--count[arr[i]];
	}
	for (i=1;i<=size;i++)
		printf("%d   ",output[i]);

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
	countSort(array,n);
}