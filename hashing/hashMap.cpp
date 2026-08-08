#include <iostream>

using namespace std;

void constructMap(int arr[],int hashMap[][2],int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(arr[i]==hashMap[j][1]){
            hashMap[j][2]++;
            break;
        }
        }
            int j=0;
            while(hashMap[j][1]!=0){
                j++;
            }
            hashMap[j][1]=arr[i];
            hashMap[j][2]=1; 
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hashMap[n][2]={0};
    constructMap(arr,hashMap,n);
    int ele;
    cout<<"Enter the number :";
    cin>>ele;
    int num=0;
    while (hashMap[num][1]!=ele)
    {
        num++;
    }
    cout<<"The number of occurrences of "<<ele<<" in the array :"<<hashMap[num][2];
}