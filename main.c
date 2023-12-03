#include<stdio.h>

int reverse(int number);

int main() {
	int number;
	scanf("%d", &number);
	printf("%d", reverse(number));
}

int reverse(int number) {
	char c[99],s[99];
	int i = 0,j = 0,n=0;
	sprintf(c,"%d",number);

	for (; i < 99; ++i) {
		if (c[i] == '\0') {
			break;
		}
	}

	for (; j < i; ++j) {
		s[j] = c[i-j-1];
	}
	s[j] = '\0';

	sscanf(s,"%d",&n);
	return n;
}