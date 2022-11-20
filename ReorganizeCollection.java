import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.StringTokenizer;

public class ReorganizeCollection {

    public static void main(String[] argh) {

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
        System.out.println(solution(s));
    }

    public static String solution(String s) {

        List<Collection> collections = new ArrayList<Collection>();
        Map<String, ArrayList<Collection>> mappedList = new HashMap();
        List<String> collections = new ArrayList<>();
         String reOrderedCollections = "";

        StringTokenizer token = new StringTokenizer(s, "\n");

        while (token.hasMoreTokens()) {
            collections.add(token.nextToken());
        }

        for (String collection : collections) {
            StringTokenizer delimiter = new StringTokenizer(collection, ",");
            //Eliminate blank spaces
            Collection coll  = new Collection(delimiter.nextToken().replace(" ", ""), delimiter.nextToken().replace(" ", ""), delimiter.nextToken().replace(" ", ""));
            collections.add(coll);
        }

        //#######Group picture by city################        
        for (Collection coll : collections) {
            String city = coll.getCityName();
            if (mappedList.get(city) != null) {
                mappedList.get(city).add(coll);

            } else {
                ArrayList<Collection> picturesList = new ArrayList<>();
                picturesList.add(coll);
                mappedList.put(city, PicturedList);
            }
            //#######################################
        }

       

        for (Collection c : collections) {
            ArrayList<collection> sortedList = mappedList.get(p.getCityName());
            Collections.sort(sortedList);
            int counter = sortedList.indexOf(c) + 1;

            reOrderedCollections = reOrderedCollections
                    + c.getCityName() + ((returnZeros(String.valueOf(mappedList.get(c.getCityName()).size()).length()))
                    + counter).substring(String.valueOf(counter).length())
                    + c.getPhotoName().substring(p.getPhotoName().indexOf(".")) + "\n";
        }

        return reOrderedCollections;
    }

    public static String returnZeros(int counter) {
        String str = "";

        for (int z = 0; z < counter; z++) {
            str += "0";
        }
        return str;
    }
}
