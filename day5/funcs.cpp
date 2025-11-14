#include <iostream>
// Function declaration with default argument
int increment(int *a, int b=1){
    *a=*a+b;
    // std::cout<<"a's ptr's value is incremented by "<<b<<"is:"<<*a<<std::endl;
    return *a;}

//here passing by value not by ptr and just returning the value after addition operation we are returing back to the caller, but why this value is not deleted as function window is destroyed after function call, which is in stack memory?
//
int add(int x, int y=5){
    return x+y;
}
//my same q``uestion is here also, why the returned value is not deleted after function call as function window is destroyed after function call?
// but the difference is here we are returning z which is a local variable of func, so why it is not deleted after function call?
int subtract(int x, int y=5){
    int z=x-y;
    return z;
}

//but here in this function we are passing result by value, so the value of result in main will not be changed, only the local copy of result will be changed.
//so to reflect the changes in main we have to pass result by ptr or by reference.
int multiply(int x, int y, int result){
    result=x*y;
    std::cout<<"Multiplication is :"<<result<<"\n";
    return result;
}
int main(){
    int *ptr=new int(5);

    increment(ptr, 10);
    std::cout<<"Update value from main is:"<<*ptr<<std::endl;
    std::cout<<"Again incrementing of 20 :"<<"\n"<<increment(ptr,20)<<std::endl;
    int a=10, b=2;
    int c=0;
    std::cout<<"From main; multiply result;"<<multiply(a,b,c);
    std::cout<<"\nFrom main, add"<<add(a,b)<<"\n";
    std::cout<<subtract(a,b)<<"\n";

    std::cout<<add(10,3);
    delete ptr;
}
