#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    uint32_t N;
    int K;

    // Ввод данных
    scanf("%" SCNu32 "%d", &N, &K);

    // Маска для выделения K младших битов
    uint32_t mask = ((uint32_t)1 << K) - 1;
    uint32_t max = 0;

    // Перебор всех возможных позиций окна (от младшего бита к старшему)
    for (int p = 0; p <= 32 - K; ++p) {
        uint32_t val = (N >> p) & mask; // значение K бит, начиная с позиции p
        if (val > max) {
            max = val;
        }
    }

    // Вывод результата
    printf("%" PRIu32 "\n", max);

    return 0;
}
