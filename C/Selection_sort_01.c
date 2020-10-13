#include <stdio.h>

void sequential(int num[], int size);       //(배열, 배열의 크기)

int main()
{
    int num[9]= { 1,7,4,3,9,2,8,5,6 };
    sequential(num,9);                      //순차 정렬
    return 0;
}

void sequential(int num[], int size)
{
    for(int i=0; i<size; i++)               //i는 0부터
    {
        for(int j= i+1; j<size; j++)        //j는 1부터
        {
            if (num[i] > num[j])            //앞의 원소가 크면
            {
                int tmp= num[i];            //원소를 바꿈
                num[i]= num[j];
                num[j]= tmp;
            }
            
        }
    }

    for(int i=0; i<size; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");
}