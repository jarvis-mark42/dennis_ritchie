#include<stdio.h>
void main()
{
	int c;
	int z='*';
	while((c=getchar())!=EOF){
		
		if(c==' '&&z==' ');
		else if(c==' ' && z=='*');
		putchar(c);
		z=c;
	}
	if(z==' ')
		printf("\b");
}
