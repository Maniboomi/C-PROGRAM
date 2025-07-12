#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int x = 45, y = 15;
    printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));
    return 0;
}
