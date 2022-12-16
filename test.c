#include <stdio.h>

void test(void)
{
    const int a = 9;
    printf("%d\r\n", a);
    // int *pr;
    int *pr = (int *)&a;

    printf("a的地址=%x\r\n",&a);
    printf("pr的地址=%x\r\n",pr);
    
    *pr = 19;
    printf("*pr的值=%d\r\n", *pr);
    printf("a的值=%d\r\n", a);
}
int main()
{
    printf("Hello World!\n");
    test();
    getchar();
    return 0;
}
