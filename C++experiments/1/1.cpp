#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<iostream>
#include<cmath>
using namespace std;
int n;
bool solve(int n){
    int flag=0;
    if(n==2)
    return 1;
    if(n>2)
    {
        for(int i=2;i<n;i++)
        if(n%i==0)
        {
            flag=1;
            break;
        }
        if(flag==0)
        return 1;
        else 
        {
            flag=0;
            return 0;
        }
    }
}
int main(){
    cin>>n;
    for(int i=2;i<n;i++)
    {
        if(solve(i))
        cout<<i<<" ";
    }
    system("pause");
    return 0;
}