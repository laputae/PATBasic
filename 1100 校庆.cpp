#include<set>
#include<iostream>
#include<string>

using namespace std;

int main(){
    set<string>myset;
    int m=0,schmatenum=0;
    string max2="999999999999999999";
    string max3="999999999999999999";
    cin>>m;
    while(m>0){
        m--;
        string schmate;
        cin>>schmate;
        myset.insert(schmate);
    }
    int n=0;
    cin>>n;
    while(n>0){
        n--;
        string otherfri;
        cin>>otherfri;
        if(myset.count(otherfri)>0){
            schmatenum++;
            if(max3.substr(6,8)>otherfri.substr(6,8))max3=otherfri;
        }
        if(max2.substr(6,8)>otherfri.substr(6,8))max2=otherfri;
    }
    if(schmatenum==0){
        cout<<0<<endl<<max2;
    }
    else{
        cout<<schmatenum<<endl<<max3;
    }
}
