#include<stdio.h>
#define limit 20
void main()
{
	char s[limit];
	int i,c;
	for(i=0;i<limit-1;i++)
	{
		if((c=getchar())!='\n')
		{
			if(c!=EOF)
				s[i]=c;
			else
				break;
		}
		else
			break;
	}	
	s[limit]=0;
	puts(s);
}
