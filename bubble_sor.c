#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int* y)
{
	int temp=*x;
	*x=*y;
	*y=temp;

}


void bubbleSort(int *a,int n)
{
	int i,j;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-1;j++)
		{	//printf("%d----%d\n",a[j],a[j+1]);
			if(a[j+1]<=a[j])
			{
				swap(&a[j+1],&a[j]);
			}

		}
	}



}

int main()
{
	int n;
	int i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int *array=(int* )malloc(n*sizeof(int ));
	printf("Enter the array :");
	for (i=0;i<n;i++)
		scanf("%d",&array[i]);
	bubbleSort(array,n);
	for(i=0;i<n;i++)
		printf("%d  ",array[i]);


}
