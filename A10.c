#include <stdio.h>
#include <stdint.h>

int extractExp(float x) {
    union {
        float f;
        uint32_t bits;
    } data;
    data.f = x;
    return (int)((data.bits >> 23) & 0xFF);
}

int main() {
    float num;
    scanf("%f", &num);
    int exp = extractExp(num);
    printf("%d\n", exp);
    return 0;
}
