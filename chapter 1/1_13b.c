#include<stdio.h>
void main()
{
	int c;
	int i,j;
	char a[10][10];
		
	for(i=0;i<=9;i++)
		for(j=0;j<=9;j++)
			a[i][j]=' ';
	j=0;
	i=9;
	while((c=getchar())!=EOF){
		if(c==' '||c=='\n'||c=='\t')
		{
			j++;
			i=9;
		}
		else
		{
			a[i][j]='*';
			i--;
		}
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
				printf("%c",a[i][j]);		
		}
		printf("\n");
	}
}
