#include<stdio.h>
#define MAX_SIZE 100
int top=0;
int stack[MAX_SIZE];
void push(int n)
{
	if(top>MAX_SIZE)
		printf("stack overflow");
	stack[top++]=n;
	//printf("%d",stack[top-1]);
}
int pop ()
{
	if(top<0)
		printf("stack empty");
	return stack[--top];
}
void display()
{
	int i;
	if(top<0)
		printf("stack empty");
	for(i=top-1;i>=0;i--)
		printf("%d\t",stack[i]);
	printf("\n");
}
void main()
{
	int c,num,ext;
	while((c=getchar())!=EOF)
	{
		
		if(c>='0'&&c<='9')
		{
			num=num*10+(c-'0');
		}
		else if(c==' ' || c=='\n')
		{
			push(num);
			num=0;
		}
	}
	printf("top element: %d\n",stack[top-1]);
	display();
	printf("swapping\n");
	ext=stack[top-1];
	stack[top-1]=stack[top-2];
	stack[top-2]=ext;
	display();
	printf("duplicating\n");
	stack[top]=stack[top-1];
	top++;
	display();
	if(c=='\n')
	{
		printf("clearing");
		top=-1;
		display();
	}	
}
