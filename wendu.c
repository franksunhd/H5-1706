#include <stdio.h>
#define F 32.0
#define SC (5.0/9.0)

int main(void)
{
    float fass,celsius;
    printf("输入华氏温度为：");
    scanf("%f",&fass);

    celsius = (fas-F)*SC;
    printf("输出摄氏温度为：%.1f\n",celsius);
    return 0;
}
