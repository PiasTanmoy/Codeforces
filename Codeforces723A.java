import java.util.Scanner;

/**
 * Created by Pias Tanmoy on 9/18/2017.
 */
public class Codeforces723A {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        int min = 500;
        int temp;
        for( int i=0; i<=100; i++){
            temp = Math.abs(i-a) + Math.abs(i-b) + Math.abs(i-c);
            if(min>temp){
                min = temp;
            }
        }

        System.out.println(min);
    }
}
