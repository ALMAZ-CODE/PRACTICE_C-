// DECIMAL TO BINARY 
#include <iostream>
using namespace std;
DecBin(int n){
    int num = 0;
    int pow = 1;
    for(int i=0;n>0;i++){
    int rem = n % 2 ;
    n /= 2;
    num =num +(rem*pow) ;
    pow*= 10;
}return num;}

BinDec(int n){
    int num = 0, pow = 1;
    for(int i = 0;n>0;i++){
        int rem = n%10;
        n /= 10;
        num = num +(rem*pow);
        pow*= 2;
    }
return num;
}



int main(){
int (n);
cout<<"Enter you number: ";
cin>> n;
cout<<"Binary to Decimal : "<<BinDec(n)<<endl;
    return 0;
}
