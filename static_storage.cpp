#include <iostream>
using namespace std;

int func(){
    static int count=0;
    count++;
    return count;
};

int main(){

    cout<<func()<<"\n";
    cout<<func()<<"\n";
    cout<<func()<<"\n";
}