#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double X, Y, Z;
	double a, b, c;

	printf("섭씨 온도를 소수로 3개 입력하시오: ");

	scanf("%lf %lf %lf", &X, &Y, &Z);

	a = (9.0 / 5.0) * X + 32.0;
	b = (9.0 / 5.0) * Y + 32.0;
	c = (9.0 / 5.0) * Z + 32.0;

	printf("화씨 온도" "%.4f, %.4f , %.4f", a, b, c);

	return 0;
}