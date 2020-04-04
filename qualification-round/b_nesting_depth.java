import java.util.*;
import java.io.*;
import java.lang.Math;

public class Solution {
	public static void main (String[] args) {
		boolean debug = false;
		Scanner in = new Scanner(new BufferedReader(new InputStreamReader(System.in)));
		String tString = in.nextLine();
		int t = Integer.parseInt(tString);
		for (int i = 1; i <= t; ++i) {
			String string = in.nextLine();
			char[] cArr = string.toCharArray();
			int currentStack = 0;
			String answer = "";

			for (char currentChar: cArr) {
				int currentInt = Character.getNumericValue(currentChar);
				if (currentInt > currentStack) {
					while (currentInt > currentStack) {
						answer += "(";
						currentStack++;
					}
					answer += Integer.toString(currentInt);
				} else if (currentInt == currentStack) {
					answer += currentInt;
				} else if (currentInt < currentStack) {
					while (currentInt < currentStack) {
						answer += ")";
						currentStack--;
					}
					answer += Integer.toString(currentInt);
				}
			}

			while (currentStack > 0) {
				answer += ")";
				currentStack--;
			}

			if (debug) {
				System.out.println("Case #" + i + ": " + Arrays.toString(cArr));
				System.out.println(answer);
			}
			System.out.println("Case #" + i + ": " + answer);
		}
	}
}