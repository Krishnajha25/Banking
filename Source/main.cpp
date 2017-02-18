//This is a simple program I made which does simple banking things like :
//Check Balance
//Withdraw Money
//Deposit Money



#include <iostream>
#include<conio.h>
#include <string>
using namespace std;
class Banking {
private:
    int bal=5000;
public:
   void withdraw() //Whithdraw Money Function
    {

        int wamount;
        cout<<"Enter the amount to withdraw : "<<endl;
        cin>>wamount;
        bal=bal-wamount;
        cout<<"New balance in your account is : "<<bal;
    }

   void deposit()  //Deposit Money Function
   {

        int damount;
        cout<<"Enter the amount to deposit : "<<endl;
        cin>>damount;
        bal=bal+damount;
        cout<<"New balance in your account is : "<<bal;
   }
   void chk_balance()
   {

       cout<<"Your saving account balance is : "<<bal;
   }
   void calc()  //This Function checks the condition's and accordingly call the respective function.
   {
       int ch;
       cout<<"1. Withdraw"<<endl;
       cout<<"2. Deposit"<<endl;
       cout<<"3. Check Balance"<<endl;
       cout<<"Enter your preferred option : "<<endl;
       cin>>ch;
       if(ch==1)
       {
           withdraw();

       }

       else if(ch==2)
       {
        deposit();

       }

       else if(ch==3)
       {
        chk_balance();

       }

       else
        cout<<"Please select correct option";
   }
  /* switch(ch)
   {
   case 1 :
    withdraw();
    break;
   case 2:
    deposit();
    break;
   case 3 :
    chk_balance();
    break;
   default :
    cout<<"Wrong input selected!";
   }
}*/

};
int main()
{
    Banking b;
    b.calc();
    getch();
    return 0;
}
