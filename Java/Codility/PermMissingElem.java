import java.util.Arrays;

public class PermMissingElem {
    public static int slnPermMissingElem(int[] A) {
        int missingElem = 0;
        if (A.length > 0) {
            Arrays.sort(A);
            for (int i = 0; i < A.length; i++) {
                if (A[i] != i + 1) {
                    missingElem = i + 1;
                    return missingElem;
                }
            }
            if (missingElem == 0) {
                missingElem = A[A.length] + 1;
            }
        } else if (A.length == 0) {
            missingElem = 1;
        }
        return missingElem;
    }

    public static void main(String[] args) {
        int[] A = { 1, 2, 3, 4 };// new int[100001];

        /*
         * for(int i = 0; i< 100001;i++){
         * A[i] = i+1;
         * }
         * A[100000] = 100002;
         */
        System.out.println(slnPermMissingElem(A));
    }

}
