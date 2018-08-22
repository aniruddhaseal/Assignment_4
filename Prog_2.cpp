//2. Write a C++ program to enter temperature in Celsius and convert it into Fahrenheit. 

#include<iostream>
using namespace std;
int main(){
 // Declaring variables and taking input
 float tc;
 cout<<"Enter temperature in celsius";
 cin>> tc;
 //Calculation
 float tf=((9/5)*tc)+32;
 //Showing output
 cout<<"The given temperatue in fahrenheit"<<tf<<endl;
 return 0;
}
