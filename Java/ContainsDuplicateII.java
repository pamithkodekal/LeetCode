
import java.util.Scanner;


public class ContainsDuplicateII {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of array: ");
        int n = sc.nextInt();

        int[] nums = new int[n];

        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) {
            nums[i] = sc.nextInt();
        }

        System.out.print("Enter value of k: ");
        int k = sc.nextInt();

        Solution obj = new Solution();

        boolean result = obj.containsNearbyDuplicate(nums, k);

        System.out.println("Result: " + result);

        sc.close();
    }
}



class Solution {

    public boolean containsNearbyDuplicate(int[] nums, int k) {

        for (int i = 0; i < nums.length; i++) {
            for (int j = i + 1; j < nums.length; j++) {

                if (nums[i] == nums[j] && (j - i) <= k) {
                    return true;
                }

            }
        }

        return false;
    }
}



    