class Book {
    String title;
    String author;

    Book(String title, String author) {
        this.title = title;
        this.author = author;
    }

    void displayBook() {
        System.out.println("Book Title: " + title);
        System.out.println("Author: " + author);
    }
}

class Student {
    int rollNo;
    String name;
    Book borrowedBook;

    Student(int rollNo, String name) {
        this.rollNo = rollNo;
        this.name = name;
    }

    void borrowBook(Book book) {
        borrowedBook = book;
    }

    void displayBorrowingDetails() {
        System.out.println("-- Borrowing Details --");
        System.out.println("Student Roll No: " + rollNo);
        System.out.println("Student Name: " + name);

        if (borrowedBook != null) {
            System.out.println("Borrowed Book:");
            borrowedBook.displayBook();
        }
        else {
            System.out.println("No book borrowed.");
        }
    }
}

public class Q3 {
    public static void main(String[] args) {
        Book book = new Book("Java Programming", "James Gosling");

        Student student = new Student(101, "Rahul");

        student.borrowBook(book);
        student.displayBorrowingDetails();

        System.out.println("\nJanmejai Pandey - 2501030199 - B4");
    }
}