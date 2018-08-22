//5. Write a C++ program to enter two angles of a triangle and find the third angle. 

#include<iostream>
using namespace std;
int main(){
 // Declaring variables and taking input
 int A,B,C;
 cout<<"Enter two angles of a Triangle";
 cin>>A>>B;
 //Calculation
 C=180-(A+B);
 //Showing output
 cout<<"The third angle is "<< C<<endl;
 return 0;
}

