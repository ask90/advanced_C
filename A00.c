#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int number;
    int max;
    int count = 0;

    for (int i = 0; i < N; i++) {
        scanf("%d", &number);

        if (i == 0) {
            max = number;
            count = 1;
        } else {
            if (number > max) {
                max = number;
                count = 1;
            } else if (number == max) {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
