import java.util.*;
public class solution{
    public String modString(String a){
        String temp="";
        for(int i=0;i<a.length();i++){
            char t = Character.isUpperCase(a.charAt(i))? Character.toLowerCase(a.charAt(i)): Character.toUpperCase(a.charAt(i));
            temp=t+temp;
        }
        return temp;
    }

    public void init(){
        Scanner sc=new Scanner(System.in);
        int no=sc.nextInt()+1;
        String[] words=new String[no];
        for(int i=0;i<no;i++){
            String s=sc.nextLine();
            words[i]=modString(s);
        }
        for(int i=0;i<no;i++){
            System.out.println(words[i]);
        }
    }
    public static void main(){
        solution a=new solution();
        a.init();
    }
}