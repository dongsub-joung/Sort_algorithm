package Sort_algorithm.JAVA;

public class merge_sort_03 
{
    public static void main(String[] arg) 
    {
        int A[]= {2,5,10,17,20};
        int B[]= {11,9,8,7};
        int len_A=5;    // M
        int len_B=4;    // N
        int C[]= new int[len_A+len_B];
        int iA=0, iC=0;
        int iB=len_B-1;
        int done= 0;
        
        for(;;)
        {
            if(A[iA]<B[iB])
            {
                C[iC++]= A[iA++];
                if(iA>len_A-1)
                {
                    if(done == 0)
                    {
                        A[len_A-1]= 99999;
                        iA= len_A-1;
                        done= 1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else
            {
                C[iC++]= B[iB--];
                if(iB<0)
                {
                    if(done==0)
                    {
                        B[0]= 99999;
                        iB= 0;
                        done= 1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

        for(int a=0; a<len_A+len_B; a++)
        {
            System.out.print(C[a]+"\t");
        }
        System.out.println();
    }
}