#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n=0;
    string str;
    cin>>n;
    while(n--)
    {
        int len_a=0,len_b=0,len_c=0,num_p=0,num_t=0,sizestr=0,i=0,flag=0;
        cin>>str;
        sizestr=str.length();
        if(sizestr<3){ cout<<"NO"<<endl; continue; }
        else
        {
            while(sizestr--)
            {
                if(str[i]=='A')
                {
                    if(num_p==0&&num_t==0){ len_a++; }
                    else if(num_p!=0&&num_t==0){ len_b++; }
                    else if(num_p!=0&&num_t!=0){ len_c++; }
                }
                else if(str[i]=='P')
                {
                    num_p++;
                    if(num_p>1){ cout<<"NO"<<endl; flag=1;break; }
                }
                else if(str[i]=='T')
                {
                    num_t++;
                    if(num_t>1) { cout<<"NO"<<endl; flag=1;break; }
                }
                else
                {
                    cout<<"NO"<<endl;flag=1;
                    break;
                }
                i++;
            }
            if(len_b!=0 && len_a*len_b==len_c) { cout<<"YES"<<endl; }
            else if(flag==1) ;
            else{  cout<<"NO"<<endl;  }
        }
    }
}
