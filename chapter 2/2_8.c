#include<stdio.h>
#include<math.h>
void main()
{
	int x;
	int n,i=0,count=0,j,num;
	scanf("%d\t%d",&x,&n);
	num=x;
	while(x!=0)
	{
		count++;
		x=x/2;	
	}
	//printf("%d\n",count);
	j=num & (int)(pow(2,n)-1);
	num>>=n;
	//printf("%d\n",j);
	j<<=(count-n);
	//printf("%d\n",j);
	num=num|j;
	printf("%d\n",num);
}

	
