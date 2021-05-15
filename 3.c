//³ª¸ÓÁö(3052)
#include <stdio.h>
int main() {
	int arr[10];
	int res = 0;
	for (int i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	for (int k = 0; k < 10; k++) {
		int count = 0;
		arr[k] = arr[k] % 42;
		for (int j = 0; j < k; j++) {
			if (arr[k] == arr[j])
				count++;
		}
		if (count == 0)
			res++;
	}
	printf("%d", res);
}