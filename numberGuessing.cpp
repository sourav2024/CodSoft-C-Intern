#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int num = 0;
    int a = 1;
    int time = 4;
	string name;
	cout<<"Enter your name: "<<endl;
	getline(cin,name);
	do{
			cout<<name<< " Guess a number between 1 to 100 :)"<<endl;

	cout<<"Turns remaining : "<<time+1<<endl;
		cin>>num;
	int gues = rand() % 100 + 1;
	cout<<"Cpu selected: "<<gues<<endl;
	if(num== gues){
		cout<<name<< " win"<<endl;
		a = 0;
	}
	else if(abs(gues-num)>=50){
		cout<<"too far"<<endl;
	}
	else if(abs(gues-num)>=30){
		cout<<"you are close "<<endl;
	}
	else if(abs(gues-num)>=10){
		cout<<"too close "<<endl;
	}
	}
	while(a == 1 && time--);
		return 0;
}
