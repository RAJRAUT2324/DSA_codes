#include <iostream>
#include <cstring>

class Book {
private:
    char* title;
public:
    // Constructor
    Book(const char* name) {
        title = new char[strlen(name) + 1];
        strcpy(title, name);
    }

    // Shallow Copy Constructor
    Book(const Book &source) : title(source.title) {
        std::cout << "Shallow Copy Constructor" << std::endl;
    }

    // Deep Copy Constructor
    Book(const Book &source) {
        title = new char[strlen(source.title) + 1];
        strcpy(title, source.title);
        std::cout << "Deep Copy Constructor" << std::endl;
    }

    // Destructor
    ~Book() {
        delete[] title;
    }

    void showTitle() const {
        std::cout << "Title: " << title << std::endl;
    }
};

int main() {
    Book book1("C++ Primer");
    Book book2 = book1; // Calls the copy constructor

    book1.showTitle();
    book2.showTitle();

    return 0;
}
