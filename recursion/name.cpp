#include <iostream>

using namespace std;

int count =0;
void name(string n){
    if(count==5){
        return;
    }
    cout<<n<<endl;
    count++;
    name(n);
}

int main(){
    string n;
    cout<<"Enter the name"<<endl;
    cin>>n;
    name(n);
    return 0;
}