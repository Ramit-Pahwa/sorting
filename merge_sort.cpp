#include <stdio.h>
#include <stdlib.h>

void merge(int *a ,int low ,int mid ,int high )
{
	int n1=mid-low;
	int n2=high-(mid+1);
	int i,j,k;

	int L[n1];
	int R[n2];
	for (i=0;i<n1;i++)
		L[i]=a[low+i];
	for (j=0;j<n2;j++)
		R[j]=a[mid+1+j];


	i=0;
	j=0;
	k=low;
	while(i<n1&&j<n2)
	{	
		if(L[i]>R[j])
			{
				a[k]=R[j];
				j++;
			}
		else 
		{
			a[k]=L[i];
			i++;
		}

		k++;
	}

	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}

	while(j<n2)
	{
		a[k]=R[j];
		j++;
		k++;
	}
}

void mergeSort(int *a,int n,int low,int high)
{
	if (high>low)
	{	// refer to notes chain of command 
		int mid=(low+high)/2;
		mergeSort(a,n,low,mid);
		mergeSort(a,n,mid+1,high);
		merge(a,low,mid,high);

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
	mergeSort(array,n,0,n);
	for(i=0;i<n;i++)
		printf("%d  ",array[i]);
	



}