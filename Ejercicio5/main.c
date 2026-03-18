#include <stdio.h>
#include <math.h>

int main() {
    double precision, ratio, prev_ratio;
    int a = 1, b = 1, temp, n = 2;

    printf("Introduce precision: ");
    scanf("%lf", &precision);

    prev_ratio = (double)b / a;

    do {
        temp = a + b;
        a = b;
        b = temp;
        ratio = (double)b / a;
        n++;
    } while (fabs(ratio - prev_ratio) > precision);

    printf("Razon aurea: %.5f\n", ratio);
    printf("Iteraciones: %d\n", n);

    return 0;
}
