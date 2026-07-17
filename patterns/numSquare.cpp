#include <iostream>

using namespace std;

void numSquare(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i==1||i==n)||(j==1||j==n)){
                cout<<((n+1)/2);
            }
            else if((i==2||i==n-1)||(j==2||j==n-1)){
                cout<<((n+1)/2)-1;
            }
            else if((i==3||i==n-2)||(j==3||j==n-2)){
                cout<<((n+1)/2)-2;
            }
            else{
                cout<<((n+1)/2)-3;
            }
        }
        cout<<endl;
    }
}

int main(){
    numSquare(9);
    return 0;
}