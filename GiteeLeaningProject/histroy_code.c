#include <stdio.h>
#include <math.h>

int main()
{
	int m, n, i, r, x, y;
	scanf("%d,%d,&m,&n");
	x = m * n;
	if (m < n)
	{
		i = m;
		m = n;
		n = i;
	}
	r = m % n;
	while (r != 0)
	{
		m = n;
		n = r;
		r = m % n;
	}
	y = x / n;
	printf("���Լ����%d", n);
	printf("��С��������%d", y);
	return 0;
}