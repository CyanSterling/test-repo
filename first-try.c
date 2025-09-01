#include <stdio.h>

// 计算斐波那契数列的函数
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n, i;
    
    printf("欢迎使用斐波那契数列计算器！\n");
    printf("请输入要计算的斐波那契数列项数: ");
    scanf("%d", &n);
    
    // 输入验证
    if (n < 0) {
        printf("错误：请输入非负整数！\n");
        return 1;
    }
    
    printf("斐波那契数列前 %d 项为:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    getchar();
    getchar();
   
    return 0;
}