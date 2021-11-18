#include <stdio.h>
double l1, l2;
double min(double, double);
int main() {
    printf("Podaj liczbę 1: ");
    scanf("%lf", &l1);
    printf("Podaj liczbę 2: ");
    scanf("%lf", &l2);

    printf("%lf", min(l1, l2));
    return 0;
}
double min(double l1, double l2) {
    if (l1 < l2) return l1;
    else if (l1 > l2) return l2;
    else return 0.0;
}
