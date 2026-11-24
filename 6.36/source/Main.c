#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char strArray[]);

int main(void)
{
    char str[50] = "hello world";

    stringReverse(str);
    printf("\n");

    system("pause");
    return 0;
}

void stringReverse(const char strArray[])
{
    if (strArray[0] == '\0')
    {
        return;
    }

    stringReverse(&strArray[1]);
    printf("%c", strArray[0]);
}