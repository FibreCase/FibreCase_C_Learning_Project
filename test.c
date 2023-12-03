#include<stdio.h>

int prim(int n) {
	int a = 1, b = 1;
	for (a = 1; a <= n; a++) {
		if (n % a == 0)
			b = b * a;
	}
	if (b == n)
		return 1;
	else
		return 0;
}

int main() {
	int n, x, y;
	scanf("%d", &n);
	for (x = n, y = 0; x <= n / 2; x--, y++)
		if (prim(x)*prim(y))
			printf("%d=%d+%d\n", n, y, x);
	return 0;
}
