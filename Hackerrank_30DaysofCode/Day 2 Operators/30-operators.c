#include<stdio.h>
#include<math.h>

int main() {
    float mealCost, tipPercent, taxPercent;
    scanf("%f%f%f", &mealCost, &tipPercent, &taxPercent);

    float tip = mealCost * (tipPercent/100);
    float tax = mealCost * (taxPercent/100);

    int total = round(mealCost + tip + tax);
    printf("%d\n", total);
    return 0;
}