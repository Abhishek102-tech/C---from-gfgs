#include <iostream>

using namespace std;

void wedge(int n){
    for(int i=1;i<=4;i++){
        int j=1,k=0;
        while(j<=i){
            cout<<j;
            j++;
        }
        while(k<n-(2*i)){
            cout<<" ";
            k++;
        }
        j=j-1;
        while(j>=1){
            cout<<j;
            j--;
        }
        cout<<endl;
    }
}

int main(){
    wedge(8);
    return 0;
}