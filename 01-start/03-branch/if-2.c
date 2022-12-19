#include <stdio.h>

int main(void)
{
    int score;
    printf("Input your score: ");
    scanf("%d", &score);
    if (score < 0 || score > 100)
    {
        printf("sorry, invalid score\n");
    }
    else if (score < 30)
    {
        printf("not passed\n");    // D
    }
    else if (score < 70) {
        printf("safe\n");          // C
    }
    else if (score < 90) {
        printf("good!\n");         // B
    }
    else {
        printf("excellent!!\n");   // A
    }

    return 0;
}
