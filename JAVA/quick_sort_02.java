package Sort_algorithm.JAVA;

public class quick_sort_02 
{   //책 정리
    public static void QSORT(int[] E, int Left, int Right)
    {
        int temp;
        if(Left>=Right) return; //원소가 1개일 경우
        int Pivot= E[Left];
        int i= Left+1;
        int j= Right;

        do
        {
            while(Pivot>E[i] && i<Right) i++;
            while(Pivot<E[j] && j>Left) j--;
            if(i>=j) break;
            temp= E[i];
            E[i]= E[j];
            E[j]= temp;
        }while(i<=j);

        temp= E[j];
        E[j]= E[Left];
        E[Left]= temp;

        QSORT(E, Left, j-1);
        QSORT(E, j+1, Right);
    }

    public static void main(String[] args) 
    {
        
    }
}