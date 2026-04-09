#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"MENU"<<endl;
    cout<<"1 - Green Tea"<<endl;
    cout<<"2 - Black Tea"<<endl;
    cout<<"3 - Oolong Tea"<<endl;
    cout<<"Which tea you want to buy: "<<endl;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"The price of Green Tea is 2$"<<endl;
            break;
        case 2:
            cout<<"The price of Black Tea is 3$"<<endl;
            break;
        case 3:
            cout<<"The price of Oolong Tea is 4$"<<endl;
            break;
        default:
            cout<<"Wrong Choice"<<endl;
    }
    return 0;
}

// SWITCH CASE 