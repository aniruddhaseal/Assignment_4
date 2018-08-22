//1. Write a C++ program to enter length in centimeter and convert it into meter and kilometer.
 
#include<iostream>
using namespace std;
int main(){
 // Declaring variables and taking input
 int l;
 cout<<"Enter length in cm";
 cin>>l;
 //Calculation
 float lm=l/100.0;
 float lkm=l/100000.0;
 //Showing output
 cout<<"The length in metres "<< lm <<"m\n"<< "The length in kilometres "<< lkm <<"km"; 
 return 0;
}
