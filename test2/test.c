#include <stdio.h>

int main() {

	double degree = 0;

	double celci = 0;

	printf("ȭ�� �µ��� �Է��ϼ��� : ");

	scanf("%lf", &degree);

	celci = 5.0 / 9.0*(degree - 32.0);

	printf("���� �µ��� %.4lf", celci);

	return 0;

}