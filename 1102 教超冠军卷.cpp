#include<iostream>
#include<string>

using namespace std;

int main(){
    int num=0;
    string id="";
    long int price=0,peonum=0;
    cin>>num;
    int num1=0;
    long int anum=-1,amaxsold=-1;//if anum and amaxsold are 0, it's wrong, I dont't konw
    string s1="",s2="";
    while(num1<num){
        
        num1++;
        cin>>id>>price>>peonum;
        if(anum<peonum){
            anum=peonum;
            s1=id;
        }
        
        if(amaxsold<price*peonum){
            amaxsold=price*peonum;
            s2=id;
        }
    }
    cout<<s1<<" "<<anum<<endl;
    cout<<s2<<" "<<amaxsold<<endl;
}
