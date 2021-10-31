import java.util.*;
public class removevowels
{
    public static void main(String args[])
    {
        String s1,s2;
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a string");
        s1=sc.nextLine();
        s2=s1.replaceAll("[aeiouAEIOU]","");
        System.out.println("the new string is "+s2);
        
    }
}
