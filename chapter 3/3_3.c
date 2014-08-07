#include<stdio.h>
void main()
{
	char a,c;
	int i=0,j;
	char s[10];
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]=='-')
		{
			if(i==0 || s[i+1]=='\0')
				printf("-");
			else
			{
				a=s[i-1];
				c=s[i+1];
				i++;
			}
		}
		for (j=a;j<=c;j++)
			printf("%c",j);
		i++;
	}
}
