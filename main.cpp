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
                if (list.size() > 0)
                {
                        cout<<"\n (D)elete last item";

                }
                cout<<"\n (Q)uit";
                cout<<"\nYour choice (A/Q):";
                cin>>input;

                if(input =='a' || input =='A')
                {
                        cout<<"What is the item?"<<endl;
                        cin>>item;
                        list.push_back(item);
                } else if (input == 'd' || input == 'D')
                {
                        item = list[list.size()-1];
                        list.pop_back();
                        cout<<item<<" was delete from the list.";
                }

        } while(input != 'q' && input != 'Q');

        for (int i = 0; i< list.size(); i++)
        {
                cout<<i + 1<<" "<<list[i]<<endl;
        }
        if (list.size() == 0)
        {
                cout<<"No items to buy!"<<endl;
        }

        return 0;
}
