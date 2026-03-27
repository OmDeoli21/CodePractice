#include<iostream>
using namespace std;
int main(){
    int x = 0 ,last = 0,store=0;
    
    cout<<"Enter number x: ";
    cin>>x;
    int a = x; 
    while( x!=0 ){
        last=x%10;
        store = store*10 + last;
        x=x/10;
    }

    if(store==a){
        cout << "true";
    }else{
        cout << "false";
    }
   
    return 0;
}