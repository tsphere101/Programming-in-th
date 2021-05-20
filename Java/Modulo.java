import java.lang.Math;
import java.util.ArrayList;

public class Modulo {
    public static void main(String[] args) {

        ArrayList<Integer> input = new ArrayList<Integer>();
        ArrayList<Integer> remainder = new ArrayList<Integer>();
        int value = 3;

        for (int i = 0; i < 10; i++) {
            int temp = (int) Math.round(Math.random() * 100);
            input.add(temp);
        }

        for (int i = 0; i < 10; i++) {

            /* Checking the array if there're exist the same */ 
            boolean add_flag = false;
            for(int k : remainder)
            {
                if( k == input.get(i) % value)
                {
                    add_flag = true;
                    break;
                }

            }
            if(!add_flag)
            {
                remainder.add(input.get(i) % value);
            }
        }

        System.out.println(remainder.size());

    }
}
