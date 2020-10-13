#include <stdio.h>
#define NUMBER 9
// https://m.blog.naver.com/ndb796/221228342808

int heap[NUMBER] = { 7,6,5,8,3,5,9,1,6 };
int main(void)
{
	// 힙을 구성
	for (int i = 1; i < NUMBER; i++)
	{
		int c = i;
		do
		{
			int root = (c - 1) / 2;
			if (heap[root] < heap[c])
			{
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while (c != 0);
	}

	// 크기를 줄여가며 반복적으로 힙을 구성
	for (int i = NUMBER - 1; i >= 0; i--)
	{
		int temp = heap[0];
		heap[0] = heap[1];
		heap[i] = temp;
		int root = 0;
		int c = 1;
		do
		{
			c = 2 * root + 1;
            // 자식 중에 더 큰 값을 찾기
			if (c < i - 1 && heap[c] < heap[c + 1])
			{
				c++;
			}
            // 루트보다 자식이 크다면 교환
			if (c < i && heap[root] < heap[c])
			{
				temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while (c<1);
	}

	// 결과 확인
	for (int i = 0; i < NUMBER; i++)
	{
		printf("%d ", heap[i]);
	}
}