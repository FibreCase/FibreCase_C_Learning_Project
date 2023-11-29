#include <stdio.h>

long compose(long number);

int main() {
	long int n;
	scanf("%ld", &n);
	printf("%ld\n", compose(n));
	return 0;
}

long compose(long number) {
	char n[999];
	char s[999] = {0};
	long int su;
	sprintf(n, "%ld", number);

	for (int i = 0, j = 0; i < 999; ++i) {
		if (*(n + i) == '\0') {
			break;
		}
		else if (*(n + i) % 2 == 0) {
			*(s + j++) = *(n + i);
		}
	}

	sscanf(s,"%ld", &su);
	return su;
}
