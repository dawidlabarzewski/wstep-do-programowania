#include <stdio.h>

int main() {
    int ageInDays;

    printf("Podaj swoj wiek w dniach\n");
    scanf("%d", &ageInDays);

    int ageInYears = ageInDays / 365;

    printf("Masz %d lat\n", ageInYears);

    return 0;
}