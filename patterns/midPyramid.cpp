#include <iostream>

using namespace std;

void Pyramid(int n){
    for(int i=n;i>=0;i--){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<(i*2)-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    Pyramid(5);
    return 0;
}