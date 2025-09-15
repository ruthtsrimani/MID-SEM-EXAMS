#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float temperature;
	
	printf("Enter body temperature in celsius: ");
	scanf("%f", &temperature);
	
	if (temperature< 35.0f) {
		printf("Low body temperture.please ensure warmth and monitor.\n");
	} else if (temperature <=37.5) {
		printf("normal body temperature. keep maintaining good health!\n");
	} else {
		printf("High body temperature. consider consulting a healthcare provider.\n");
	}
			
	return 0;
}
