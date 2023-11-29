#include <stdio.h>

int min(int a, int b) {
	int min;
	min = a;
	if (b < min) {
		min = b;
	}
	return min;
}

int max(int a, int b) {
	int max;
	max = a;
	if (b > max) {
		max = b;
	}
	return max;
}

int hcf(int a,int b) {
	int s =1;
	for (int i = min(a,b) -1; i > 1; --i) {
		if (a%i == 0 && b %i ==0)
			s = i;
	}

	return s;
}

int lcd(int a,int b) {
	int s =max;


	return s;
}




int main()
{

}

