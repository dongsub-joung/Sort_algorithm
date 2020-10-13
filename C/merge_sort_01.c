#include <stdio.h>
#define MAX_SIZE 8

int sorted[MAX_SIZE];
// i: 정렬된 왼쪽 리스트에 대한 인덱스
// j: 정렬된 오른쪽 리스트에 대한 인덱스
// k: 정렬될 리스트에 대한 인덱스
/* 2개의 인접한 배열 list[left...mid]와 list[mid+1...right]의 합병 과정 */
/* (실제로 숫자들이 정렬되는 과정) */
// https://gmlwjd9405.github.io/2018/05/08/algorithm-merge-sort.html

void merge(int list[], int left, int mid, int right)
{
	int i, j, k, l;
	i = left;
	j = mid + 1;
	k = left;

	/* 분할 정렬된 list의 합병 */
	while (i <= mid && j <= right)
	{
		if (list[i] <= list[j])
		{
			sorted[k] = list[i];
			i++;
		}
		else
		{
			sorted[k] = list[j];
			j++;
		}
		k++;
	}

	//남아 있는 값들을 일괄 복사 ( mid를 기준으로 두개라서)
	if (i > mid)
	{
		for (l = j; l <= right; l++)
		{
			sorted[k] = list[l];
			k++;
		}
	}
	else
	{
		for (l = i; l < mid; l++)
		{
			sorted[k] = list[l];
			k++;
		}
	}

	//임시배열(sorted)의 리스트를 배열 list[]로 재복사
	for (l = left; l < right; l++)
	{
		list[l] = sorted[l];
	}
}

void mergeSort(int list[], int left, int right)
{
	int mid;
	if (left < right)
	{
		mid = (left + right) / 2;			//중간점 계산, 분할
		mergeSort(list, left, mid);
		mergeSort(list, mid + 1, right);
		merge(list, left, mid, right);
	}
}

void main()
{
	int i;
	int list[MAX_SIZE] = { 21,10,12,20,25,13,15,22 };

	mergeSort(list, 0, MAX_SIZE - 1);

	for (i = 0; i < MAX_SIZE; i++)
	{
		printf("%d ", list[i]);
	}
}