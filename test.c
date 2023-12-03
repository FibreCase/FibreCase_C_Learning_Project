#include <stdio.h>

int main() {
	int n;
	char c[999] = "123";

	sscanf(c,"%d",&n);

	printf("%d",n);

	return 0;
}

