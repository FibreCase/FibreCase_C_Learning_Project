#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void cha(int* u, int* v);

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);

	cha(&x, &y);
	
	printf("%d %d", x, y);
	return 0;
}

void cha(int *u, int *v)
{
	int t;

	t = *u;
	*u = *v;
	*v = t;
}