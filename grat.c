#include <stdio.h>

int high(int a, int b, int c) {
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int x, a, b, c;
    printf("enter the value:");
    scanf("%d%d%d", &a, &b, &c);
    x = high(a, b, c);
    printf("%d is high\n", x);
    return 0;
}
