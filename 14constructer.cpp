#include<iostream>
using  namespace std;

class student {
    public : 
    string name;
    int rollno;
    double percentage;

    student()
    {

    }
    //

    student(string N, int R, double P){
        name = N;
        rollno = R;
        percentage = P;
    }
};


int main(){
    student s1("pranav",25,99.99);
    student s2("pratik",65,100);
    student s3;
    s3.name= "yash";
    s3.rollno= 13;
    s3.percentage=87;
   

    student s4;
    s4=s3;;
    s4.name="prasad";

    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.percentage<<" "<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.percentage<<" "<<endl;
    cout<<s3.name<<" "<<s3.rollno<<" "<<s3.percentage<<" "<<endl;    
    cout<<s4.name<<" "<<s4.rollno<<" "<<s4.percentage<<" "<<endl;    

}
