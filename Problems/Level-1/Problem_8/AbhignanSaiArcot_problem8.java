import java.util.*;
public class pallindrome
{
    public static void main(String args[])
    {
        int a=0,num,r,temp;
        Scanner sc=new Scanner(Systmen.in);
        System.out.prinltn("enter any number");
        num=sc.nextInt();
        temp=num;
        while(num>0)
        {
            r=num%10;
            a=(a*10)+r;
            num=num/10;
        }
        if(temp==num)
        {
            System.out.println("true");
        }
            else
            {
                System.out.println("false");
            }
        
    }
}
