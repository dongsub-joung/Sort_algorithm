#include <stdio.h>

void swquenceSort(int *base, int n);
int main(void)
{
    int arr[10]= {9,4,3,10,5,8,7,6,2,1};
    swquenceSort(arr,10);
    return 0;
}
void viewArr(int *arr, int n);

// 순차 정렬
void swquenceSort(int *base, int n)
{
    int i, j;
    viewArr(base, n);
    for (i= 0; i < n; i++)
    {
        /* 첫번째 index 반복 */
        for (j = 0; j < n; j++)
        {
            /* 두번째 index 반복 */
            if(base[i]>base[j])
            {
                int temp=0;
                temp= base[i];
                base[i]= base[j];
                base[j]= temp;
                viewArr(base,n);
            }
        }
    }
}

void viewArr(int *arr, int n)
{
    int i= 0;
    for(i=0; i<n; i++)
    {
        printf("%2d", arr[i]);
    }
    
    printf("\n");
}