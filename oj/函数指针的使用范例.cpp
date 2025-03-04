//
// Created by 15167 on 2025/2/27.
//
#include <stdio.h>

// 函数声明
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
int (*select_operation(char op)) (int, int);

// 函数定义
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0; // 或者你可以选择抛出异常或采取其他措施
    }
    return a / b;
}

int (*select_operation(char op)) (int, int) {
    switch (op) {
        case '+':
            return add;
        case '-':
            return subtract;
        case '*':
            return multiply;
        case '/':
            return divide;
        default:
            printf("Invalid operator\n");
            return NULL;
    }
}

int main() {
    int num1, num2;
    char op;
    int result;

    printf("请输入一个式子: ");
    scanf("%d %c %d", &num1, &op, &num2);

    int (*operation)(int, int) = select_operation(op);

    if (operation != NULL) {
        result = operation(num1, num2);
        printf("%d %c %d = %d\n", num1, op, num2, result);
    }

    return 0;
}



