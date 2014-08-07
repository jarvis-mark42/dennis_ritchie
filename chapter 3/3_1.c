#include<stdio.h>
void main()
{
	int low,high, mid;
	int x, n,i;
	int a[100];
	scanf("%d\t%d",&n,&x);
	for(i=0;i<n;i++)
		scanf("\n%d",&a[i]);
	low=0;
	high=n-1;
	mid=(low+high)/2;
	while(low<=high && a[mid]!=x)
	{
		if(x<a[mid])
			high=mid-1;
		else
			low=mid+1;
		mid=(low+high)/2;
	}
		if(low<=high)
			printf("%d\n",mid);
		else
			printf("Not Found\n");
}
