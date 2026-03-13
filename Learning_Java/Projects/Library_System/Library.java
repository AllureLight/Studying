package Learning_Java.Projects.Library_System;

import java.util.ArrayList;

public class Library {
    ArrayList<Book> books = new ArrayList<>();

    void addBook(String bookName) {
        books.add(new Book());
        System.out.println("Book added: " + bookName);
    }

    void removeBook(Book book) {
        books.remove(book);
        System.out.println("Book removed: " + book.getTitle());
    }

    String[] searchBook(String keyword) {
        String[] books = {"Java Programming", "Data Structures", "Algorithms"};
        return books;
    }


}
