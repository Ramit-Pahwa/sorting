#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y )
{	
	int temp=*x;
	*x=*y;
	*y=temp;


}

void selectionSort(int a[] ,int n )
{

	int i,j,minindex;
	for (i=0;i<n-1;i++)
	{	
		minindex=i;
		for (j=i+1;j<n;j++)
		{
			
			if(a[minindex]>=a[j])
				{
					minindex=j;
				}
				
		}
	swap(&a[minindex],&a[i]);
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
	selectionSort(array,n);
	for(i=0;i<n;i++)
		printf("%d  ",array[i]);


}


