#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    uint32_t N;
    // Ввод числа
    scanf("%" SCNu32, &N);

    // Маска для старшего байта (биты 24–31)
    uint32_t mask = 0xFF000000U;

    // Инвертируем биты старшего байта с помощью XOR
    uint32_t result = N ^ mask;

    // Вывод результата
    printf("%" PRIu32 "\n", result);

    return 0;
}
