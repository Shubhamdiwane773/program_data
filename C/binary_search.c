#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int binary_search(int a[],int n,int data)
{
	int low=0,up=n-1,mid;
	while(low<=up)
	{
		mid=(low+up)/2;
		if(data>a[mid])
			low=mid+1;
		else if(data<a[mid])
			up=mid-1;
		else
			return mid;
	}
	return -1;

}
int main()
{
	int a[MAX],i,data,n,r=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the data in sorted order\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the data which u want to search\n");
	scanf("%d",&data);
	r=binary_search(a,n,data);
	if(r==-1)
		printf("data is not found in aray\n");
	else
		printf("%d data is found at location %d\n",data,r);
}
