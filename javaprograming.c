
import java.util.Scanner;

public class PasswordCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter password: ");
        String password = sc.nextLine();

        if (password.equals("admi 123")) {
            System.out.println("access granted");
        } else {
            System.out.println("access denied");
        }

        sc.close();
    }
}

