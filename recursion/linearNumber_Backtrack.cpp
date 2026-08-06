#include <iostream>

using namespace std;

void linearprint(int i,int n){
    if(i<1){
        return; 
    }
    linearprint(i--,n);
    cout<<i;
}

int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    linearprint(num,num);
    return 0;
}