#include<iostream>
using namespace std;

int main(){
    int tableno,numitems;
    string customername;
    int customercontact;

    cout<<"Enter the table number : ";
    cin>>tableno;

    cout<<" Enter the customer Name : ";
    cin>>customername;

    cout<<"Enter the customer contact : ";
    cin>>customercontact;

    cout<<" Enter the number of items  : ";
    cin>>numitems;

    string itemname[20];
    int itemqty[20];
    float itemprice[20];
    float total[20];
    float totalamount = 0;


    for(int i = 0; i<numitems;  i++){
        cout<<"Enter the item name : ";
        cin>>itemname[i];

        cout<<" Enter the item quantity : ";
        cin>>itemqty[i];

        cout<<" Enter the price per unit : " ;
        cin>>itemprice[i];

        total[i]= itemqty[i]*itemprice[i];
        totalamount+= total[i];
    }

    //discount calculation

    float discount = 0;
    if(totalamount > 5000) discount = totalamount*0.20;
    else if(totalamount > 3000) discount= totalamount*0.10;
    else if(totalamount > 1000) discount = totalamount *0.05;
    
    float finalamount=totalamount - discount;

//Bill output

cout << "\n ==============Hotelbill=================\n";
cout<< " Table no :           "<<tableno <<endl;
cout<< " Customer name :      "<<customername <<endl;
cout<< " Customer contact :   "<<customercontact <<endl;

for(int i=0; i<numitems; i++){
 cout<<itemname[i]<<"  "<<itemqty[i]<<"  "<< itemprice[i] <<"  "<<total[i] <<endl;
}

cout<<"Total amount :      "<<totalamount <<endl;
cout<<"Discount :          "<<discount <<endl;
cout<<"Final Amount :      "<<finalamount <<endl;


}





