#include<stdio.h>
unsigned getbits(unsigned , int , int);
//setbits(unsigned, int, int, unsigned);
void main()
{
	unsigned int x,y;
	int p, n;
	scanf("%d\t%d\t%d",&x,&p,&n);
	x=getbits(x,p,n);
	y=y|x;
	printf("%d\n",y);
}
unsigned getbits(unsigned x, int p, int n)
{
	return(x>>=(p+1-n))& ~(~0 << n);
}
