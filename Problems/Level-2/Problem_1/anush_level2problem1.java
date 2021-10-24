import java.util.*;
class anush_level2problem1{

    public int steps(int b,int r,int x)
    {
        int d=0;
        int steps=0;
        int forward=r;
        int backward=b;
        int ret=-1;
        while(d<=x)
        {
            if(d==x)
            {
                ret=steps;
                break;
            }
            else if(forward>0)
            {
                steps++;
                forward--;
                d++;
            }
            else if(d==0)
            {
                break; 
            }
            else if(forward==0 && backward>0)
            {
                steps++;
                backward--;
                d--;
            }
            else if(forward==0 && backward==0)
            {
                forward=r;
                backward=b;
            }
        }
        return ret;
    }

    public static void main()
    {

        Scanner sc=new Scanner(System.in);
        int no=sc.nextInt();
        sc.close();
        int r[]=new int[no];
        int b[]=new int[no];
        int x[]=new int[no];
        for(int i=0;i<no;i++)
        {
            Scanner s=new Scanner(System.in);
            String input=s.nextLine();
            StringTokenizer str=new StringTokenizer(input);
            b[i]=Integer.parseInt(str.nextToken());
            r[i]=Integer.parseInt(str.nextToken());
            x[i]=Integer.parseInt(str.nextToken());
            s.close();
        }

        for(int i=0;i<no;i++)
        {
            anush_level2problem1 a=new anush_level2problem1();
            System.out.println(a.steps(b[i],r[i],x[i]));
        }
    }
}