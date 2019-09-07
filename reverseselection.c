/*selection sort in descending order*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],n,min,i,j,temp;
	printf("enter an array size");
	scanf("%d",&n);
	printf("enter %d element : \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>0;i--)
	{
		min=0;
		for(j=0;j<=i;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	printf("sorted array :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
