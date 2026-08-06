#include <iostream>

using namespace std;

void linearprint(int i,int n){
    if(i<1){
        return; 
    }
    linearprint(i-1,n);
    cout<<i<<endl;
}

int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    linearprint(num,num);
    return 0;
}