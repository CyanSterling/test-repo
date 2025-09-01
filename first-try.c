#include <stdio.h>

// 计算斐波那契数列的函数
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n, i;

    printf("Welcome to use the Fibonacci sequence calculator！\n");
    printf("Please enter the number of terms to calculate in the Fibonacci sequence: ");
    scanf("%d", &n);
    
    // 输入验证
    if (n < 0) {
        printf("Error: Please enter a non-negative integer!\n");
        return 1;
    }

    printf("The first %d terms of the Fibonacci sequence are:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    getchar();
    getchar();
   
    return 0;
}