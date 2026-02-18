#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    uint32_t N;
    // Ввод числа
    scanf("%" SCNu32, &N);

    int count = 0;
    // Пока число не станет нулём
    while (N) {
        // Если младший бит равен 1, увеличиваем счётчик
        count += N & 1;
        // Сдвигаем число вправо
        N >>= 1;
    }

    // Вывод результата
    printf("%d\n", count);
    return 0;
}
