#include <iostream>
#include <string>
using namespace std;
class DOG{
    string name;
    int age;
public:
DOG(string n, int a){
    name = n;
    age = a;
    cout << "Dog's Name: " << name << ", Age: " << age << " years." << endl;
}
~DOG(){
    cout << "Destructor called for dog: " << name << endl;
}
};
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
~Book(){
    cout << "Destructor called for book: " << title << endl;
}
};
int main(){
    Book b1, b2;  // Object creation which invokes parameterized constructor
DOG d1("Buddy", 3);
DOG d2("Max", 5);
    return 0;

}