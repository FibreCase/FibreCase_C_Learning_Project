#include <stdio.h>
#include <string.h>

int
main()
{
	int st, en, j = 0;
	char ch[999];
	char su[999];
	gets(ch);
	scanf_s("%d", &st);
	scanf_s("%d", &en);

	if (st >= strlen(ch) || st == 0) {
		printf("起始位置%d越界", st);
		return 0;
	}
	if ((st + en) >= strlen(ch))
		en = strlen(ch) - st;

	for (int i = st - 1; i < st + en; ++i) {
		su[j++] = ch[i];
	}

	printf("%s", su);

	return 0;
}

