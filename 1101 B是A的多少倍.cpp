#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(void)
{
    unsigned long int a,b,c,d,t,w=0;
    cin>>a>>d;
    t=a;
    b=a%(unsigned long int)pow(10,d);
    c=a/(unsigned long int)pow(10,d);
    while(a)
    {
        w++;
        a/=10;
    }
    b=b*pow(10,w-d)+c;
    printf("%.2lf",b*1.0/t);
    return 0;
}
