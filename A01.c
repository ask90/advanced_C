#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    N %= 26;

    char c;

    // пропускаем все пробельные символы после числа
    while ((c = getchar()) == ' ' || c == '\n');

    // обрабатываем первый непробельный символ
    while (c != '.') {

        if (c >= 'a' && c <= 'z') {
            c = (c - 'a' + N) % 26 + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {
            c = (c - 'A' + N) % 26 + 'A';
        }

        putchar(c);
        c = getchar();
    }

    putchar('.');

    return 0;
}
