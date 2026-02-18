#include <stdio.h>
#include <stdint.h>

struct pack_array {
    uint32_t array;      // упакованные биты (старший бит соответствует первому элементу)
    uint32_t count0 : 8; // количество нулей
    uint32_t count1 : 8; // количество единиц
};

void array2struct(int arr[], struct pack_array *ps) {
    uint32_t val = 0;
    uint8_t c0 = 0, c1 = 0;

    for (int i = 0; i < 32; ++i) {
        val = (val << 1) | (arr[i] ? 1 : 0);
        if (arr[i])
            ++c1;
        else
            ++c0;
    }

    ps->array = val;
    ps->count0 = c0;
    ps->count1 = c1;
}

int main() {
    int input[32];
    // Читаем 32 целых числа (ожидаются 0 или 1)
    for (int i = 0; i < 32; ++i) {
        scanf("%d", &input[i]);
    }

    struct pack_array result;
    array2struct(input, &result);

    // Выводим значения полей через пробел
    printf("%u %u %u\n", result.array, result.count0, result.count1);

    return 0;
}
