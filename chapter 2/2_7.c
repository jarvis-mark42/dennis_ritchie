#include<stdio.h>
void main()
{
	unsigned int x,y;
	int p, n,i=0,a[10],j;
	scanf("%d\t%d\t%d",&x,&p,&n);
	while(x!=0)
	{
		a[i++]=x%2;
		x=x/2;
		
	}
	for(j=p-n+1;j<=p;j++)
		a[j]=!a[j];
	for(j=i-1;j>=0;j--)
		printf("%d",a[j]);
	printf("\n");
}
