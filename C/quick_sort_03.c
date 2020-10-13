#include <stdio.h>
//책 정리

void QSORT(int E[], int left, int right)
{
    int temp;
    if (left >= right) return;
    int pivot = E[left];
    int i = left + 1;
    int j = right;

    while (1)
    {
        while (pivot > E[i] && i < right) i++;
        while (pivot<E[j] && j>left) j--;
        if (i >= j) break;     //i, j.가 교차할 때 까지 반복
        temp = E[i];         //피봇보다 작고, 피봇보다 큰 
        E[i] = E[left];
        E[left] = temp;
    }

    temp = E[i];
    E[i] = E[left];
    E[left] = temp;

    QSORT(E, left, j - 1);
    QSORT(E, j + 1, right);
}

void main()
{
    int E[] = { 26,14,100,95,22,17,48,20,50,90 };
    enum len
    {
        MIN = 0,
        MAX = 10
    };

    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", E[i]);
    }
    printf("\n");

    QSORT(E, MIN, (MAX - 1));

    for (int i = 0; i < MAX; i++)
    {
        printf("%d\t", E[i]);
    }
    printf("\n");
}