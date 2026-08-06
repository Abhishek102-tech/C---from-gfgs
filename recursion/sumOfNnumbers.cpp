#include <iostream>

using namespace std;

void sum(int i,int n,int s){
    if(i>n){
        cout<<"Sum is :"<<s<<endl;
        return ;
    }
    sum(++i,n,s+i);
}

int main(){
    cout<<"Enter the number :";
    int n;
    cin>>n;
    sum(1,n,0);
    return 0;
}