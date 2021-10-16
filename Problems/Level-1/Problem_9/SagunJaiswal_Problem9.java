import java.util.Scanner;
public class Main {
	static boolean isAlphabaticOrder(String s) {
		int n = s.length();

		for (int i = 1; i < n; i++) {
			if (s.charAt(i) < s.charAt(i - 1)) {
				return false;
			}
		}

		return true;
	}

	static public void main(String[] args) {
		
	    Scanner sc = new Scanner(System.in);
		int testCases = sc.nextInt();
		while(testCases-- > 0){
		String s = sc.next();
		if (isAlphabaticOrder(s)) {
			System.out.println("true");
		} 
		else {
			System.out.println("false");
		}
	}
	}
}
