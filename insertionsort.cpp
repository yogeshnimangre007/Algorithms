/*
 
INSERTION SORT
    
	sorting technique we use when array is almost sorted and its complexity is about n*2.

	In this section, we examine an alternative design approach, known as "divide-and-conquer." 
*/





#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main () {

    int n;

    cin>>n;      //size of array

    int a[n];

    for(int i=0;i<n;i++){

        cin>>a[i];          //input of array elements
         }

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

    return 0;
}