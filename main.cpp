//Author: Sam Loose
#include<iostream>
#include<string>
using namespace std;

int main()
{
  string list[5]; //array of 5 strings
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
         if (numItems < 5)
             {   
                 cout<<"What is the item?"<<endl;
                 cin>>item;
                 list[numItems] = item;
                 numItems++;
             }
         else
             {
                 cout<<"You'll need a bigger list!"<<endl;
             }
      }
      quit2 = input == 'q' || input == 'Q';
  }    
  while(!quit2);
return 0;
}
