#include<stdio.h>
#include<strings.h>
#include<math.h>
void main()
{
	int l,i,n=0,count=1,j;
	char s[100];
	gets(s);
	l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
		if((s[i]=='X'||s[i]=='x')&&i==1)
			break;
		count=1;
		for(j=0;j<l-i-1;j++)
			count=count*16;
		//printf("%d\n",count);
		if(s[i]>='0'&&s[i]<='9')
			n=n+(s[i]-'0')*count;
		if(s[i]>='A'&&s[i]<='Z')
			n=n+(s[i]-'A'+10)*count;
		if(s[i]>='a'&&s[i]<='z')
			n=n+(s[i]-'a'+10)*count;
	//printf("%d\n",n);
	}
	printf("%d\n",n);
}
	
