#include <stdio.h>
#include <string.h>
// #include <iostream>
#define MAX 256

void countSort(char array[])
{	

	char output[strlen(array)];
	int count[MAX],i;
	for(i=0;i<MAX;i++)
		count[i]=0;

	for(i=0;i<strlen(array);i++)
		{		count[array[i]]++;
		}
	for(i=1;i<=MAX;i++)
		count[i]=count[i]+count[i-1];
	for(i=0;i<strlen(array);i++)
	{
		output[count[array[i]]-1]=array[i];
		count[array[i]]--;
	}
	printf("%s",output);

}




int main()
{
	 char arr[] = "geeksforgeeks";//"applepp";
 	int y=strlen(arr);
 	printf("%d\n",y);
    countSort(arr);

	return 0;

}