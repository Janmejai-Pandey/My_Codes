#include <stdio.h>
#include <string.h>

typedef struct
{
    char title[100];
    char author[100];
    int bookID;
} Book;

void addBook(Book *library, int *count)
{
    printf("Enter book title: ");
    scanf(" %[^\n]s", library[*count].title);
    printf("Enter author name: ");
    scanf(" %[^\n]s", library[*count].author);
    printf("Enter book ID: ");
    scanf("%d", &library[*count].bookID);
    (*count)++;
}

void displayBooks(Book *library, int count)
{
    printf("\nBook Details:\n");
    for (int i = 0; i < count; i++)
    {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Book ID: %d\n\n", library[i].bookID);
    }
}

void listBooksByAuthor(Book *library, int count, const char *author)
{
    printf("\nBooks by %s:\n", author);
    for (int i = 0; i < count; i++)
    {
        if (strcmp(library[i].author, author) == 0)
        {
            printf("Title: %s, Book ID: %d\n", library[i].title, library[i].bookID);
        }
    }
}

int main()
{
    Book library[100];
    int count = 0;
    int choice;

    do
    {
        printf("\nLibrary Menu:\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addBook(library, &count);
                break;
            case 2:
                displayBooks(library, count);
                break;
            case 3:
            {
                char author[100];
                printf("Enter author name: ");
                scanf(" %[^\n]s", author);
                listBooksByAuthor(library, count, author);
                break;
            }
            case 4:
                printf("Total number of books in the library: %d\n", count);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}