package Java_Activities;

import java.util.Scanner;

public class SimpleCalculation {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double price[] = new double[2];
        int code[] = new int[2];
        int num[] = new int[2];

        for(int i = 0; i < price.length; i++){
            System.out.println("Enter the part " + i + ":");
            num[i] = scanner.nextInt();
            code[i] = scanner.nextInt();
            price[i] = scanner.nextDouble();
        }
        System.out.println("Part One : " + num[0] * price[0]);
        System.out.println("Part Two : " + num[1] * price[1]);

        scanner.close();
    }
}
