import java.util.Scanner;

public class Trik {

    public static void main(String[] args) {

        String swapCode = "";

        Scanner sc = new Scanner(System.in);
        swapCode = sc.nextLine();

        int true_position = 1;

        if (checkABC(swapCode)) {
            for (int i = 0; i < swapCode.length(); i++) {
                if (swapCode.charAt(i) == 'A')
                    true_position = swapCodeA(true_position);
                if (swapCode.charAt(i) == 'B')
                    true_position = swapCodeB(true_position);
                if (swapCode.charAt(i) == 'C')
                    true_position = swapCodeC(true_position);
            }

            System.out.println(true_position);

        }

    }

    public static boolean checkABC(String str) {
        if (str.length() > 50)
            return false;
        for (int i = 0; i < str.length(); i++) {
            if ((str.charAt(i) == 'A') || (str.charAt(i) == 'B') || (str.charAt(i) == 'C')) {

            } else {
                return false;
            }
        }
        return true;
    }

    public static int swapCodeA(int true_position) {
        if (true_position == 1)
            return 2;
        else if (true_position == 2)
            return 1;
        else
            return true_position;
    }

    public static int swapCodeB(int true_position) {
        if (true_position == 1)
            return true_position;
        else if (true_position == 2)
            return 3;
        else
            return 2;
    }

    public static int swapCodeC(int true_position) {
        if (true_position == 1)
            return 3;
        else if (true_position == 2)
            return true_position;
        else
            return 1;
    }

}
