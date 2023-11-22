#include "stdio.h"
#include "string.h"
void dell(char* ch,char* tch);
int main()
{
	char ch[10];
	char tch[10];
	gets(ch);
	dell(ch,tch);
	printf("%s",tch);
}

void dell(char* ch,char* tch) {
	int j = 0;
	for (int i = 0; i < strlen(ch); ++i) {
		if (ch[i] != ' ')
			tch[j++] = ch[i];
	}
}