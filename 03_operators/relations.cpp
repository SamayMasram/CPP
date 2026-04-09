#include<iostream>
using namespace std;
int main(){
    int cupsOfTea;
    cout<<"how many cups of tea do you bought: "<<endl;
    cin>>cupsOfTea;
    if(cupsOfTea > 20){
        cout<<"Congratulation you received GOLD badge"<<endl;
    } else if(10 <= cupsOfTea && cupsOfTea <= 20){
        cout<<"Congratulation you received SILVER badge"<<endl;
    }
    return 0;
}