#include <stdio.h>

int main() {
    unsigned int M;
    scanf("%u", &M);

    // Если товар тяжелее 1 тонны, взвешивание невозможно
    if (M > 1000000) {
        printf("-1\n");
        return 0;
    }

    int count = 0;      // счётчик использованных гирь
    int steps = 0;      // счётчик разрядов (степеней тройки)

    while (M > 0) {
        int rem = M % 3;
        steps++;
        if (rem == 1) {
            count++;
            M = (M - 1) / 3;
        } else if (rem == 2) {
            count++;
            M = (M + 1) / 3;
        } else { // rem == 0
            M = M / 3;
        }
    }

    // Если потребовалась степень тройки больше 3^12 (т.е. гиря тяжелее 1 тонны),
    // то steps будет больше 13, и взвесить нельзя.
    if (steps > 13)
        printf("-1\n");
    else
        printf("%d\n", count);

    return 0;
}
