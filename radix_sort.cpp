#include <stdio.h>
#include <stdlib.h>
void printarrat(int array[],int n);
int findMax(int array[],int n)
{
	int i;
	int max=array[0];
	for(i=0;i<n;i++)
	{
		if(array[i]>max)
			max=array[i];
	}
	return max;
}

void countSort(int array[],int n,int temp)
{
		int output[n];
		int i,count[10]={0};
		
		for(i=0;i<n;i++)
		{	
			count[(array[i]/temp)%10]++;
		}
		for(i=1;i<10;i++)
			count[i]=count[i]+count[i-1];
		/*counting sort is stable maintaind relative order there start from end element */
		for(i=n-1;i>=0;i--)
		{
			output[count[(array[i]/temp)%10]-1]=array[i];
			count[(array[i]/temp)%10]--;
		}

		for (i=0;i<n;i++)
		{	
			array[i]=output[i];
		}
		//printarrat(array,n);

}
void printarray(int array[],int n)
{	int i;
	for ( i=0;i<n;i++)
		printf("%d   ",array[i]);
	printf("\n");
}

void radixSort(int array[],int n)
{	int temp=1;
	int max=findMax(array,n);

	while(max/temp>0)
	{	
		countSort(array,n,temp);
		temp*=10;
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
	radixSort(array,n);
	printarray(array,n);
	return 0;
}