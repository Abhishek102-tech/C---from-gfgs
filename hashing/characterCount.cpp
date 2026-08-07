#include <iostream>

using namespace std;

int h[26];

void hashCons(string s){
    for(int i=0;i<s.size();i++){
        h[(int)s[i]-(int)'a']++;
    }
}

int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    char d;
    cout<<"Enter the character :";
    cin>>d;
    int s=(int)d-(int)'a';
    hashCons(str);
    cout<<"The number of times "<<d<<" has appeared in the string is "<<h[s];
    return 0;
}