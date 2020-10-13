package Sort_algorithm.JAVA;

public class bubble_sort_02 
{
        public static void main(String[] args) 
        {
            int E[]= {95,75,85,100,50};
            int i=0;
            int temp;
            
            int element_index= E.length - 1;
            do
            {
                int j=0;
                do
                {
                    if(E[j]> E[j+1])    //앞의 원소가 크면
                    {
                        temp= E[j];     //원소를 바꿈
                        E[j]= E[j+1];
                        E[j+1]= temp;
                    }
                    j++;                //다음 원소
                }while(i < element_index - 1);
            i++;
            }while(i < element_index);

            int arrray_maxSize= 5;
            for(i=0; i<arrray_maxSize; i++)
            {
                System.out.println(E[i]+"\t");
            }
            System.out.println();
        }
}