#include <iostream>
#include <string>
using namespace std;
class Book{
    int price; int pages; int rating; string title; string author;
public:
Book(){
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
    cout << "\nBook details:\n";
        cout << "Name: " << title << "\nAuthor: " << author 
             << "\nPrice: " << price << "\nPages: " << pages 
             << "\nRating: " << rating << endl;
    
    }  // Parameterized constructor

};
int main(){
    Book b1, b2;  // Object creation which invokes parameterized constructor


}