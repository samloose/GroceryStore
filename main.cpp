//Author: Sam Loose
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list;
  int numItems = 0;
  int index = 0;
  char input;
  string item;
  string trash;
  bool quit = false;
  bool quit2 = false;
  bool repeat = false;

  do
  {
      do 
      {
      cout<<"\n==GROCERY LIST MANAGER==";
      cout<<"\nEnter your choice: ";
      cout<<"\n (A)dd an item";
      if(numItems > 0)
      {        
        cout<<"\n (D)elete last item";
      }
      cout<<"\n (Q)uit";
      cout<<"\nYour choice (A/Q): ";
      //if(input == 'd' || input == 'D')
      //{
      //  cout<< list[numItems] <<" was deleted from the list"<<endl;
      //}
      repeat = true;
      cin>>input;
      quit = input == 'q' || input == 'Q' || input == 'a' || input == 'A' || input == 'd' || input == 'd';
      }
      while(!quit);
      
      if (input == 'a' || input == 'A')
      {
         cout<<"What is the item?"<<endl;
         cin>>item;
         list.push_back(item);
         numItems++;
      }   

      if (input == 'd' || input == 'D' && numItems > 0)
      {
        //trash = list[numItems-1];
        cout<< list[list.size()-1] <<" was deleted from the list"<<endl;
        list.pop_back();
        numItems--;
      }
      if (input == 'q' || input == 'Q')
      {
        if (numItems > 0)
        {
            cout<<"==ITEMS TO BUY=="<<endl;
            index = 0;
            for(index=0; index < numItems ; index++)
            {                   
               cout<<index + 1<<" "<<list[index]<<endl;
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
