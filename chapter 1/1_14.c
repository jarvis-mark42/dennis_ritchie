#include<stdio.h>
void main()
{
	int c;
	int i,j,p;
	int a[26];
	char pr[26][10];
	for(i=0;i<26;i++)
		a[i]=0;	
	while((c=getchar())!=EOF)
	{
		if(c>='a'&&c<='z'){
		p=c-'a';	
		++a[p];
		}
		else if(c>='A'&&c<='Z'){
		p=c-'a';	
		++a[p];
		}
	}
	for(i=9;i>=0;i--)
		for(j=0;j<26;j++)
			pr[j][i]=' ';
	for(i=0;i<26;i++)
	{
		for(j=0;j<a[i];j++)
			pr[i][j]='#';
	}
	
	for(i=9;i>=0;i--)
	{
		for(j=0;j<26;j++)
		{
			printf("%c",pr[j][i]);		
		}
		printf("\n");
	}
}
