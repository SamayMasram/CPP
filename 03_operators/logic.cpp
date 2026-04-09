#include<iostream>
using namespace std;
int main(){
    char status;
    cout<<"Are you Student or not(y/n): "<<endl;
    cin>>status;
    int noOfCups;
    cout<<"How many cups of tea do you purchased: "<<endl;
    cin>>noOfCups;
    if(status == 'y' || noOfCups > 15) {
        cout<<"You are eligible for a Tea Subsciption Discount"<<endl;
    } else {
        cout<<"You are not eligible for a Tea Subsciption Discount"<<endl;
    }
    return 0;
}