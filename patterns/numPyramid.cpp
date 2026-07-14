#include <iostream>

using namespace std;

void numPyramid(){
    int j=1;
    for(int i=0;i<5;i++){
        for(int k=0;k<i+1;k++){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
    }
}

int main(){
    numPyramid();
    return 0;
}