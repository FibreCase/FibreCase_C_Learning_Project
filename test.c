#include<stdio.h>

int main() {
	char str[999] = "abcdabcdabcdabcdabcdaAAAAAAaaaaaaaaa";
	int count[999] = {0};
	for (int i = 0; i < (sizeof str); ++i) {
		if (*(str + i) >= 'A' && *(str + i) <= 'Z') {
			(*(count + str[i] - 65))++;
		}
		else if (*(str + i) >= 'a' && *(str + i) <= 'z') {
			(*(count + str[i] - 97))++;
		}
	}


	return 0;
}