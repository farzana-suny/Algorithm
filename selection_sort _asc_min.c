#include<stdio.h>
//void selection_sort(int A[],int n);


void selection_sort(int A[],int n)
{
	int i,min,j,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
		 if(A[j]<A[min])
		 {
		 	min=j;
		 }
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}

}
int main()
{
	int n,i;
	printf("enter the array size\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//printf("display the array elements in unsorted order\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	selection_sort(a,n);
	printf("display the array elements in sorted order\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}

}

