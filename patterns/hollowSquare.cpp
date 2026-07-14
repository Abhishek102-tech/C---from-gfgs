#include <iostream>

using namespace std;

void hollowSquare(){
    for(int i=5;i>0;i--){
        int j=0,k=0;
        while(j<i){
            cout<<"*";
            j++;
        }
        while(k<10-(2*i)){
            cout<<" ";
            k++;
        }
        while(j>0){
            cout<<"*";
            j--;
        }
        cout<<endl;
    }
    for(int i=1;i<=5;i++){
        int j=0,k=0;
        while(j<i){
            cout<<"*";
            j++;
        }
        while(k<10-(2*i)){
            cout<<" ";
            k++;
        }
        while(j>0){
            cout<<"*";
            j--;
        }
        cout<<endl;
    }
}

int main(){
    hollowSquare();
    return 0;
}
