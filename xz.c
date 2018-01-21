package Pro_6;

import java.util.Scanner;

public class P53 {
	public static void main(String[] args) {
		Scanner in = new Scanner(System.in);
		String input = in.nextLine();
		in.close();
		if (pangramChecker(input)) {
			System.out.println("The Given Sentense is Pangram");
		} else {
			System.out.println("The Given Sentense is Not a Pangram");
		}
	}

	public static boolean pangramChecker(String s) {
		s = s.replace(" ", "").toLowerCase();
		int count = 0;
		while (s.length() > 0) {
			s = s.replace(s.substring(0, 1), "");
			count++;
		}
		if (count == 26) {
			return true;
		} else {
			return false;
		}
	}

