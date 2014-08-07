#include<stdio.h>
#include<ctype.h>
double atof(char s[])
{
	double val, power, exp;
	int i,sign,sign1;
	for(i=0;isspace(s[i]);i++);
	sign=(s[i]=='-')? -1:1;
	if(s[i]=='-'||s[i]=='+')
		i++;
	for(val=0.0;isdigit(s[i]);i++)
		val=10.0*val+(s[i]-'0');
	if(s[i]=='.')
		i++;
	for(power=1.0;isdigit(s[i]);i++)
	{
		val=10.0*val+(s[i]-'0');
		power *=10.0;
	}
	if(s[i]=='e'||s[i]=='E')
		i++;
	sign1=(s[i]=='-')? -1:1;
	if(s[i]=='-'||s[i]=='+')
		i++;
	for(exp=0.0;isdigit(s[i]);i++)
		exp=10.0*exp+(s[i]-'0');
	printf("%g\n",exp);
	val=val*sign/power;
	exp=pow(10,sign1*exp);
	return (val*exp);
}
void main()
{
	double ans;
	char line[1000];
	gets(line);
	ans=atof(line);
	printf("answer: %g\n",ans);
}
