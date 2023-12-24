#include<stdio.h>
#include "string.h"

void back_forward(char *str) {
	char slt[100];
	int i = 0;
	strcpy(slt, str);
	for (; i < strlen(slt); ++i) {
		str[strlen(slt) - i - 1] = slt[i];
	}
}

int main(void) {
	char str[100];
	fgets(str, 100, stdin);
	for (int i = 0; i < 5; ++i) {
		fgets(str, 100, stdin);
		back_forward(str);
		puts(str);
	}
	back_forward(str);
	puts(str);
}