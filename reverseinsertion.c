/*Insertion sort in desc order*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],n,key,i,j;
	printf("enter an array size");
	scanf("%d",&n);
	printf("enter %d element : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]<key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	printf("sorted array :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
