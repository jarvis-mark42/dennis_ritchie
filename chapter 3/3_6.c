#include<stdio.h>
void main()
{
	int n,b,i=1,l;
	char s[100];
	scanf("%d\t%d",&n,&b);
	if(n<0)
		s[0]='-';
	else
		s[0]='+';
	do
	{
		s[i++]=n%10+'0';
	}while((n=n/10)!=0);
	s[i]='\0';
	l=strlen(s);
	while(l<b)
	{
		printf(" ");
		l++;
	}
	printf("%c",s[0]);
	while(i)
		printf("%c",s[i--]);
}
