#include<stdio.h>
void main(){
	char c;
	while(c=getchar()!=EOF){
		printf("%d",c);
	}
	printf("%d",c);
}
