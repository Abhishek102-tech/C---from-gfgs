#include <iostream>

using namespace std;

int count =1;

void linearPrint(int n){
    if(count>n){
        return;
    }
    cout<<count<<endl;
    count++;
    linearPrint(n);
}

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    linearPrint(n);
    return 0;
}