#include<iostream>
using namespace std;
int main(){
    int cups;
    double totalPrice, discountedPrice, pricePerCup;
    cout<<"Enter the number of cups: ";
    cin>>cups;
    cout<<"Enter Proce per cup: ";
    cin>>pricePerCup;
    totalPrice = cups * pricePerCup;
    if(totalPrice >= 100){
        cout<<"You got a discount of 5%"<<endl;
        discountedPrice = totalPrice - (totalPrice * 0.05);
    } else{
        discountedPrice = totalPrice;
    }
    cout<<"Total Price: "<<totalPrice<<endl;
    cout<<"Discounted Price: "<<discountedPrice<<endl;
    return 0;
}