#include <iostream>

using namespace std;

void revPy(){
    for(int i=1;i<=5;i++){
        char c='E';
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c--;
        }
        cout<<endl;
    }
}

int main(){
    revPy();
    return 0;
}