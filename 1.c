#include <stdio.h>


int main(void) {
	int array[10] = { 0, 3, 5, 4, 1, 8, 9, 12, 6, 3 };

	int i=0;
	int k;

	for (k = 0; k < 10; k++) {
		if (array[i] <= array[k]) {
			i = k;
		}
	}
	printf("The largest value in an array-of-int is : %d\n\n", array[i]);

	return 0;
}