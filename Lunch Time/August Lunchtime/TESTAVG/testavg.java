import java.util.*;

public class testavg {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int i =0 ; i<t ;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int c = in.nextInt();
            int avg1 = (a+b)/2;
            int avg2 = (b+c)/2;
            int avg3 = (a+c)/2;
            if(avg1>=35 && avg2>=35 && avg3>=35){
                System.out.println("PASS");
            } else{
                System.out.println("FAIL");
            }
        }
        in.close();
    }
}