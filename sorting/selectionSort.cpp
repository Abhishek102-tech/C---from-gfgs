#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &arr){
    int n= arr.size();

    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])
                min = j;
        }
        if(min!=i)
        swap(arr[i],arr[min]);
    }
}

int main(){

    vector<int> arr = {3,2,6,5,8,4,9};
    selectionSort(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<",";
    }
}