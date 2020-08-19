#include <stdio.h>
int main() {
	int x, y, i;
	scanf_s("%d", &i);
	for (x = 1; x <= i; x++) {
		for (y = 1; y <= i; y++) {
			if (x == 1 || y == 1 || x == i || y == i) {
				printf("*");
			}
			else {
				printf(" ");
			}
		}printf("\n");
	}return 0;
}