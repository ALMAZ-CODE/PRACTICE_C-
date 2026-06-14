// SUM OF DIGITS 0F A NUMBER.
// NCR BINOMIAL COEFFICIENT FOR N & R
#include <iostream>
using namespace std;
// SUM 
 int DigitSum(int n){ 
    int digitsum=0;
while( n >=1){
   int lastDig =n%10;
   n =n/10;
    digitsum =digitsum + lastDig ;}
return digitsum;
}
    

// BINOMIAL
int fac(int n){
    int fac=1;
    for(int i=1;n>=i;i++){
        fac *=i;}
     return fac;}

int nCr(int n, int r){
    int fac_n= fac(n);
    int fac_r =fac(r);
    int fac_nMr=fac(n-r);
    return fac_n/(fac_r * fac_nMr);
}

int main(){
int(n);
int(r);
int(i);
cout<<"Enter the number : ";
cin>>i;
cout<<"Enter number for ncr :";
cin>>n;
cout<<"Enter number for ncr :";
cin>>r;

cout<<"Digit's sum: "<< DigitSum(i)<<endl;
cout<<"Digit's ncr: "<< nCr(n,r)<<endl;
    return 0;
}