import java.util.ArrayList;
import java.util.Iterator;

public class p {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();

        arr.add(10);
        arr.add(20);
        arr.add(30);
        arr.add(40);
        arr.add(50);

        System.out.println(arr);

        Iterator<Integer> it = arr.iterator();
        while (it.hasNext()) {
            System.out.println("Element " + it.next());
            if(it.next()==40)
            {
                it.remove();
                System.out.println("Element removed");
            }
        }

    }
}