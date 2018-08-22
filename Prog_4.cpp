//4. Write a C++ program to convert days into years, weeks and days. 

#include<iostream>
using namespace std;
int main(){
 // Declaring variables and taking input
 int d;
 cout<<"Enter a Day";
 cin>>d;
 //Calculation
 int y=d/365;
 int w=(d%365)/7;
 int r=(d%365)%7;
 //Showing output
 cout<<"The day converted to "<< y <<" years "<< w <<" weeks "<< r <<" days "<<endl;
 return 0;
}
