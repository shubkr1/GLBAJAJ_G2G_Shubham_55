#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Check condition a^2 + b^2 - 2ab = 0
    if ((a*a + b*b - 2*a*b) == 0) {
        printf("Condition a^2 + b^2 - 2ab = 0 is satisfied.\n");
    } else {
        printf("Condition a^2 + b^2 - 2ab = 0 is NOT satisfied.\n");
    }

    // Check if a is zero
    if (a == 0) {
        printf("Not a quadratic equation (a cannot be 0).\n");
        return 0;
    }

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are Real and Different.\n");
        printf("Root1 = %.2f\n", root1);
        printf("Root2 = %.2f\n", root2);
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        printf("Roots are Real and Equal.\n");
        printf("Root = %.2f\n", root1);
    }
    else {
        realPart = -b / (2*a);
        imagPart = sqrt(-discriminant) / (2*a);
        printf("Roots are Complex and Imaginary.\n");
        printf("Root1 = %.2f + %.2fi\n", realPart, imagPart);
        printf("Root2 = %.2f - %.2fi\n", realPart, imagPart);
    }

    return 0;
}