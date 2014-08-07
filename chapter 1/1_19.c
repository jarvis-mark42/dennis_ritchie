#include<stdio.h>
#define MAXLINE 1000
void reverse(char line[],int l);
void main()
{
	int len,c;
	len=0;
	char line[MAXLINE];
	while((c=getchar())!=EOF){
	//	printf("HEY2\n");
		line[len++]=c;
		if(c=='\n'){
			//printf("HEY3");
			line[len]='\0';
			reverse(line,len);
			len=0;
		}
	}
}

void reverse(char line[],int l)
{
	char new[MAXLINE];
	int i;
	//printf("HEY");
	for(i=l-1;i>=0;i--)
		new[l-i-1]=line[i];
	printf("%s",new);
}

