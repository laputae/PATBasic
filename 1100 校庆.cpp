#include<set>
#include<iostream>
#include<string>

using namespace std;

int main(){
    set<string>myset;
    int m=0,n=0,schmatenum=0;
    string max1="999999999999999999";
    string max2="999999999999999999";
    cin>>m;
    while(m>0){
        m--;
        string schmate;
        cin>>schmate;
        myset.insert(schmate);
    }
    cin>>n;
    while(n>0){
        n--;
        string otherfri;
        cin>>otherfri;
        if(myset.count(otherfri)>0){
            schmatenum++;
            if(max1.substr(6,8)>otherfri.substr(6,8))max1=otherfri;
        }
        if(max2.substr(6,8)>otherfri.substr(6,8))max2=otherfri;
    }
    if(schmatenum==0){
        cout<<0<<endl<<max2;
    }
    else{
        cout<<schmatenum<<endl<<max1;
    }
    return 0;
}
