#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int _____ = 0;

int main()
{
    int mine, yours;

    /* ------------------------------ */
    srand(time(0));
    mine = rand() % 10 + 1;
    do {
        srand(rand());
        yours = rand() % 10 + 1;
    } while (yours == mine);
    /* ------------------------------ */

    printf("你抽到的牌是：%d !!\n", mine);
    printf("我抽到的牌是：%d !!\n", yours);

    /* ------------------------------ */
    // 下面是你需要修改的区域~
    // 目标：判断输赢
    if (_____)
    {
        _____;
    }
    else
    {
        _____;
    }
    /* ------------------------------ */

    return 0;
}

