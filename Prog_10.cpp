#include<iostream>
#include<cmath>
using namespace std;
int main(){
 double p,r,t;
 cout<<"Enter the Principal , Rate of Interest , Time in years ";
 cin>>p>>r>>t;
 double a=p*pow((1+(r/100)),t);
 cout<<"The compound interest is "<< (a-p) <<endl;
 return 0;
}
