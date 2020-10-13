// https://yunmap.tistory.com/entry/%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-Java%EB%A1%9C-%EA%B5%AC%ED%98%84%ED%95%98%EB%8A%94-%EC%89%AC%EC%9A%B4-Merge-Sort-%EB%B3%91%ED%95%A9-%EC%A0%95%EB%A0%AC-%ED%95%A9%EB%B3%91-%EC%A0%95%EB%A0%AC
package Sort_algorithm.JAVA;

public class merge_sort_01
{
    // 배열 전역변수로 선언
    public static int[] src;
    public static int[] tmp;

    public static void main(String[] args) 
    {
        src= new int[]{1, 9, 8, 5, 4, 2, 3, 7, 6};
        tmp= new int[src.length];
        printArray(src);
        mergeSort(0,src.length-1);
        printArray(src);
    }

    public static void mergeSort(int start,int end) 
    {
        if(start<end)
        {
            int mid= (start+end)/2;
            mergeSort(start, mid);
            mergeSort(mid+1, end);

            int p= start;
            int q= mid+1;
            int idx= p;     //start, p, idx는 같은 값

            while(p<=mid || q<=end) //어느 한쪽 인덱스가 끝까지 도달했을 경우
            {
                //삽입
                if(q>end || (p<=mid && src[p]<src[q]))
                {   //미드 값이 더크거나 (시작값과 미드값이 같고, 정렬이 되어 있을 때)
                    tmp[idx++]= src[p++];
                }   //실행하고 변수값 ++, 시작~ 미들
                else
                {
                    tmp[idx++]= src[q++];
                }   //미들~ 끝
            }

            for(int i=start; i<=end; i++)
            {
                src[i]= tmp[i];
            }
        }
    }

    public static void printArray(int[] a)
    {
        for(int i=0; i<a.length; i++)
        {
            System.out.print(a[i]+"");
        }
        System.out.println();
    }
}