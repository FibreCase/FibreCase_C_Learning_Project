#include <stdio.h>
#define  M  15

int fun(int * aa,int n, int y) {
	for (int i = 0; i < n-1; ++i) {
		if (aa[i] == y) {
			for (int j = i; j < n-1; ++j) {
				aa[j] = aa[j+1];
			}
			if (aa[n-1] == y)
				n--;
			n--;
			i--;
		}
	}
	return n;
}

int main() {
	int aa[M] = {1, 2, 3, 3, 2, 1, 1, 2, 3, 4, 5, 4, 3, 2, 1}, n = M, y, k;
	scanf("%d", &y);
	n = fun(aa, n, y);
	for (k = 0; k < n; k++)
		printf("%d  ", aa[k]);
}

