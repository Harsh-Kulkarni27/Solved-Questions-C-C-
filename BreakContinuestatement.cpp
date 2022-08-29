#include<iostream>
using namespace std;

int main(){
    
    int pocketmoney=5000;
    for(int date=1;date<=31;date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"Can go out today"<<endl;
        pocketmoney=pocketmoney-500;
    }



    return 0;
}