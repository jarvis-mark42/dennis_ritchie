#include<stdio.h>
char buf='\0';
int getch(void)
{
	return buf!='\0'?buf:getchar();
}
void ungetch(int c)
{
	if(buf!='\0')
		printf("ungetch too many characters");
	else
		buf=c;
}
