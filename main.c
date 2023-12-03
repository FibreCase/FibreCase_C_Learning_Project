#include<stdio.h>
#include<string.h>

void del_samechar(char * str);

int main() {
	char str[100];
	gets(str);
	del_samechar(str);
	puts(str);
}

void del_samechar(char * str) {
	char c;
	for (int i = 0; i < strlen(str);) {
		if (str[i] == str[i+1]) {
			c = str[i];
			while (str[i] == c) {
				for (int j = i; j < strlen(str); ++j) {
				str[j] = str[j+1];
				}
			}
		}
		else {
			i++;
		}
	}
}