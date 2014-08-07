#include<stdio.h>
void main()
{
	int n,b,i=1;
	char s[100];
	scanf("%d\t%d",&n,&b);
	if(n<0)
		s[0]='-';
	else
		s[0]='+';
	do
	{
		s[i++]=n%b+'0';
	}while((n=n/b)!=0);
	s[i]='\0';
	printf("%c",s[0]);
	while(i)
		printf("%c",s[i--]);
}
	
