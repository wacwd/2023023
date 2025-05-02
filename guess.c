#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, guess, numberOfTries = 0;

    // 初始化随机数生成器
    srand(time(NULL));

    // 生成一个1到100之间的随机数
    numberToGuess = rand() % 100 + 1;

    printf("欢迎来到猜数游戏！\n");
    printf("我已经想好了一个1到100之间的数字。\n");
    printf("你有10次机会猜这个数字。\n");

    for (int i = 0; i < 10; i++) {
        printf("第%d次猜测: ", i + 1);
        scanf("%d", &guess);

        numberOfTries++;

        if (guess == numberToGuess) {
            printf("恭喜你！你猜对了！\n");
            printf("你总共尝试了%d次。\n", numberOfTries);
            break;
        } else if (guess < numberToGuess) {
            printf("太小了！再试一次。\n");
        } else {
            printf("太大了！再试一次。\n");
        }
    }

    if (guess != numberToGuess) {
        printf("很遗憾，你已经用完了所有的机会。\n");
        printf("我想的数字是：%d。\n", numberToGuess);
    }

    return 0;
}
