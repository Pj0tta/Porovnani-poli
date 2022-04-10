#include <stdio.h>

int main() {
	int pole1[] = { 8, 9, 8, 9, 6 };
	int pole2[] = { 7, 3, 9, 8, 9 };
	int vypis1 = 0;
	int vypis2 = 0;

	for (int i = 0; i < 5; i++) {
		printf("%d: %d\n", i, pole1[i]);
		vypis1 = vypis1 + pole1[i];
	}
	printf("Soucet pole 1 je: %d\n", vypis1);

	for (int j = 0; j < 5; j++) {
		printf("%d: %d\n", j, pole2[j]);
		vypis2 = vypis2 + pole2[j];
	}
	printf("Soucet pole 2 je: %d\n", vypis2);

	if (vypis1 > vypis2) {
		printf("Pole 1 je vetsi nez pole 2.\n");
	}

	else printf("Pole 2 je vetsi nez pole 1.\n");
	
	

	}