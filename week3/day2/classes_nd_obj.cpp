
#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    int pages;
    int price;
    int rating;
    string title;
    string author;
    
    void add_book() {
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter author: ";
        getline(cin, author);
        cout << "Enter number of pages: ";
        cin >> pages;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter rating: ";
        cin >> rating;
    }
    
    void show_details_of_book() {
        cout << "\nBook details:\n";
        cout << "Name: " << title << "\nAuthor: " << author 
             << "\nPrice: " << price << "\nPages: " << pages 
             << "\nRating: " << rating << endl;
    }
};

int main() {
    int i;
    cout << "Welcome to MANO Library\n";
    cout << "How many books you want to add to our library?\n";
    cin >> i;
    
    // Array of Book OBJECTS on heap
    Book* books = new Book[i];  
    
    for (int j = 0; j < i; j++) {
        cout << "Enter details of book " << j + 1 << ":" << endl;
        books[j].add_book();  // Direct object access
    }
    
    for (int j = 0; j < i; j++) {
        books[j].show_details_of_book();
    }
    
    delete[] books;  // Free heap memory
    return 0;
}