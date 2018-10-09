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

        do {
                cout<<"\n==GROCERY LIST MANAGER==";
                cout<<"\nEnter your choice: ";
                cout<<"\n (A)dd an item";
                cout<<"\n (Q)uit"<<endl;
                cin>>input;

                if(input =='a' || input =='A')
                {
                        cout<<"\nYour choice (A/Q): What is the item?";
                        cin>>item;
                        list.push_back(item);
                } 
        }
        while(input != 'q' && input != 'Q');

        for (int i = 0; i< list.size(); i++)
        {
                cout<<"\n==ITEMS TO BUY=="<<endl;
                cout<<list[i]<<endl;

        }
        if (list.size() == 0)
        {
                cout<<"No items to buy!"<<endl;
        }

        return 0;
}
