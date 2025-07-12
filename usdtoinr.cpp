#include<iostream>

using namespace std;

int main() {
    const double us_to_eur{85.775};
    cout<<"Welcome to the USD TO INR converter"<<endl;
    cout<<"Enter the values in USD:";

    double rupees{0.0};
    double dollars{0.0};



    cin>>dollars;
    rupees = dollars * us_to_eur;

    cout<< dollars <<" dollars is equivalent to "<< rupees << " Indian Rupees "<<endl;


    cout<<endl;


return 0;
}
