#include <iostream>
using namespace std;
int main(){
    int (n);
cout<<"Enter your number: ";
cin>>n;
for(int i =0;n>i;i++){
    for(int k =0;k<n-i;k++){
        cout<<" ";}
    for(int j =1;j<i+2;j++){
        cout<<j;}
    for(int l=i;l>0;l--){
        cout<<l;}
cout<<"\n";}
return 0;
}