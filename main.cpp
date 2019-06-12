#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int lli;
#define MAX_S 1000
int max(lli  a, lli b) { return (a > b)? a : b;}

void insertion_sort(lli a[],lli n){
  
    for(int i=1;i<n;i++){    //insertion sort

        int key=a[i];

        int j=i-1;

        while(j>=0 && a[j]>key){

            a[j+1]=a[j];

            j--;

        }

        a[j+1]=key;

    }
    for(int i=0;i<n;i++){

        cout<<a[i]<<" ";          //sorted array element
    }

}
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
void countingsort(lli a[],lli n){
        lli b[n+1],c[MAX_S];
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
}
int main(){
    
}