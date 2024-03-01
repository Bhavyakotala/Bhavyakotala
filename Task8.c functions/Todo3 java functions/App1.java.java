import java.util.*;
//square of two numbers

public class Main {
    public static void doSquare(int a, int b)
    {
      int ansr;
      ansr=a*a+b*b+(2*(a*b));
      System.out.printf("%d\n", ansr);
  }
  public static void main(String[] args){
    doSquare(6,4);
    doSquare(3,4);
    doSquare(5,10);
    doSquare(3,9);
    
    
  }
}
