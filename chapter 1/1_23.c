#include<stdio.h>
void main()
{
	int i,j;
	i=getchar();
	while(i!=EOF)
	{
		if(i=='/')
		{
			j=getchar();
			if(j=='*')
				while((j=getchar())!='*'&& (j=getchar())!='/');
			else if(j=='/')
				while((j=getchar())!='\n');
			else
				putchar(j);
		}
		else
			putchar(i);
		i=getchar();
	}
}
/*"comment"*/
