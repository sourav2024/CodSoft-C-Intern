#include<iostream>
using namespace std;
int main(){
    while(1){
    cout<<"Simple Arithmetic Calculator "<<endl;
    double a,b;
    int op;
    cout<<"Please input number 1: "<<endl;
    cin>>a;
    cout<<"Please input number 2: "<<endl;
    cin>>b;

    cout<<"Please choose the operation you want to perform: "<<endl;
    cout<<"Press 1 for addition."<<endl<<"Press 2 for substraction."<<endl
    <<"Press 3 for multiplication."<<endl<<"Press 4 for division."<<endl;
    cin>>op;

    switch (op)
    {
    case 1 :
          cout<<"Result of additon of "<<a<<" and "<<b<<" is: "<<a+b<<endl;
        break;
    case 2 :
     cout<<"Result of substraction of "<<a<<" and "<<b<<" is: "<<a-b<<endl;
     break;
    case 3:
     cout<<"Result of multiplication of "<<a<<" and "<<b<<" is: "<<a*b<<endl;
     break;
    case 4: 
     cout<<"Result of divison of "<<a<<" and "<<b<<" is: "<<a/b<<endl;
     break;  
    default:
      cout<<"Please choose valid operation."<<endl;
        break;
    }
    }
    return 0;
}