#include <stdio.h>

int main() {

	double degree = 0;

	double celci = 0;

	printf("화씨 온도를 입력하세요 : ");

	scanf("%lf", &degree);

	celci = 5.0 / 9.0*(degree - 32.0);

	printf("섭씨 온도는 %.4lf", celci);

	return 0;

}