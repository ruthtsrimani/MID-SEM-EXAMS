#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int bp1, bp2, bp3, bp4, total, average;
	
	printf("Enter systolic BP 1 (mmHg): ");
	scanf("%d", &bp1);
	
	printf("Enter systolic BP 2 (mmHg): ");
	scanf("%d", &bp2);
	
	printf("Enter systolic BP 3 (mmHg): ");
	scanf("%d", &bp3);
	
	printf("Enter systolic BP 4 (mmHg): ");
	scanf("%d", &bp4);
	
	total = bp1 + bp2 + bp3 + bp4;
	average = total/4;
	
	printf("Total: %d mmHg\n", total);
	printf("Average: %d mmHg\n", average);
	
	return 0;
}
