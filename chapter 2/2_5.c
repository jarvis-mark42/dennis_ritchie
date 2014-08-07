#include<stdio.h>
#include<strings.h>
void main()
{
	char s1[100],s2[100];
	int i=0,j=0,flag=0,loc;
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
			{
				loc=j;
				flag=1;
				break;			
			}
			j++;
		}
		j=0;
		//printf("HELLO\n");
		i++;
		if(flag==1)
			break;
	}
	if (flag==1)
		printf("location is: %d\n",loc);
	else
		printf("-1");
}
