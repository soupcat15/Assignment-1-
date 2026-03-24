#include<iostream>
using namespace std;

class studentfee{
    public :
    string name;
    int libraryfee;
    int messfee;


//Default constructor
    studentfee(){
    name="";
    libraryfee=0;
    messfee=0;
    }

    //parametrised constructor
    studentfee(string N, int F, int M){
        name =N;
        libraryfee= F;
        messfee= M;
    }

    int calculatetotalfee(){
        return libraryfee+messfee;
    }
};

int main(){
    studentfee s1("pranav", 20000, 500000);
    studentfee s2("pratik", 20000, 500000);
    studentfee s3;
    s3.name="yash";
    s3.libraryfee=13;
    s3.messfee;
    
cout<< s1.name << " Totalfee " <<s1.calculatetotalfee() <<endl;
cout<< s2.name << " Totalfee " <<s2.calculatetotalfee() <<endl;
cout<< s3.name << " Totalfee " <<s3.calculatetotalfee() <<endl;

}