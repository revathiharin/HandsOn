import java.util.Arrays;

public class smallPostivInt {
    class Solution {
        public static int solution(int[] A) {
            // write your code in Java SE 8
            int positiveInt = 0;
            if (A.length > 0) {
                Arrays.sort(A);
                for (int i = 0; i < A.length; i++) {
                    if (A[i] != i + 1) {
                        positiveInt = A[i] < 0 ? 1 : (A[i] <= i + 1 ? A[i] + 1 : (i + 1));
                        // return positiveInt;
                    }
                }
                if (positiveInt == 0 && A.length > 0) {
                    positiveInt = A[A.length - 1] < 0 ? 1 : A[A.length - 1] + 1;
                }

            }
            return positiveInt;
        }

        public static void main(String[] args) {
            int[] A = { -1, -2, -3, 1, 2, 3 };
            System.out.println(solution(A));
        }
    }
}
