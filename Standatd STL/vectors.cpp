#include <iostream>

#include <vector>

using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);//pushes element 
    v.emplace_back(5);//pushes element

    vector<pair<int,int>> r;
    //difference between push back and emplace back
    r.push_back({3,4});
    r.emplace_back(8,9);

    vector<int> a(5,20);//creates a vector of 5 elements with values as 20

    vector<int>::iterator it = a.begin();//iterator points at the memory address of the beginning element of the vector
    cout<<*(it)<<endl;//printing the value of the beginning element
    it++;//points at the second element of the vector
    cout<<*(it)<<endl;

    cout<<a[2]<<endl;//is standard way of accessing elements 


    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto i:a){//using for-each loop to iterate through the vector
        cout<<i<<" ";
    }
    cout<<endl;
}
