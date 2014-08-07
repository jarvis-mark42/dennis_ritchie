#include<stdio.h>
double ctof(double);
double ftoc(double);
void main(){
	int lower=0;
	int upper=300;
	int step=20;
	double fahr=lower;
	double celcius;
	printf("the fahrenheit to celcius series is\n");
	while(fahr<=upper){
		printf("%3.0f F \t %6.1f C\n",fahr,ftoc(fahr));
		fahr=fahr+step;
	}
	celcius=lower;
	printf("the celcius to fahrenheit series is\n");
	while(celcius<=upper){
		printf("%3.0f C \t %6.1f F\n",celcius,ctof(celcius));
		celcius=celcius+step;
	}
}
double ftoc(double fahr)
{
	double celcius;
	celcius=(5.0/9.0)*(fahr-32.0);
	return celcius;
}
double ctof(double celcius)
{
	double fahr;
	fahr=((9.0/5.0)*celcius)+32.0;
	return celcius;
}
	

