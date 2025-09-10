#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    
    // 變數宣告和基本操作
    int number = 42;
    float pi = 3.14159;
    char greeting[] = "歡迎使用C語言version 2";
    
    printf("整數: %d\n", number);
    printf("浮點數: %.2f\n", pi);
    printf("字串: %s\n", greeting);
    
    // 簡單的計算
    int a = 10, b = 5;
    printf("\n基本運算:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    
    // 條件判斷
    if (number > 40) {
        printf("\n數字大於40\n");
    } else {
        printf("\n數字小於或等於40\n");
    }
    
    // 迴圈範例
    printf("\n1到5的數字:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}