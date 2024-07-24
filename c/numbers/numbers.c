// C Book page 37: print fahrenheit-celsius table:
#include <stdio.h>
#include <stdlib.h>
int main(){

	float celsius, fahrenheit;
	float step, min, max;

	min = 0;
	max = 300;
	step = 20;

	fahrenheit = min;
	
	while(fahrenheit <= max){
			celsius = (5.0/9.0) * (fahrenheit - 32.0);
			printf("%3.0f %6.3f\n", fahrenheit, celsius);
			// wooooow non me le ricordavo ste cose!
			// 3 digits . 0 digits & 6 digits . 3 digits
			fahrenheit = fahrenheit + step;
	}

 	exit(EXIT_SUCCESS);
}
