package Sort_algorithm.JAVA;
//책 정리

public class Selection_sort_01
{
    public static void main(String[] args)
    {
        int E[]= {95,75,85,100,50};
        int i=0;
        int temp;
        
        int max_len= 5;
        do
        {
            int j= i+1;
            do
            {
                if(E[i] > E[j])
                {
                    temp= E[i];
                    E[i]= E[j];
                    E[j]= temp;
                }
                j++;
            }while(j < max_len);
            i++;
        }while(i < max_len-1);

        //배열 출력
        for(int a=0; a<5; a++)
        {
            System.out.print(E[a]+"\t");
        }
        System.out.println();
    }
}