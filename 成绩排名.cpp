#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
    Student(string name,string stunumber,int score):name(name),
    stunumber(stunumber),score(score){}
    void getdata()
    {
        cin>>name>>stunumber>>score;
    }
    int retScore()
    {
        return score;
    }
    void show()
    {
        cout<<name<<" "<<stunumber<<endl;
    }
    private:
    string name;
    string stunumber;
    int score;
};
int main()
{
    int n=0;
    cin>>n;
    Student max("","",0);
    Student min("","",0);
    Student temp("","",0);
    temp.getdata();
    max=temp;
    min=temp;
    n--;
    while(n--)
    {
        temp.getdata();
        if(temp.retScore()>max.retScore())max=temp;
        if(temp.retScore()<min.retScore())min=temp;
    }
    max.show();
    min.show();
}
