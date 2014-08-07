#include<stdio.h>
void main()
{
	int c;
	int i,j;
	char a[10][10];
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
			a[j][i]='*';
			i--;
		}
	}
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			if(a[i][j]=='*')
				printf("%c",a[i][j]);		
		}
		printf("\n");
	}
}
