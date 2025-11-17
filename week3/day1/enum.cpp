#include <iostream>
enum Color{
    RED,
    GREEN
};

int main(){
enum Color mycolor;
if (mycolor){
    std::cout<<"GO as mycolor is "<<mycolor<<"\n";
}
else{
    std::cout<<"STOP as mycolor is"<<mycolor<<"\n";
}   
return 0;
}