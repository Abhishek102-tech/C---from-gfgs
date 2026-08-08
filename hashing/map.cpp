#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        cout<<"Number :"<<it.first<<" Frequency :"<<it.second<<endl;
    }
    return 0;
}