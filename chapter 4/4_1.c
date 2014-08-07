#include<stdio.h>
#define MAXLINE 1000

int strrindex(char s[], char t[]);
void main()
{
	int c,i=0;
	char line[MAXLINE];
	char pattern[100];
	gets(pattern);
	while((c=getchar())!=EOF && c!='\n')
		line[i++]=c;
	if(c=='\n')
		line[i++]=c;
	line[i]='\0';	
	if(i>0)
	{
		printf("%d\n",strrindex(line,pattern));
	}
}

int strrindex(char s[], char t[])
{
	int i,j,flag=0;
	for (i=0;s[i]!='\0';i++)
		for(j=0;t[j]!='\0';j++)
		{
			if(s[i]!=t[j])
				break;
			else
				flag=i;
		}
	return flag;
}	
