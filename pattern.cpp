#include <iostream>
using namespace std;
int main(){     
int (n);
cout<<"Enter your number: ";
cin>>n;
// TOP 
for (int i =0 ;n>i;i++){
    for(int j =1;n-i>j;j++){
        cout<<" ";}

cout<<"*";

if(i!=0){
for(int j=0;2*i-1>j;j++){
    cout<<" ";}
cout<<"*";}
cout<<endl;
}


//  BOTTOM 
for(int i =0;n-1>i;i++){
    for(int j=0;i+1>j;j++){
        cout<<" ";}
cout<<"*";

    if (i!=n-2){
    for(int j =0;2*(n-i-2)-1>j;j++){
        cout<<" ";}
    cout<<"*";
    }
cout<<endl;

}

return 0; 
}
