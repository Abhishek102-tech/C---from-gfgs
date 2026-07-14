#include <iostream>

using namespace std;

void alphabetPy(){
    for(int i=0;i<5;i++){
        char c='A';
        for(int j=0;j<=i;j++){
            cout<<c;
            c++;
        }
        cout<<endl;
    }
}

int main(){
    alphabetPy();
    return 0;
}