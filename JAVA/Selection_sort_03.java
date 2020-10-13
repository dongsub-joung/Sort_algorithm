package Sort_algorithm.JAVA;
/* https://dpdpwl.tistory.com/17 */

public class Selection_sort_03 
{
    public static void main(String[] args)
    {
        int[] a = {254,3,213,64,75,56,4,324};
        int b;

        for(int i=0; i<a.length-1; i++)         
        {
            for(int j=i+1; j< a.length; j++)
            {
                if(a[i]> a[j])
                {
                    b= a[j];
                    a[j]= a[i];
                    a[i]= b;
                }
            }
        }

        for(int i=0; i< a.length; i++)
        {
            System.out.print(a[i]);
        }
    }
}