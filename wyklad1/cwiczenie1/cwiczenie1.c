#include <stdio.h>

int main() {
    const float CAL = 2.54;
    float calValue;

    printf("Podaj wartosc w calach\n");
    scanf("%f", &calValue);

    float cmValue = calValue * CAL;

    printf("%f cali = %f cm\n", calValue, cmValue);

    return 0;
}