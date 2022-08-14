import java.utils.*;

public class Sales{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int t = input.nextInt();
    for(int i=0;i<t;i++){
      int x = input.nextInt();
      if(x<=100){
        System.out.println(x);
      } else if(x>100 && x<=1000){
        System.out.println(x-25);
      } else if(x>1000 && x<=5000){
        System.out.println(x-100);
      } else if(x>5000){
        System.out.println(x-500);
      }
    }
  }
}
