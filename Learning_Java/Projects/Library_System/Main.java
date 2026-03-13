package Learning_Java.Projects.Library_System;

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Library library = new Library();
        Scanner scanner = new Scanner(System.in);

        int option;
        do{
            System.out.println("Library System");
            System.out.println("1. Add Book");
            System.out.println("2. List Books");
            System.out.println("3. Borrow Book");
            System.out.println("4. Return Book");
            System.out.println("5. Exit");
            option = scanner.nextInt();

            switch(option){
                
            }
        }while(option != 5);

        scanner.close();
    }

}
