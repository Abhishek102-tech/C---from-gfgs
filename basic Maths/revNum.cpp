#include <iostream>

using namespace std;

int revNum(int n){
    int sub=n;
    int rev=0;
    int r;
    while(sub!=0){
        r=sub%10;
        rev=rev*10+r;
        sub=sub/10;
    }
    return rev;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int revnum = revNum(num);
    cout<<"Reversed number is "<<revnum<<endl;
    return 0;
}