package Learning_Java.Projects.Library_System;

import java.util.ArrayList;

public class Library {
    private ArrayList<Book> books = new ArrayList<>();

    public void addBook(String title, String author) {
        books.add(new Book(title, author));
        System.out.println("Book added: " + title);
    }

    public Book searchBook(String tittle) {
        for(Book book : books) {
            if(book.getTitle().equals(tittle)) {
                return book;
            }
        }
        return null;
    }

    public void removeBookByTittle(String tittle) {
        Book bookToRemove = searchBook(tittle);
        
        if(bookToRemove != null) {
            books.remove(bookToRemove);
            System.out.println("Book removed: " + bookToRemove.getTitle());
        }
        else {
            System.out.println("Book not found: " + tittle);
        }
    }

    public void ListBooks() {
        for(Book book : books){
            System.out.println("Book: " + book.getTitle() + " by " + book.getAuthor());
        }
    }
}
