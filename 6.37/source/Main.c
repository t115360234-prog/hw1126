#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(const int array[], int size);

int main(void)
{
    int a[10] = { 12, 45, 7, 89, 23, 64, 91, 5, 38, 19 };
    int maxVal;

    maxVal = recursiveMaximum(a, 10);
    printf("Maximum value is %d\n", maxVal);

    system("pause");
    return 0;
}

int recursiveMaximum(const int array[], int size)
{
    int maxOfRest;

    if (size == 1)
    {
        return array[0];
    }

    maxOfRest = recursiveMaximum(array, size - 1);

    return (array[size - 1] > maxOfRest) ? array[size - 1] : maxOfRest;
}