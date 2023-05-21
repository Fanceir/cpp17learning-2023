#include<bits/stdc++.h>
using namespace std;
int x,a;
int n;
int fx(int n){
    int x=0;
    while (n!=0)
    {   
        a=n%10;
        x=x*10+a;
        n=n/10;
    }
    return x;
}
int main(){
    cin>>n;
    int da;
    da=fx(n);
    cout<<da<<endl;
    system("pause");
    return 0;
}
