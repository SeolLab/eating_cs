#include <stdio.h>

int power(int x, int n)
{	
	if(x == 1 || n == 1) return x;
	
	else return x *= power(x, n - 1);
} 


int main() {

	int a, b;
	
	scanf("%d %d", &a, &b);
	
	printf("%d�� %d������ %d�Դϴ�.\n", a, b, power(a, b));	
	
	return 0;
}
