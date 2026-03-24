#include<iostream>
using namespace std;

class person{
    public : 
    string name;
    int age;

    person(string N, int a){
        name= N;
        age= a;
    }

~person(){
    cout<<" To Remove the reserve values";

}

};

class student : public person{
    public : 
    int roll;
    string division;
    string specilization;

    student(string N,int a, int r,string d, string s): person(N,a)
    {
    name=N;
    age=a;
    roll=r;
    division=d;
    specilization=s;
}

void showinfo(){
   
    cout<<"Name" <<name <<endl;
    cout<<"Age" <<age <<endl;
    cout<<"Roll number " <<roll <<endl;
    cout<<"Division "<<division <<endl;
    cout<<"Specilization" <<specilization <<endl;
}


};
int main(){
    student s1("pranav",19,25,"soc","cse");
    s1.showinfo();
    
}
