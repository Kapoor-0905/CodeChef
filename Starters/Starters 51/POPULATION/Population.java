import java.util.Scanner;
public class Population {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        for(int i= 0; i<t; i++){
            int x = input.nextInt();
            int y = input.nextInt();
            int z = input.nextInt();
            System.out.println((x+y)-z);
        }
    }
}