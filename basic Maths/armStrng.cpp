#include <iostream>
#include <math.h>

using namespace std;

void armStrong(int n){
    int sum = 0;
    int sub = n;
    int d = 0,dig=0;
    int k = n;

    while(k!=0){
        k=k/10;
        dig++;
    }
    
    while(sub!=0){
        d = sub%10;
        sum = sum + pow(d,dig);
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