#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hashTable[n]={0};
    for(int i=0;i<n;i++){
        hashTable[arr[i]]++;
    }
    int l;
    cout<<"Enter the element :";
    cin>>l;
    cout<<"the number of times "<<l<<"has appeared in the array is :"<<hashTable[l]<<endl;
    return 0;
}