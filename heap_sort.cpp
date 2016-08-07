#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y)
{
	int temp=*x;
	*x=*y;
	*y=temp;
}
void heapify(int array[],int n,int i)
{
	int largest=i;
	int lchild=2*i+1;
	int rchild=2*i+2;

	if(lchild<n && array[lchild]>array[largest])
		largest=lchild;
	if(rchild<n && array[rchild]>array[largest])
		largest=rchild;

	if(largest!=i)
	{
		swap(&array[largest],&array[i]);
		heapify(array,n,largest);
	}
	return;
}

void heapSort(int *array,int n)
{
	int i;
	for(i=0;i<=n/2;i++)
		heapify(array,n,i);

	for(i=0;i<n;i++)
	{	
		swap(&array[0],&array[n-i-1]);
		heapify(array,n-i-1,0);
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
	heapSort(array,n);
	for ( i=0;i<n;i++)
		printf("%d    ",array[i]);

}