#include<stdio.h>
#define MAXLINE 1000
int get_line(char line[], int maxline);
void co_py(char to[], char from[]);
void main()
{
	int len,max;
	char line[MAXLINE], longest[MAXLINE];
	max=0;
	while((len = get_line(line,MAXLINE))>0)
	{	
		if(len>max)
		{
			max=len;
			co_py(longest,line);
		}
	}
	printf("the longest line is:\n%s\nwith the length of %d",longest,max);
}
int get_line(char line[],int lim)
{
	int c,count;
	for(count=0;count<lim-1 && (c=getchar())!=EOF && c!='\n';++count)
		line[count]=c;
	if(c=='\n')
	{
		line[count]=c;
		++count;
	}
	line[count]='\0';
	return count;
}
void co_py(char to[],char from[])
{	
	int i;
	i=0;
	while(from[i]!='\0')
	{
		to[i]=from[i];
		++i;
	}
}
