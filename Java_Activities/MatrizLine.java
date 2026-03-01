package Java_Activities;

import java.util.Scanner;

public class MatrizLine {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[][] matriz = new int[12][12];

        for (int i = 0; i < 12; i++) {
            for (int j = 0; j < 12; j++) {
                matriz[i][j] = i + j;
            }
        }

        System.out.print("Enter the line number (0-11): ");
        int line = sc.nextInt();

        System.out.println("Enter the char ('S' or 'M'): ");
        char operation = sc.next().charAt(0);

        int sum = 0;
        for(int i = 0; i < 12; i++) {
            sum += matriz[line][i];
        }
        if (operation == 'M') sum /= 12;

        sc.close();
        System.out.println(sum);
    }
}
