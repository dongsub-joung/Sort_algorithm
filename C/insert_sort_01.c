#include <stdio.h>
#define MAX_LEN 5

void insertionSort(int* arr)
{
	int i, j;
	int key;

	for (i = 0; i < MAX_LEN; i++)
	{
		key = arr[i];

		for (j = 0; j >=0; j--)
		{
			if (arr[j] > key)				//만약 j가 key보다 크다면 
			{
				arr[j + 1] = arr[j];		//j의 원소는 j+1
			}
			else
			{
				break;						//key가 크면 변화 없이 반복문 탈출
			}
		}
		arr[j + 1] = key;					//key값을 j+1에 넣음. j는 0부터 시작함.
	}
}

int main(void)
{
	int arr[MAX_LEN] = { 9,5,3,7,1 };
	int i;

	for (i = 0; i < MAX_LEN; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	insertionSort(arr);

    printf("정렬 후 \n");
	for (i = 0; i < MAX_LEN; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}