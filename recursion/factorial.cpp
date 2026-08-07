#include <iostream>

using namespace std;

int fact(int n){
    if(n==1){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
int sol=fact(5);
cout<<"The solution is: "<<sol;
return 0;
}