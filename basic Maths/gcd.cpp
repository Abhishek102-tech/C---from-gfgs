#include <iostream>

using namespace std;

int least(int n,int m){
    if(m>n){
        return n;
    }
    else{
        return m;
    }
}

void gcd(int n,int m){
    int gcd=0;
    int sm = least(n,m);
    for(int i=1;i<=sm;i++){
        if(m%i==0 && n%i==0){
            gcd = i;
        }
    }
    cout<<"The greatest common diver between "<<m<<" and "<<n<<" is "<<gcd<<endl;
}

int main(){
    int n,m;
    cout<<"Enter both the numbers"<<endl;
    cin>>n>>m;
    gcd(n,m);
    return 0;
}