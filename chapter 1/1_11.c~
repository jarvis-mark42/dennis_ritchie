#include<stdio.h>
#define IN 1
#define OUT 0
void main()
{
	int c,nl,nw,nc,state,state1;
	state=state1=OUT;
	nl=nw=nc=0;
	while((c=getchar())!=EOF)
	{
		++nc;
		if(c=='\n')
			state1=OUT;
		else if(state1==OUT)
		{
			state1=IN;
			++nl;
		}
		if(c==' ' || c=='\n' || c=='\t')
			state=OUT;
		else if(state==OUT)
		{
			state=IN;
			++nw;
		}
	}
	printf("%d\t%d",nl,nw);
}
