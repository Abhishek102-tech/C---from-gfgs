#include <iostream>

using namespace std;

int checkPalindrome(string a,int i,int n){
    if(i>=n/2){
        return 1; 
    }
    else if(a[i]==a[n-i-1]){
        return checkPalindrome(a,i+1,n);
    }
    else{
        return 0;
    }
}

bool palindrome(string a){
    int n=a.size();
    int k=checkPalindrome(a,0,n);
    if(k==1){
        return true;
    }
    else return false;
}

int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    if(palindrome(str)) cout<<"String is palindrome";
    else cout<<"String is not palindrome";
    return 0;
}