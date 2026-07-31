#include <iostream>

using namespace std;

int main(){
    pair<int,int> p={4,5};
    cout<<p.first<<endl;
    pair<int,pair<int,int>> s ={3,{1,7}};
    cout<<s.second.first;
    return 0;
}