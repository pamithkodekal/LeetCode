package Java;

import java.util.*;



public class LongestSUbstringWithoutRepetation {

    public static int lengthOfLongestSubstring(String s) {

        int maxLength = 0;

        for (int i = 0; i < s.length(); i++) {


            String store = "";

            for (int j = i; j < s.length(); j++) {

                char current = s.charAt(j);

                if (store.indexOf(current) != -1) {
                    break;
                }

                store += current;

                if (store.length() > maxLength) {
                    maxLength = store.length();
                }
            }
        }

        return maxLength;
    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        int result = lengthOfLongestSubstring(s);

        System.out.println("Length of Longest Substring Without Repeating Characters: " + result);

        sc.close();
    }
}