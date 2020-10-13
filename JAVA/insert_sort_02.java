package Sort_algorithm.JAVA;

public class insert_sort_02 
{
    public void insertSort(int[] arr)
    {
        int len= arr.length;
        int temp=0;
        int j= 0;

        for(int i=1; i<len; i++)    
        {
            temp= arr[i];
            for(j=i-1; j>=0 && temp<arr[j]; j--)
            {
                arr[j+1]= arr[j];
            }
            arr[j+1]= temp;
        }
    }

    public static void main(String[] args)
    {
        insert_sort_02 insertion= new insert_sort_02();
         
        int A[]= {66, 10, 1, 34, 5};

        insertion.insertSort(A);

        for(int i=0; i<A.length; i++)
        {
            System.out.println("A["+i+"] : "+A[i]);
        }
    }
}