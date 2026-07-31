#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void divisors(int n){
    vector <int> fc;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            fc.push_back(i);
            if(n%i!=i){
                fc.push_back(n/i);
            }
        }
    }
    sort(fc.begin(),fc.end());
    for(auto it:fc){
        cout<<it<<" ";
    }
}

int main(){
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    divisors(num);
    return 0;
}