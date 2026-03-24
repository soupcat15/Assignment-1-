#include<iostream>
using namespace std;

class student {
    public :
    string name;
    int rollno;
    double percentage;


    student(){

    }

student(string N, int R, float P) {
    name= N;
    rollno = R;
    percentage = P;


}

};

int main(){
    student s1("pranav",25,99.99);
    student s2("pratik",32,99.99);
    student s3("prasad",32,99.99);

   student s4;
   s4.name= "yash";
   s4.rollno=13;


   cout<<"student 1 name  is "<<s1.name<<"roll number is"<<s1.rollno<<"percentage"<<s1.percentage<<endl;
   cout<<"student 2 name  is "<<s2.name<<"roll number is"<<s2.rollno<<"percentage"<<s2.percentage<<endl;
   cout<<"student 3 name  is "<<s3.name<<"roll number is"<<s3.rollno<<"percentage"<<s3.percentage<<endl;
   cout<<"student 4 name  is "<<s4.name<<"roll number is"<<s4.rollno<<"percentage"<<s4.percentage<<endl;
}