#include<stdio.h>
void main()
{
	char s[1000],t[1000];
	int i=0,j=0,c;
	while((c=getchar())!=EOF)
		t[i++]=c;
	t[i]='\0';
	i=0;
	while(t[i]!='\0')
		{
			if(t[i]=='\n')
			{
				s[j]='\\';
				j++;
				s[j++]='n';
			}
			if(t[i]=='\t')
			{
				s[j]='\\';
				j++;
				s[j]='t';
			}
			else
				s[j]=t[i];
			i++;
			j++;
		}
	s[j]='\0';
	puts(s);
}
