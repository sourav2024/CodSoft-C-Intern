#include<iostream>
#include<climits>
using namespace std;
int main(){
      string name;
      int arr[5];
      double sum = 0;
      int lowest = INT_MAX;
      int highest = INT_MIN;
      cout<<"Welcome to Student Grading System "<<endl;
      cout<<"Please input student name : "<<endl;
      getline(cin,name);

      cout<<"Enter marks in english : "<<endl;
      cin>>arr[0];

      cout<<"Enter marks in Mathematics : "<<endl;
      cin>>arr[1];

      cout<<"Enter marks in Science : "<<endl;
      cin>>arr[2];

      cout<<"Enter marks in Social Science : "<<endl;
      cin>>arr[3];

      cout<<"Enter marks in General Knowledge: "<<endl;
      cin>>arr[4];

      for(int i = 0; i<5;i++){
            sum +=arr[i];
      }
      double average = sum/5;

      for(int i = 0; i<5;i++){
        if(arr[i]>highest){
            highest = arr[i];
        }
      }
      for(int i = 0; i<5;i++){
        if(arr[i]<lowest){
            lowest = arr[i];
        }
      }
    cout<<"The average marks of "<<name<<" is : "<<average<<endl;
    cout<<"The lowest grade of "<<name<<" is : "<<lowest<<endl;
    cout<<"The highest grade of "<<name<<" is : "<<highest<<endl;
    return 0;
}