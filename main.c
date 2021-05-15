#include <stdio.h>


int main() {
	int result[9][9];
	int i, j;
	
	for(i = 0; i < 9; i++) {
		for(j = 0; j < 9; j++) {
			result[i][j] = (i + 1) * (j + 1);
		}
	}
	
	for(j = 0; j < 9; j++) {
		for(i = 0; i < 9; i++) {
			printf("%d * %d = %2d|", i + 1, j + 1, result[i][j]);
		}
	printf("\n");
	}
	
	return 0;
}
