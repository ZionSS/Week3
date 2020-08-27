#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
    char str[1000];
    int len;
    scanf("%s", str);
    len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
        {
            printf("%c", str[i]);

        }
        else
        {
            continue;
        }

    }
}