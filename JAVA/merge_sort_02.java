package Sort_algorithm.JAVA;

// https://www.daleseo.com/sort-merge/
public class merge_sort_02 
{
    public static void mergeSort(int[] arr) 
    {
        sort(arr, 0, arr.length);    
    }

    public static void sort(int[]arr, int low, int high) 
    {
        if(high-low<2)
        { //길이가 1이하면 종료
            return;
        }

        int mid= (low+high)/2;
        sort(arr, 0, mid);
        sort(arr, mid, high);
        merge(arr,low,mid,high);
    }

    public static void merge(int[] arr, int low, int mid, int high) 
    {
        int[] temp= new int[high-low];
        int t= 0;
        int l= low; 
        int h= mid;

        while(l<mid && h<high) //첫인덱스와 마지막 인덱스
        {
            if(arr[l]<arr[h]) //mid를 기준으로 삽입
            {
                temp[t++]= arr[l++];
            }
            else
            {
                temp[t++]= arr[h++];
            }
        }

        while(l<mid)
        {
            temp[t++]= arr[l++];
        }

        while(h<high)
        {
            temp[t++]= arr[h++];
        }

        for(int i= low; i<high; i++)
        {
            arr[i]= temp[i-low];
        }
    }
}
