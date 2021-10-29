import java.util.*;
class anush_level2problem2
{
    public int sum(int x)
    {
        int sum=0;
        for(int i=0;i<x;i++)
        {
            if(i%5==0)
            {
                sum+=i;
            }
            if(i%7==0)
            {
                sum+=i;
            }
            if(i%35==0)
            {
                sum-=i;
            }
        }
        return sum;
    }

    public static void main()
    {

        Scanner sc=new Scanner(System.in);
        int no=sc.nextInt();
        sc.close();
        int x[]=new int[no];
        anush_level2problem2 a=new anush_level2problem2();
    for(int i=0;i<no;i++)
        {
            Scanner s=new Scanner(System.in);
            String input=s.nextLine();
            StringTokenizer str=new StringTokenizer(input);
            x[i]=Integer.parseInt(str.nextToken());
            s.close();
        }
        for(int i=0;i<no;i++)
        {
            System.out.println(a.sum(x[i]));
        }
    }
}