#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
    char al, A = 'A';
    scanf("%c", &al);
    for (int j = 0; j < al - 64; j++)
    {
        for (int i = al - 64; i >= j; i--)
        {
            printf(" ");
        }
        for (char i = 0; i <= j; i++)
        {
            printf("%c ", A);
        }
        A++;
        printf("\n");
    }

}