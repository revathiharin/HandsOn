public class FrogJmp {
    class Solution {
        public static int slnMinimalJumpRequired(int X, int Y, int D) {
            int countJump = 0;
            countJump = X <= Y ? (((Y-X) % D == 0) ? ((Y-X) / D) : ((Y-X) / D + 1)) : 0; //1+2+2
            /*
             * while(X <= Y){
             * countJump++;
             * X = X + D;
             * }
             */
            return countJump;
        }

        public static void main(String[] args) {
            int X = 1, Y = 5, D = 2;
            int countJump = 0;
            countJump = slnMinimalJumpRequired(X, Y, D);
            System.out.println(countJump);

        }
    }
}