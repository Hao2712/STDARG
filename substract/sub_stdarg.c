#include <stdio.h>
#include <stdarg.h>

int subNum(int num, ...) {
    va_list args;

    va_start(args, num);

    int substract = va_arg(args, int);
    for(int i = 1; i < num; i++) {
        substract = substract - va_arg(args, int);
    }

    va_end(args);
    return substract;
}

int main() {
    int substract;

    substract = subNum(4, 1, 2, 3, 4);
    printf("Tong: %d\n", substract);

    substract = subNum(5, 5, 6, 7, 9, 10);
    printf("Tong: %d", substract);
}