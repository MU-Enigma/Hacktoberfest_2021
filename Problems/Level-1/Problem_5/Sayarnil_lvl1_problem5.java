import java.io.*;
public class Problem5
{
    public static void main()throws IOException
    { int i,j,k,m=0,s=0;
        BufferedReader br = new BufferedReader(new InputStreamReader (System.in));
        System.out.println("Enter number of numbers");
        int n = Integer.parseInt(br.readLine());
        int ar [] = new int [n] ;
        System.out.println("Enter the numbers");
        for(i=0;i<n;i=i+1)
        {
          ar [i] = Integer.parseInt(br.readLine());
        }
         for(i=0;i<n;i=i+1)
         { 
             k= ar[i];
             for(j=2;j<k ; j=j+1)
             {
                 if(k%j==0)
                 {
                     m=1;
                 }
                }
                if(m==0)
                {
                    s=s+k;
                }
                m=0;
            }
            System.out.println(s);
                }
                
             }
        