package Learning_Java.Lessons.March;

//Given a random non-negative number, you have to return the digits of this number within an array in reverse order.

public class Kata {
  public static int[] digitize(long n) {
    String num = Long.toString(n);
    int[] vetor = new int[num.length()];
    for(int i = 0; i < num.length(); i++){
      vetor[i] = num.charAt(num.length() - 1 - i) - '0';
    }
      return vetor;
  }
}