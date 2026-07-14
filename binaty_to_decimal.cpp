#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int i;
    cout<<"Enter the binary number: ";
    cin>>i;
    int k=i,n;
    int c=0;
    int num=0;
    while(k!=0){
        n=k%10;
        k=k/10;
        if(n==1){
        num=num+pow(2,c);
        }
        c++;
    }
    cout<<"The number in decimal form is "<<num;
}