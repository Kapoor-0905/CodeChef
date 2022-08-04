import java.util.*;
public class Burgers{
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    int t = input.nextInt();
    for(int i=0;i<t;i++){
      int a = input.nextInt();
      int b = input.nextInt();
      if(a==b){
        System.out.println(a);
      } else if (a>b){
        System.out.println(b);
      } else {
        System.out.println(a);
      }
    }
  }
}
