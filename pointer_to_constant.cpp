#include <iostream>
using namespace std;

int main(){
    double k=8.85;
    const double* const ptr=&k;
    k=k+3;
    cout<<*ptr<<endl;
}