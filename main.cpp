#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
  int numItems = 0;
  char input; 
  string item;

  cout<<"\n==GROCERY LIST MANAGER==";
do {
        cout<<"\nEnter your choice: ";
        cout<<"\n (A)dd an item";
        cout<<"\n (Q)uit";
        cout<<"\nYour choice (A/Q): What is the item?";
        cin>>input;
        cout<<list[0]<<endl<<list[1]<<endl<<list[2]<<endl<<list[3]<<endl<<list[4]<<endl;

        if (input =='a' || input == 'A'){
                cout<<"What is the item?\n";
                cin>>item; 
                if (numItems <= 4){
                list[numItems] = item ;
                numItems ++;
                } else if (numItems>=5) {
                cout<< "You'll need a bigger list!";
        }
    }
} while(input != 'q' && input != 'Q');
 

  return 0;
}
