//
// Created by 15167 on 2025/2/11.
//
#include <stdio.h>

int main()
{
    long m, t, x, y;
    //printf("请输入人数：");
    scanf("%ld", &m);
    x = m / 20;
    t = m - 20 * x;
    y = t / 3;
    t = m - 20 * x - 3 * y;
    printf("%.2f\n",(13 * x + 2 * y)*1.40 + t);
    //printf("  喝 %ld 瓶汽水，至少需要 %.2f 元。\n", m, (13 * x + 2 * y)*1.40 + t);
    return 0;
}
