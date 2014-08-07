#include<stdio.h>
#include<strings.h>
void main()
{
	char s1[100],s2[100];
	int i=0,j=0;
	gets(s1);
	gets(s2);
	//puts(s1);
	//puts(s2);
	while(s2[i]!='\0')
	{
		while(s1[j]!='\0')
		{
			//printf("HI\n");
			if(s1[j]==s2[i])
				s1[j]='*';
			j++;
		}
		j=0;
		//printf("HELLO\n");
		i++;
	}
	//printf("HEY\n");
	//puts(s1);
	i=0;
	while(s1[i]!='\0')
	{
		//printf("HI");
		if(s1[i]!='*')
			printf("%c",s1[i]);
		i++;
	}
	printf("\n");
}
