#include <iostream>
// Function declaration with default argument
int increment(int *a, int b=1){
    *a=*a+b;
    std::cout<<"a's ptr's value is incremented by "<<b<<"is:"<<*a<<std::endl;
    return *a;}
int main(){
    int *ptr=new int(5);

    increment(ptr, 10);
    std::cout<<"Update value from main is:"<<*ptr<<std::endl;
    delete ptr;
}
