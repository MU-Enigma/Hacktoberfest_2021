import java.util.*;
class anush_level2problem5
{
    public String ignoredString(String a)
    {
        String ret="";
        for(int i=0;i<a.length();i++)
        {
            if(Character.isLetter(a.charAt(i)))
            {
                ret+=Character.toUpperCase(a.charAt(i));
            }
            if(Character.isDigit(a.charAt(i)))
            {
                ret+=a.charAt(i);
            }
        }
        return ret;
    }

    public boolean isPalindrome(String s)
    {
        String b="";
        boolean ret=false;
        for(int i=0;i<s.length();i++)
        {
            b=s.charAt(i)+b;
        }
        if(b.equals(s))
        {
            ret=true;
        }
        return ret;
    }

    public static void main(String []args)
    {
        Scanner sc=new Scanner(System.in);
        int no=sc.nextInt();
        String[] words=new String[no];
        for(int i=0;i<no;i++)
        {
            Scanner s=new Scanner(System.in);
            words[i]=s.nextLine();
        }
        anush_level2problem5 a=new anush_level2problem5();

        for(int i=0;i<no;i++){
            if(words[i]!="")
            {
            if(a.isPalindrome(a.ignoredString(words[i])))
            {
                System.out.println("1");
            }
            else
            {
                System.out.println("0");
            }
        }
        }
    }
}