import java.util.Scanner;

/**
 * Created by Pias Tanmoy on 9/18/2017.
 */
public class Codeforces734A {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int len = scanner.nextInt();

        String game;
        game = scanner.next();
        int a = game.length() - game.replace("A", "").length();
        int d = game.length() - game.replace("D", "").length();

        if(a>d) System.out.println("Anton");
        else if(d>a) System.out.println("Danik");
        else System.out.println("Friendship");

    }
}
