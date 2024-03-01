import java.util.*;
//Average of two numbers

public class Main {
    public static void getAvg(int a, int b, int c)
    {
      int ansr;
      ansr=(a+b+c)/3;
      System.out.printf("%d\n", ansr);
  }
  public static void main(String[] args){
    getAvg(6,4,2);
    getAvg(3,4,6);
    getAvg(5,10,8);
    getAvg(3,9,12);
    
    
  }
}
