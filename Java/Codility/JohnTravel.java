import java.util.*;

public class JohnTravel {
    public static String solution(String S) {
        // write your code in Java SE 8
        String outputValue = "";
        String[] singlePhotoInfos = S.split("\n");
        String[][] individualInfo = new String[1000][1000];
        String[] unique = new String[10];// Arrays.stream(array).distinct().toArray(String[]::new);
        int tempCount = 0;
        for (int i = 0; i < singlePhotoInfos.length; i++) {
            individualInfo[i][0] = singlePhotoInfos[i].split(", ")[0];
            individualInfo[i][1] = singlePhotoInfos[i].split(", ")[1];
            individualInfo[i][2] = singlePhotoInfos[i].split(", ")[2];
            if (!Arrays.asList(unique).contains(singlePhotoInfos[i].split(", ")[1])) {

                unique[tempCount] = singlePhotoInfos[i].split(", ")[1];// System.out.println(unique[tempCount]);
                tempCount++;

            }

        }

        return outputValue;
    }

    public static void main(String[] args) {
        String s = "photo.jpg, Warsaw, 2013-09-05 14:08:15\n"
                + "john.png, London, 2015-06-20 15:13:22\n"
                + "myFriends.png, Warsaw, 2013-09-05 14:07:13\n"
                + "Eiffel.jpg, Paris, 2015-07-23 08:03:02\n"
                + "pisatower.jpg, Paris, 2015-07-22 23:59:59\n"
                + "BOB.jpg, London, 2015-08-05 00:02:03\n"
                + "notredame.png, Paris, 2015-09-01 12:00:00\n"
                + "me.jpg, Warsaw, 2013-09-06 15:40:22\n"
                + "a.png, Warsaw, 2016-02-13 13:33:50\n"
                + "b.jpg, Warsaw, 2016-01-02 15:12:22\n"
                + "c.jpg, Warsaw, 2016-01-02 14:34:30\n"
                + "d.jpg, Warsaw, 2016-01-02 15:15:01\n"
                + "e.jpg, Warsaw, 2016-01-02 09:49:09\n"
                + "f.jpg, Warsaw, 2016-01-02 10:55:32\n"
                + "g.jpg, Warsaw, 2016-02-29 22:13:11";
        // System.out.println(s);
        solution(s);

        // solution(s);
    }
}
