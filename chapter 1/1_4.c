#include<stdio.h>
void main(){
	int lower=0;
	int upper=300;
	int step=20;
	double celcius=lower;
	double fahr;
	printf("the celcius to fahrenheit series is\n");
	while(celcius<=upper){
		fahr=((9.0/5.0)*celcius)+32.0;
		printf("%3.0f C \t %6.1f F\n",celcius,fahr);
		celcius=celcius+step;
	}
}
