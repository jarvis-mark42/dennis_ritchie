#include<stdio.h>
void main(){
	int lower=0;
	int upper=300;
	int step=20;
	double fahr=upper;
	double celcius;
	printf("the fahrenheit to celcius series is\n");
	while(fahr>=lower){
		celcius=(5.0/9.0)*(fahr-32.0);
		printf("%3.0f F \t %6.1f C\n",fahr,celcius);
		fahr=fahr-step;
	}
}
