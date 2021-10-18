import java.util.Scanner;
public class Main
{
    static boolean isVowel(char c){
        if(c == 'A'||c == 'E'||c == 'I'||c == 'O'||c == 'U'||c == 'a'||c == 'e'||c == 'i'||c == 'o'||c == 'o'||c == 'u')
            return true;
        return false;
    }
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int testCases = sc.nextInt();
		while(testCases-- >= 0){
		    String str = sc.nextLine();
		    StringBuilder resStr = new StringBuilder();
		    for(int i = 0 ; i < str.length() ; i++){
		        if(!isVowel(str.charAt(i)))
		            resStr.append(str.charAt(i));
		    }
		    System.out.println(resStr);
		}
		
	}
}
