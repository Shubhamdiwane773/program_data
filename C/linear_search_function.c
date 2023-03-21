#include<stdio.h>
#define MAX 10
int linear_search(int a[],int n,int data)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(data==a[i])
			return i;
	}
	return -1;
}
int main()
{
	int a[MAX],n,data,i,r=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter element\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the data which u want to search\n");
	scanf("%d",&data);
	r=linear_search(a,n,data);
	if(r==-1)
		printf("The data is not found in the array\n");
	else
		printf("%d data is found in the array at location %d\n",data,r);
}
