package Sort_algorithm.JAVA;

//https://hahahoho5915.tistory.com/7

public class Selection_sort_02 
{
    public void selectionSort(int[] data)       //선택정렬 함수
    {
        int size= data.length;                  //배열의 크기
        int min;
        int temp;

        for(int i=0; i<size-1; i++)             
        {
            min = i;                            //기준 index i를 min으로
            for(int j=i+1; j<size; j++)         
            {
                if(data[min] > data[j])         //0번째 원소가 더크면
                {
                    min=j;                      //작은 원소의 index를 min에 대입
                }
            }
            temp= data[min];                    //index min은 이제 최소값을 가짐으로 최소값을 i번째 (0부터 시작하는)의 값과 바꿈
            data[min]= data[i];
            data[i]= temp;
        }                                       //배열의 크기 -1보다 작을 때까지 반복
    }

    public static void main(String[] args)
    {
        Selection_sort_02 selection= new Selection_sort_02();

        int data[]= {66, 10, 1, 99, 5};

        selection.selectionSort(data);

        for(int i=0; i<data.length; i++)
        {
            System.out.print("data["+i+"] : " + data[i]);
        }
    }
}
