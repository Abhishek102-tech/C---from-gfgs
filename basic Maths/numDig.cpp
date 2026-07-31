#include <iostream>

using namespace std;

int digCount(int n){
    int r=n;
    int count=0;
    while(r!=0){
        r=r/10;
        count++;
    }
    return count;
}

int main(){
    int num;
    cout<<"Enter the number :";
    cin>>num;
    int c=digCount(num);
    cout<<"Number of digits is "<<c<<endl;
    return 0;

}