#include <stdio.h>
#include <stdarg.h>

int sumNum(int num,...) {
    va_list args;   // Khai báo một biến args có kiểu dữ liệu va_list để chứa tham số
    va_start(args, num);    // Bắt đầu duyệt qua các tham số từ tham số thứ 2 (num)

    int total = 0;
    for(int i = 0; i < num; i++) {
        total = total + va_arg(args, int);  // Lấy tham số tiếp theo cộng vào tổng
    }

    va_end(args);   // Kết thúc duyệt tham số

    return total;
}

int main() {
    int sum;

    sum = sumNum(4, 1, 2, 3, 4);
    printf("Tong: %d\n", sum);

    sum = sumNum(5, 5, 6, 7, 9, 10);
    printf("Tong: %d", sum);
}