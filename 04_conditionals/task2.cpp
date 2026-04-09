#include<iostream>
using namespace std;
int main(){
    int time;
    cout<<"Enter Visit Time: "<<endl;
    cin>>time;
    if(8 < time && time < 18){
        cout<<"Tea Shop is Open"<<endl;
    }else{
        cout<<"Tea Shop is Closed"<<endl;
    }
    return 0;
}

// IF-ELSE condition