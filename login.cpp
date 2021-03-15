#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>

#define MAX_NAME_LEN 60  // Maximum len of your name can't be more than 60
#define MAX_ADDRESS_LEN 120  // Maximum len of your address can't be more than 120
#define MAX_ABOUT_LEN 250 
using namespace std;
int login()
{
  
  string line;
  ifstream users ("users.txt");
  if (users.is_open())
  {
    while ( getline (users,line) )
    {
      cout << line << '\n';
    }
    users.close();
  }

  else cout << "Unable to open file"; 

  return 0;
    
}
int registr(){
	string username;
	string pwd;
	cout<<"Enter Username: "<<endl;
	cin>>username;
	cin.ignore();
	cout<<"Enter Password:"<<endl;
	getline(cin,pwd);
  ofstream users;
  users.open ("users.txt");
  users<< username<<","<<pwd;
  users.close();
  return 0;
};
void forgot();

main()
{
	
        int choice;
        cout<<"***********************************************************************\n\n\n";
        cout<<"                      Welcome to login page                               \n\n";
        cout<<"*******************        MENU        *******************************\n\n";
        cout<<"1.LOGIN"<<endl;
        cout<<"2.REGISTER"<<endl;
        cout<<"3.FORGOT PASSWORD (or) USERNAME"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"\nEnter your choice :";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
                case 1:
                       login();
                       break;
                case 2:
                        registr();
                        break;
                case 3:
                        forgot();
                        break;
                case 4:

                        cout<<"Thanks for using this program\nThis program is created by @nabeeltaariq\n\n";
                        break;
                default:
                        system("cls");
                        cout<<"You've made a mistake , give it a try again\n"<<endl; 
                        main();
        }
        
}





void forgot()
{
        
}
