// author: serina
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
        vector<string> list;
        char input; 
        string item;

        cout<<"\n==GROCERY LIST MANAGER==";
        do 
        {
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q): ";
                cin>>input;


                if(input =='a' || input =='A')
                {
                        cout<<"\nWhat is the item?"<<endl;
                        cin>>item;
                        list.push_back(item);
                } 
        }
        while(input != 'q' && input != 'Q');

        for (int i = 0; i< list.size(); i++)
        {
                cout<<list[i]<<endl;

        }
        if (list.size() == 0)
        {
                cout<<"No items to buy"<<endl;
        }

        return 0;
}
