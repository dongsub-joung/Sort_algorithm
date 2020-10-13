#include <stdio.h>
#define MAX_LEN 9
//책 정리

void main()
{
	int A[] = { 2,5,10,17,20 };
	int B[] = { 11,9,8,7 };
	int A_len = 5;
	int B_len = 4;
	int C[MAX_LEN];							//정렬한 것을 삽입할 배열
	int iA = 0, iB = B_len - 1, iC = 0;		//각 배열들의 인덱스
	int done = 0;

	for (;;)
	{
		if (A[iA]<B[iB])
		{
			C[iC] = A[iA];
			iA++;
			iC++;
			if (iA > A_len - 1)
			{
				if (done == 0)
				{
					A[A_len - 1] = 99999;
					iA = A_len - 1;
					done = 1;
				}
				else
				{
					break;
				}
			}
			else
			{
				C[iC] = B[iB];
				iB--;
				iC++;
				if (iB <0)
				{
					if (done == 0)
					{
						B[0] = 99999;
						iB = 0;
						done = 1;
					}
					else
					{
						break;
					}
				}
			}
		}
	}

	for (int a = 0; a < A_len+B_len; a++)
	{
		printf("%d\t", C[a]);
	}
	printf("\n");
}