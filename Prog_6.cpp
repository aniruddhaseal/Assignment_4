//6. Write a C++ program to enter base and height of a triangle and find its area. 

#include<iostream>
using namespace std;
int main(){
  // Declaring variables and taking input
 int h,b;
 cout<<"Enter height and the base of the triangle";
 cin>>h>>b;
  //Calculation
 float a=0.5*h*b;
  //Showing output
 cout<<"The area of the triangle is "<< a <<endl;
 return 0;
}
