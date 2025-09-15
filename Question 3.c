#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float temp;
	printf("Enter body temperature (C): ");
	scanf("%f", &temp);
	
	if (temp < 35.0){
		printf("Category: Low (<35C)\n");
	} else if (temp >= 35.0 && temp <= 37.5){
		printf("Category: Normal (35-37.5C)\n");
	} else {
		printf("Category: High (>37.5C)\n");
	}
	return 0;
}
