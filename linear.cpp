#include<iostream>
using namespace std;

int main(){
int n,k,f=0,c=1;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
 cin>>k;

 for(int i=0;i<n;i++,c++)
    if(a[i]==k)
 {
     f=1;
     break;
 }
 if(f==1)
 {
     cout<<"Key found in "<<c<<" comparison";
 }
 else
    cout<<"Key not found";

 return 0;

}

