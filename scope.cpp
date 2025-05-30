#include <iostream>

class A{
    public:
    int instance_var;

    A(int val){
        instance_var=val;
    }
    void display(){
        std::cout<<instance_var;
    }
};

class B{
    public:
    static int static_var;
};

namespace N{
    int namespace_var;
};

int B::static_var=5;

int main(){

    A a1(4);
    std::cout<<"This is an instance scope variable ";
    a1.display();
    std::cout<<std::endl;
    
    std::cout<<"This is a static scope variable "<<B::static_var<<"\n";
    N::namespace_var=6;
    std::cout<<"this is a namepsace scope varaible "<<N::namespace_var<<"\n";
}