#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double X, Y, Z;
	double a, b, c;

	printf("���� �µ��� �Ҽ��� 3�� �Է��Ͻÿ�: ");

	scanf("%lf %lf %lf", &X, &Y, &Z);

	a = (9.0 / 5.0) * X + 32.0;
	b = (9.0 / 5.0) * Y + 32.0;
	c = (9.0 / 5.0) * Z + 32.0;

	printf("ȭ�� �µ�" "%.4f, %.4f , %.4f", a, b, c);

	return 0;
}