#include<stdio.h>
void main()
{
	unsigned int x;
	int count=0;
	scanf("%d",&x);
	while(x!=0)
	{
		x &=(x-1);
		count++;
	}
	printf("%d\n",count);
}

