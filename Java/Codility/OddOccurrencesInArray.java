public class OddOccurrencesInArray {
    public static int slnOddOccurrencesInArray(int[] inputArray) {
        int outputValue = 0;
        for (int iterator = 0; iterator < inputArray.length; iterator++) {
            outputValue ^= inputArray[iterator];
        }

        return outputValue;
    }

    public static void main(String args[]) {
        int[] inputArray = { 9, 7, 3, 9, 3, 9, 7, 9, 2 };
        int outputArray = 0;
        outputArray = slnOddOccurrencesInArray(inputArray);
        System.out.println(outputArray);
    }

}
