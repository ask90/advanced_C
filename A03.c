#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    uint32_t N;
    int K;

    // Ввод чисел
    scanf("%" SCNu32 "%d", &N, &K);

    // Создаём маску из K единиц в младших битах
    uint32_t mask = ((uint32_t)1 << K) - 1;

    // Применяем маску
    uint32_t result = N & mask;

    // Выводим результат
    printf("%" PRIu32 "\n", result);

    return 0;
}
