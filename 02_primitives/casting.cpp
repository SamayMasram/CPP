#include<iostream>
using namespace std;
int main(){
    float teaPrice = 49.99;
    int roundedTeaPrice = (int) teaPrice; 
    int teaQuantity = 2;
    double totalCost = teaQuantity * teaPrice;
    cout<<totalCost<<endl;
    return 0;
}