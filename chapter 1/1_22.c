#include<stdio.h>
void main()
{
	char s[1000];
	int n,i,k=0,j=0,p=0,c=0;
	scanf("%d\n",&n);
	//s[n]='\0';
	while(i=getchar())
	{
			if(k<n)
				s[k]=i;
			if(i==' '||i=='\n')
				j=k;
			k++;
			if(k>=n|| i=='\n')
			{
				/*if(j==0)
				{
					for(p=0;p<k-1;p++)
						printf("%c",s[p]);
					printf("-\n");
					s[0]=s[k-1];
					//s[1]=s[k];
					k=1;
					for(p=k;p<n;p++)
						s[p]=0;
				}
				else
				{*/
					c=0;
					for(p=0;p<j;p++)
						printf("%c",s[p]);
					printf("\n");				
					for(p=j+1;p<k;p++){
						s[c]=s[p];
						c++;
					}
				//}	
				k=c;
				j=0;
			}
			if(i=='\n')
				break;
	}
}
