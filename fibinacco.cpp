#include<bits/stdc++.h>
using namespace std;
vector<int> v;
// int fib(int a){
//     if(a<=1)
//     return a;
//     if(v[a]!=-1)
//     return v[a];

//     return v[a]=fib(a-1)+fib(a-2);
// }

int main(){
    int a;
    cin >> a;
    v.resize(a+1,-1);
    // cout<<fib(a)<<endl;
    // v[0]=0,v[1]=1;
    // for(int i=2;i<=a;i++){
    //     v[i]=v[i-1]+v[i-2];

    // }
    // cout<<v[a]<<endl;


    //space optimised version

    int pre=1;
    int pre2=0;

    for(int i=2;i<=a;i++){
        int c=pre+pre2;
        pre2=pre;
        pre=c;
    }
    cout<<pre<<endl;
}