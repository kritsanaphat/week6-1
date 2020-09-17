#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int plus(int x, int y) {
	printf("%d",x + y);
	return 0;
}
int multiply(int x, int y) {
	printf("%d ",x*y);
	return 0;
}
int minus(int x, int y) {
	printf("%d ", x - y);
	return 0;
}
float divide(float x1, float y1) {
	printf("%.2f", x1 / y1);
	return 0;
}
int main() {
	int x, y;
	float x1, y1;
	char j;
	scanf("%d %c %d", &x,&j,&y);
	if (j == 42 || j == 43 || j == 45) {
		if (j == 43) {
			plus(x, y);
		}
		else if (j == 42) {
			multiply(x, y);
		}
		else if (j == 45) {
			minus(x, y);
		}
	}
	else if (j == 47) {
		x1 = x;
		y1 = y;
		divide(x1, y1);
	}
	
}