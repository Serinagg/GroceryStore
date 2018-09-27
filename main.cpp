#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input; 

  cout<<"\n==GROCERY LIST MANAGER==";
do {
        cout<<"\nEnter your choice: ";
        cout<<"\n (A)dd an item";
        cout<<"\n (Q)uit";
        cout<<"\nYour choice (A/Q): ";
        cin>>input;

          cout<<list[0]<<"\n"<<list[1]<<"\n"<<list[2]<<"\n"<<list[3]<<"\n"<<list[4];        
} while( input != 'q' && input != 'Q');
 

  return 0;
}
