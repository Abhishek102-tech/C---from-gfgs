#include <iostream>

using namespace std;

void armStrong(int n){
    int sum = 0;
    int sub = n;
    int d = 0;
    while(sub!=0){
        d = sub%10;
        sum = sum + (d*d*d);
        sub = sub/10;
    }
    if(sum==n){
        cout<<"Number is armstrong"<<endl;
    }
    else{
        cout<<"Number is not armstrong"<<endl;
    }
}

int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    armStrong(num);
    return 0;
}