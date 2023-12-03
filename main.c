#include<stdio.h>
#include "string.h"

void nixu(char * str) {
	char slt[100];
	int i = 0;
	strcpy(slt,str);
	for (; i < strlen(slt) ; ++i) {
		str[strlen(slt) - i -1] =  slt[i];
	}
}

int main(void) {
	char str[100];
	gets(str);
	nixu(str);
	puts(str);
}