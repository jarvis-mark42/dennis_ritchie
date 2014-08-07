#include<stdio.h>
void main(){
	int c;
	int blank=0;
	int tab=0;
	int newline=0;
	while((c=getchar())!=EOF){
		if(c==' ')
		blank++;
		if(c=='\t')
		tab++;
		if(c=='\n')
		newline++;
	}
	printf("no of blanks %d\n",blank);
	printf("no of tabs %d\n",tab);
	printf("no of new lines %d\n",newline);
}
