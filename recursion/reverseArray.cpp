#include <iostream>
#include <vector>

using namespace std;

vector<int> a;

void reverseArray(int l,int r){
    if(l>=r) return;
    swap(a[l],a[r]);
    reverseArray(l+1,r-1);
}

void revArray(int i,int n){
    if(i>=n/2) return;
    swap(a[i],a[n-i-1]);
    revArray(++i,n);
}

int main(){
    string e;
    int k;
    cout<<"Enter array elements and type exit if you are done :"<<endl;
    while(cin>>e && e!="exit"){
        k = stoi(e);
        a.push_back(k);
    }
    int n=a.size();
    revArray(0,n);
    cout<<"Reversed array elements are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}