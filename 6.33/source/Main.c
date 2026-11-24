#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int binarySearch(const int b[], int low, int high, int searchKey);

int main(void)
{
    int a[15] = { 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28 };
    int key;
    int result;

    printf("Enter a search key: ");
    scanf("%d", &key);

    result = binarySearch(a, 0, 14, key);

    if (result != -1)
    {
        printf("Found at subscript %d\n", result);
    }
    else
    {
        printf("Not found (-1)\n");
    }

    system("pause");
    return 0;
}

int binarySearch(const int b[], int low, int high, int searchKey)
{
    int middle;

    if (low > high)
    {
        return -1;
    }

    middle = (low + high) / 2;

    if (searchKey == b[middle])
    {
        return middle;
    }
    else if (searchKey < b[middle])
    {
        return binarySearch(b, low, middle - 1, searchKey);
    }
    else
    {
        return binarySearch(b, middle + 1, high, searchKey);
    }
}