#include <stdio.h>

int main()
{
    // variable declaration
    double A, B, MEDIA;
    // take input
    scanf("%lf %lf", &A, &B);
    MEDIA = (A * 3.5 + B * 7.5) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}
