#include <stdio.h>

void test(void)
{
    const int a = 9;
    printf("%d\r\n", a);
    // int *pr;
    int *pr = (int *)&a;

    printf("a�ĵ�ַ=%x\r\n",&a);
    printf("pr�ĵ�ַ=%x\r\n",pr);
    
    *pr = 19;
    printf("*pr��ֵ=%d\r\n", *pr);
    printf("a��ֵ=%d\r\n", a);
}
int main()
{
    printf("Hello World!\n");
    test();
    getchar();
    return 0;
}
