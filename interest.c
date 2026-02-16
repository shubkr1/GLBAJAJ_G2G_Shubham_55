#include <math.h>
#include <stdio.h>
int main() {
    float p, r, t;
    float si, ci, amount;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate of Interest: ");
    scanf("%f", &r);

    printf("Enter Time (in years): ");
    scanf("%f", &t);

    // Simple Interest
    si = (p * r * t) / 100;
      // Compound Interest
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f", ci);

    return 0;

}

