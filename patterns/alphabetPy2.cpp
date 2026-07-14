#include <iostream>

using namespace std;

void alphabetPy2(){
    for(int i=1;i<=4;i++){
        int j=0,k=0;
        char c='A';
        while(j<4-i){
            cout<<" ";
            j++;
        }
        while(k<i){
            cout<<c;
            k++;
            c++;
        }
        c--;
        k--;
        while(k>0){
            c--;
            k--;
            cout<<c;
        }
        cout<<endl;
    }
}

int main(){
    alphabetPy2();
    return 0;
}