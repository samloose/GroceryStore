//Author: Sam Loose
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list;
  int numItems = 0;
  char input;
  string item;
  bool quit = false;
  bool quit2 = false;

  do
  {
      do 
      {
      cout<<"\n==GROCERY LIST MANAGER==";
      cout<<"\nEnter your choice: ";
      cout<<"\n (A)dd an item";
      cout<<"\n (Q)uit";
      cout<<"\nYour choice (A/Q): ";
      cin>>input;
      quit = input == 'q' || input == 'Q' || input == 'a' || input == 'A';
      }
      while(!quit);
      
      if (input == 'a' || input == 'A')
      {
         cout<<"What is the item?"<<endl;
         cin>>item;
         list.push_back(item);
         numItems++;
      }   

      if (input == 'q' || input == 'Q')
      {
        if (numItems > 0)
        {
            cout<<"==ITEMS TO BUY=="<<endl;
            numItems = 0;
            for(numItems=0; numItems< 5; numItems++)
            {                   
               cout<<numItems + 1<<" "<<list[numItems]<<endl;
            }
        }
        else
        {
            cout<<"No items to buy!"<<endl;
        }
      }
      quit2 = input == 'q' || input == 'Q';
  }    
  while(!quit2);
  return 0;
}
