#include<iostream>
#include<string>
#include<map>
using namespace std;
void stroutput(unsigned long long num);
int main()
{
    //unsigned long long number;
    string numberstr;
    unsigned long long sum=0;
    cin>>numberstr;
    int i=0;
    while(numberstr[i]!='\0')
    {
        //cout<<numberstr[i];
        sum=sum+(int(numberstr[i])-48);
        //cout<<int(numberstr[i])<<" ";
        i++;
    }
    //cout<<endl<<sum<<endl;
    stroutput(sum);
}

void stroutput(unsigned long long num)
{
    map<char,string>intstring;
    intstring.insert(make_pair('0',"ling"));
    intstring.insert(make_pair('1',"yi"));
    intstring.insert(make_pair('2',"er"));
    intstring.insert(make_pair('3',"san"));
    intstring.insert(make_pair('4',"si"));
    intstring.insert(make_pair('5',"wu"));
    intstring.insert(make_pair('6',"liu"));
    intstring.insert(make_pair('7',"qi"));
    intstring.insert(make_pair('8',"ba"));
    intstring.insert(make_pair('9',"jiu"));
    string strnum=to_string(num);
    int i=0;
    while(strnum[i]!='\0')
    {
        cout<<intstring[strnum[i]];
        if(strnum[i+1]!='\0')
        {
            cout<<' ';
        }
        i++;
    }
}
