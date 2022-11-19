
public class CyclicRotation {
    class Solution {
        public static int[] slnCyclicRotation(int[] inputArray, int noOfRotation) {
            int[] outputArray = new int[inputArray.length];
            if (inputArray.length <= 0) {
                return outputArray;
            }
            if (noOfRotation < 1) {
                return inputArray;
            }

            if ((inputArray.length % noOfRotation == 0 && inputArray.length <= noOfRotation)
                    || inputArray.length == 1) {
                outputArray = inputArray.clone();
            } else {
                int tempNoOfRotation = noOfRotation < inputArray.length ? noOfRotation
                        : noOfRotation % inputArray.length;
                for (int iteration = 0; iteration < tempNoOfRotation; iteration++) {
                    outputArray[0] = inputArray[inputArray.length - 1];
                    for (int rotate = 1; rotate < inputArray.length; rotate++) {
                        outputArray[rotate] = inputArray[rotate - 1];
                    }
                    inputArray = outputArray.clone();
                }
            }
            return outputArray;

        }

        public static void main(String args[]) {
            int[] inputArray = { -4 }; // [9, 7, 6, 3, 8]
            int noOfRotation = 0;
            int[] outputArray = {};
            outputArray = slnCyclicRotation(inputArray, noOfRotation);
            if (!(outputArray == null || outputArray.length <= 0)) {
                for (int i = 0; i < outputArray.length; i++) {
                    System.out.println(outputArray[i]);
                }
            }
        }

    }
}
