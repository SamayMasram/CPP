#include<iostream>
using namespace std;
int main(){
    int noOfCups;
    cout<<"How many cups of tea do you purchased: "<<endl;    
    cin>>noOfCups;
    if(noOfCups > 20){
        cout<<"You get 20% discount"<<endl;
    }else if(10 < noOfCups && noOfCups <= 20){
        cout<<"You get 10% discount"<<endl;
    }else{
        cout<<"No discount available"<<endl;
    }
    return 0;
}

// IF-ELSE-IF condition