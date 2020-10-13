#include <stdio.h>
#define LEN 5


void main()//책
{
	int arr[LEN] = { 95,75,85,100,50 };
	int i;
	int j, Key;

	for (i = 1; i < LEN; i++)				//(길이-1)번 반복
	{
		Key = arr[i];						//i는 1부터 시작함. i번째 원소가 Key 
		for (j = i - 1; j >= 0; j--)		// i보다 -1번째의 인덱스 값을 가지며 0까지 --
		{
			if (arr[j] <= Key) break;		//만약 key로 설정된 원소값이 더 크면 j--의 반복을 탈출 i++
			arr[j + 1] = arr[j];			//그렇지 않으면 j번째 원소를 j+1로 바꿈.
		}
		arr[j + 1] = Key;					//j+1번째 원소를 key값으로 바꿈.
	}

	for (i = 0; i < LEN; i++)
	{
		printf("%d\t", arr[i]);
	}

	printf("\n");
}