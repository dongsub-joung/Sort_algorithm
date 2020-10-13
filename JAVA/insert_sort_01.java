package Sort_algorithm.JAVA;

public class insert_sort_01 // 책
{
    public static void main(String[] args)
    {
        int arr[]= {95,75,85,100,50};
        int i;
        int j, Key;
        int len_arr= 5;

        for(i=1; i<len_arr; i++)
        {
            Key= arr[i];
            for(j= i-1; j>=0; j--)
            {
               if(arr[j] <= Key) break;
               arr[j+1]= arr[j];
            }
            arr[j+1]= Key;
        }
        for(i=0; i<len_arr; i++)
        {
            System.out.print(arr[i]+ "\t");
        }
        System.out.println();
    }
}