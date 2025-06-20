#include <stdio.h>

int main() {
    int x = 10, y = 20;
    int *const p = &x;
    *p = 30;
    // p = &y;
    printf("%d\n", *p);
    return 0;
}
