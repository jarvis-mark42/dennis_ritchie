#include<stdio.h>
#define BUFSIZE 100
char buf[BUFSIZE];
int bufp=0;
void ungetch(int c)
{
	if(bufp>=BUFSIZE)
		printf("ungetch: too many characters");
	else
		buf[bufp++]=c;
}
void ungets(char s[])
{
	int i=0;
	for (;s[i]!='\0';i++)
		ungetch(s[i]);
}
void main()
{
	int c,i=0;
	char s[BUFSIZE];
	while((c=getchar())!='\n')
	{
		s[i++]=c;
	}
	s[i]='\0';
	ungets(s);
	puts(buf);
}
