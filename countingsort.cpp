#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
#define MAX_S 1000

int main(){
    lli n;
    cin>>n;
    lli a[n+1],b[n+1],c[MAX_S];
    memset(c, 0, sizeof(c));
   
    for(int i=1;i<=n;i++){
        cin>>a[i];
        c[a[i]]++;
    }
    for(int i=1;i<MAX_S;i++){
        c[i]=c[i]+c[i-1];
    }
    for(int i=n;i>=1;i--){
        b[c[a[i]]]=a[i];
        c[a[i]]--;
    }
    for(int i=1;i<=n;i++){
        cout<<b[i] << " ";
    };
    cout << endl;
return 0;  
}