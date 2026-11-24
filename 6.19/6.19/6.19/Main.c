#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int sumCount[13] = { 0 };
    int dice1;
    int dice2;
    int sum;
    int roll;

    srand(time(0));

    for (roll = 0; roll < 36000; roll++)
    {
        dice1 = 1 + rand() % 6;
        dice2 = 1 + rand() % 6;
        sum = dice1 + dice2;
        sumCount[sum]++;
    }

    printf("%s%12s%15s\n", "Sum", "Count", "Expected");

    for (sum = 2; sum <= 12; sum++)
    {
        int ways = (sum <= 7) ? (sum - 1) : (13 - sum);
        double expected = 36000.0 * ways / 36.0;
        printf("%3d%12d%15.1f\n", sum, sumCount[sum], expected);
    }

    system("pause");
    return 0;
}