//7. Write a C++ program to calculate area of an equilateral triangle.

#include<iostream>
#include<cmath>
using namespace std;
int main(){
 // Declaring variables and taking input
 int a;
 cout<<"Enter the side of a equilateral triangle";
 cin>>a;
 //Calculation
 double area=sqrt(3)*4*a*a;
  //Showing output
 cout<<"The area of the triangle is "<< area <<endl;
 return 0;
}
