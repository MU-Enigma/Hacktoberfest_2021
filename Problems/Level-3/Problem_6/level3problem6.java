import java.util.*;
class level3problem6{
    public static void main(String []args)
    {
        Scanner s=new Scanner(System.in);
        String input=s.nextLine();
        StringTokenizer str=new StringTokenizer(input);
        int no=Integer.valueOf(str.nextToken())+1;
        System.out.println(no);
        int r[]=new int[no];
        int sell=0;
        int sin=0;
        int buy=0;
        int bin=0;
        int margin=0;
        for(int i=0;i<no && str.hasMoreTokens();i++)
        {
            r[i]=Integer.parseInt(str.nextToken());
            s.close();
        }
        for(int i=0;i<no;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(r[i]-r[j]>margin){
                    sell=r[i];
                    sin=i;
                    buy=r[j];
                    bin=j;
                    margin=r[i]-r[j];
                }
            }
        }if(sell<0 || buy<0){
            System.out.println("ERROR");
        }
        else if(margin==0)
        {
            System.out.println("0 0 0");
        }
        else
        {
            System.out.println(buy+" "+sell+" "+margin);
        }
    }
}
