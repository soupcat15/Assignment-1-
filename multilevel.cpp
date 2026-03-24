#include<iostream>
using namespace std;

class person{
    public :
    string name;
    int age;

    person(string n, int a){
        name= n;
        age= a;
    }
};

class student : public person{
    public :
    int roll;
    string division;
    string specilization;


void showinfo(){
    cout<<"Name" <<name <<endl;
    cout<<" Age " <<age <<endl;
    cout <<"roll no"<<roll <<endl;
    cout<<" division "<<division <<endl;
    cout <<"specilization" <<specilization;
}

student(string n,int a, int r, string d, string s): person(n,a){
    name=n;
    age=a;
    roll=r;
    division=d;
    specilization=s;
}

~student() {
    cout<<"To remove reserved value";
}


};


class undergraduate : public student{
    public :
    string research;

undergraduate(string n,int a, int r, string d, string s,string re): student(n,a,r,d,s){
    name=n;
    age=a;
    roll=r;
    division=d;
    specilization=s;
    research =re;
}

void showinfo(){
    cout<<"Name" <<name <<endl;
    cout<<" Age " <<age <<endl;
    cout <<"roll no"<<roll <<endl;
    cout<<" division "<<division <<endl;
    cout <<"specilization" <<specilization;
cout<<"research" <<research ;
}

~undergraduate() {
    cout<<"To remove reserved value";
}

};

int main(){
    undergraduate s1("pranav",19,25,"Soc","cse","Ai agent ");
    s1.showinfo();
}



