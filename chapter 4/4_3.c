#include<stdio.h>
#define MAX_SIZE 100
void push(int);
int pop();
int top=0;
int stack[MAX_SIZE];
void main()
{
	int c,num,ext;
	while((c=getchar())!=EOF)
	{

		if(c>='0'&&c<='9')
		{
			num=num*10+(c-'0');
//			printf("%d",num);
		}
		else if(c==' ')
		{
			push(num);
			num=0;
		}
		else
		{
			switch(c)
			{
				case '+':
					push(pop()+pop());
					break;
				case '*':
					push(pop()*pop());
					break;
				case '-':
					ext=pop();
					push(pop()-ext);
					break;
				case '/':
					ext=pop();
					push(pop()/ext);
					break;
				case '%':
					ext=pop();
					push(pop()%ext);
					break;
				case '\n':
					printf("\n%d",pop());
					break;
			}
			getchar();
		}
	}	
}
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
