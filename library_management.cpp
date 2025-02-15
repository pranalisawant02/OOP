#include <iostream>
#include <cstring>  // For strcpy, strlen

using namespace std;

class Book {
private:
    char* book_title;           // Dynamic char array for book title
    char* book_author;          // Dynamic char array for author name
    int pg_count;               // Total page count
    bool formatType;            // Format type (true for hardcover, false for paperback)
    float* chapter_pgs;         // Dynamic array for chapter page counts
    int numChapters;            // Number of chapters

public:
    // Default constructor
    Book() : book_title(nullptr), book_author(nullptr), chapter_pgs(nullptr), pg_count(0), numChapters(0), formatType(false) {
        book_title = new char[1];  // Empty string initialization
        book_title[0] = '\0';
        book_author = new char[1]; // Empty string initialization
        book_author[0] = '\0';
    }

    // Parameterized constructor
    Book(const char* book_title, const char* book_author, int pg_count, bool formatType, int numChapters) 
        : pg_count(pg_count), formatType(formatType), numChapters(numChapters) {
        
        // Allocate memory for title and author and copy the strings
        this->book_title = new char[strlen(book_title) + 1];
        strcpy(this->book_title, book_title);

        this->book_author = new char[strlen(book_author) + 1];
        strcpy(this->book_author, book_author);
        
        // Allocate memory for chapter pages and initialize them
        chapter_pgs = new float[numChapters];
        
        float pages_per_chapter = pg_count / static_cast<float>(numChapters); // Uniform page distribution
        int remainingPages = pg_count % numChapters; // Remaining pages to distribute

        for (int i = 0; i < numChapters; ++i) {
            chapter_pgs[i] = pages_per_chapter;
        }

        for (int i = 0; i < remainingPages; ++i) {
            chapter_pgs[i] += 1;  // Distribute remaining pages across the chapters
        }
    }

    // Copy constructor (deep copy)
    Book(const Book& other) 
        : pg_count(other.pg_count), formatType(other.formatType), numChapters(other.numChapters) {

        // Copy title and author
        this->book_title = new char[strlen(other.book_title) + 1];
        strcpy(this->book_title, other.book_title);

        this->book_author = new char[strlen(other.book_author) + 1];
        strcpy(this->book_author, other.book_author);

        // Copy chapter pages
        this->chapter_pgs = new float[other.numChapters];
        for (int i = 0; i < other.numChapters; ++i) {
            this->chapter_pgs[i] = other.chapter_pgs[i];
        }
    }

    // Destructor
    ~Book() {
        delete[] book_title;   // Free memory for title
        delete[] book_author;   // Free memory for author
        delete[] chapter_pgs;   // Free memory for chapter pages
    }

    // Method to modify chapter page counts
    void modifyChapterPages(int chapter, float newPageCount) {
        if (chapter >= 0 && chapter < numChapters) {
            chapter_pgs[chapter] = newPageCount;
        }
    }

    // Method to display all book information
    void display() const {
        cout << "Book Title: " << book_title << "\n";
        cout << "Author: " << book_author << "\n";
        cout << "Page Count: " << pg_count << "\n";
        cout << "Format: " << (formatType ? "Hardcover" : "Paperback") << "\n";
        cout << "Number of Chapters: " << numChapters << "\n";

        for (int i = 0; i < numChapters; ++i) {
            cout << "Chapter " << (i + 1) << " Pages: " << chapter_pgs[i] << "\n";
        }
    }
};

int main() {
    // Test default constructor
    Book book1;
    cout << "Book 1 (Default Constructor):\n";
    book1.display();

    // Test parameterized constructor
    Book book2("The Great Adventure", "John Doe", 300, true, 10);
    cout << "\nBook 2 (Parameterized Constructor):\n";
    book2.display();

    // Test copy constructor (deep copy)
    Book book3 = book2;
    cout << "\nBook 3 (Copy Constructor - Deep Copy):\n";
    book3.display();

    // Modify chapter page counts for book3
    book3.modifyChapterPages(2, 35.5);
    cout << "\nAfter modifying Chapter 3:\n";
    book3.display();

    return 0;
}
