#include <iostream>
using namespace std;

int main(){
    char ch[40];
    cin.getline(ch,40);
    for (int i=0;ch[i]!='\0';i++){
        if(ch[i]==' '){
            cout<<"\n";
            continue;
        }
        cout<<ch[i];
        
    }
}