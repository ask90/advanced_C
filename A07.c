#include <stdio.h>

int main() {
    int n;
    unsigned int result = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        unsigned int x;
        scanf("%u", &x);
        result ^= x;
    }
    printf("%u\n", result);
    return 0;
}
