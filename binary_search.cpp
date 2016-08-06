#include <stdio.h>
#include <stdlib.h>

int binarySearch(int *a,int l,int u,int key)
{
	if(l>=u)
		return -1;
	int m;
	// middle elemnet is lower element +(upper elemnet -lowe elemnet )/2
	m=l+(u-l)/2;
	if(a[m]==key)
		return m;
	else if (a[m]>key)
		return binarySearch(a,l,m-1,key);
	else 
		return binarySearch(a,m+1,u,key);

}



int main()
{
	int n,i;
	printf("Enter n:");
	scanf("%d",&n);
	int *a=(int *)malloc(sizeof(int )*n);
	printf("enter array");
	for (i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	int x=binarySearch(a,0,n,5);
	if (x!=-1)
	{
	printf("%d",x);
	}
	else 
		printf("not in array");
}