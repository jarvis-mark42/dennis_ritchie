#include<stdio.h>
void main()
{
	int c,z;
	c=getchar();
	z= (c>='A' && c<='Z') ? c+('a'-'A') : c ;
	putchar(z);
}
