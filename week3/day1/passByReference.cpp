#include <iostream>
#include <string>
using namespace std;
void update(int &x) { 
    x = 20; }
    void increment(int *a, int b=1){
    *a=*a+b;
    cout<<"a's ptr's value is incremented by "<<b<<"is:"<<*a<<std::endl;
    }
int main() {
  string food = "Pizza";       // food variable
  string &meal = food;         // reference to food
  int a=10;
  int* const r = &a;  // constant pointer
  increment(r,5);
  cout<<"a "<<a<<" r "<<*r<<"\n";
  int &b=a;
    update(b);
    cout<<"a"<<a<<"\n";
    cout<<"b"<<b<<"\n";
  cout<<"*r"<<*r<<"\n";
  cout<<"r"<<r<<"\n";
 cout << "food"<<food << "\n";       
 cout << "&food"<<&food << "\n";       
  cout << "meal"<<meal << "\n";      
  cout << "&meal"<< &meal << "\n";     
  
  meal = "Burger";             // change the reference

  cout << "food"<<food << "\n";        // Outputs Burger
  cout << "meal"<<meal << "\n";        // Outputs Burger
  return 0;
}
