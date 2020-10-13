#include<stdio.h>
#include<stdlib.h>      //qsort 함수가 선언된 헤더 파일
#define MAX_LEN 10

int compare(const void *a, const void *b)
{                       //오름차순 비교 함수 구현
    int num1= *(int *)a;        //int형, 역참조하여 값을 가져옴
    int num2= *(int *)b;        // ""

    if(num1< num2) return -1;    //a가 b보다 작을 때 -1
    if(num1> num2) return 1;     //a가 클때는 1

    return 0;                    // a와 b가 같을 때는 0 반환 
}

int main()
{
    int numArr[MAX_LEN]= { 8, 4, 2, 5, 3, 7, 10, 1, 6, 9 };

    // 정렬할 배열, 요소 개수, 요소 크기, 비교 함수를 넣어줌
    qsort(numArr, sizeof(numArr)/sizeof(int), sizeof(int), compare);

    for(int i=0; i<MAX_LEN; i++)
    {
        printf("%d ", numArr[i]);
    }

    printf("\n");

    return  0;
}