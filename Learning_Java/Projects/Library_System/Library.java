package Learning_Java.Projects.Library_System;

public class Library {
    void addBook(String bookName) {
        System.out.println("Book added: " + bookName);
    }

    void removeBook(String bookName) {
        System.out.println("Book removed: " + bookName);
    }

    String[] searchBook(String keyword) {
        String[] books = {"Java Programming", "Data Structures", "Algorithms"};
        return books;
    }

    
}
