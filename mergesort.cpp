#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int  lli;

void merge(int a[],int l,int m,int u){
    int n1=m-l+1;

    int n2=u-m;
    int a1[n1],a2[n2];     //its l not one
    for(int i=0;i<n1 ;i++){
        a1[i]=a[l+i];
    }
    for(int i=0;i<n2;i++){
        a2[i]=a[(m+1)+i];
    }
    for(int i=0;i<n1;i++)
        cout<<a1[i]<<" ";
    cout<<endl;
    for(int i=0;i<n1;i++)
        cout<<a2[i]<<" ";
    cout<<endl;
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a1[i]<=a2[j]){
            a[k]=a1[i];
            i++;
        }
        else{
            a[k]=a2[j];
            j++;
        }
        k++;
    }
    while(j<n2){
        a[k]=a2[j];
        j++;
        k++;
    }
    while(i<n1){
        a[k]=a1[i];
        i++;
        k++;
    }


}
void mergesort(int a[],int l,int u){
    if(l<u){
        int m=(l+u)/2;
        mergesort(a,l, m);
        mergesort(a,m+1,u);
        merge(a,l,m,u);
    }
}


int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
