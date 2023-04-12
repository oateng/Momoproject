#include <iostream>
using namespace std;

int main() {
	const int defaultpin = 0000;
	int attempts = 0;
	int select;
	float reference;
	char option;
	char Y;
	int number;
	float amount;
	int pin; 
	int c_pin;
	int new_pin;
	double num,result;
	const double percentage=0.017;
	float balance, counter;
	string digits;
	balance=1000;
	// Authentication
  int input_pin;
  do {
    cout << "Enter your PIN: ";
    cin >> input_pin;
    attempts++;
    if (input_pin != defaultpin && attempts == 3) {
      cout << "Maximum attempts reached. Exiting program..." << endl;
      return 0;
    }
  } while (input_pin != pin);
cout<<"WELCOME TO MTN MOBILE MONEY SERVICE(MOMO)"<<endl;
cout<<"Main Menu"<<endl;
cout<<"1.Check Balance"<<endl;
cout<<"2. Reset/Change Pin"<<endl;
cout<<"3. Send "<<endl;
cout<<"4. E-levy calculator"<<endl;
cout<<"5. withdrawal/Authenetication"<<endl;
cout<<"6. Quick loan"<<endl;
cin>>select;
if(select==1)
{
	do{
		cout<<"Please enter your 4-digit PIN: "<<endl;
		cin>> pin;
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. Please try again" <<endl;
		}
		else if (pin== defaultpin){
			cout<<"Your balance is Ghs 1000";	
		}
	} while (pin != defaultpin && attempts <3);
	if(attempts>3){
		cout<<"Maximum attempts reached."; 
		cout<<"Please contact costomer service for info"<<endl;
	}
	switch(pin){
		break;
	}
}
else if(select==2)
{
cout << "Enter your current 4-digit PIN: ";
   cin >> pin;
    attempts++;
   if(pin== defaultpin) {
      do {
         cout << "Enter your new 4-digit PIN: ";
         cin >> new_pin;
         if(new_pin < 1000 || new_pin > 9999)  {
            cout << "Invalid new PIN. PIN must be a 4-digit number." << endl;
            continue;
         }
         cout << "Your PIN has been changed successfully." << endl;
         break;
      } while (pin != defaultpin && attempts <3);
      if(attempts == 3) {
         cout << "Maximum number of attempts reached. Please try again later." << endl;
      }
   } else {
      cout << "Invalid current PIN. PIN must be a 4-digit number." << endl;
   }
		
	
}

else if(select==3)
{
	cout<<"Enter Mobile Number "<<endl;
	cin>>number;
	cout<<"Enter Amount To Transfer "<<endl;
	cin>>amount;
		if(amount>balance)
		{
			cout<<"insuficient balance"<<endl;
			
		}else if(amount<balance)
		{	
	cout<<"Transfer "<<amount<<" to "<<number<<endl;
	cout<<"Enter Reference "<<endl;
	cin>>reference;
	cout<<"Please enter your PIN: "<<endl;
	cin>> pin;
	do{
		attempts++;
		if (pin != defaultpin){
			cout<<"Incorrect PIN. Please try again" <<endl;
		}
		else if (pin== defaultpin){
			cout<<"You have successfully sent "<<amount<<" to "<<number<<endl;
			cout<<"Your current balance is "<<balance-amount<<endl;	
		}
	} while (pin != defaultpin && attempts >3);
	if(attempts>3){
		cout<<"Maximum attempts reached."; 
		cout<<"Exiting Program"<<endl;
	}
	switch(pin){
		break;
	}

	}
}
	
	else if(select==4)
	{
		cout<<"Enter the amout you want to send:"<<endl;
		cin>>num;
		
		result=num*percentage;
		
		cout<<"you will be charge Ghs: "  <<result<< " for sending Ghs: " <<num<<endl;
		}
		else if (select==5)
			{
cout << "Enter the amount to withdraw: ";
   cin >> amount;
   if(amount > balance) {
      cout << "You do not have sufficient balance. Your current balance is " << balance << endl;
   } else {
   	 cout << "Enter your 4-digit PIN to authenticate the transaction: ";
   cin >> pin;
   }
   if(pin==defaultpin) {
      cout << "You have successfully withdrawn GHS "<<amount<< " from 198460- Live ventures." << endl;
      cout<<"Your cash balance is GHS: "<<balance-amount<<endl;
   } else {
      cout << "Invalid PIN. Transaction authentication failed." << endl;
   }
}
else if (select==6)
{
	cout<<"Enter your pin to continue"<<endl;
	cin>>pin;
	if(pin==defaultpin){
		cout<<"You do not qualify for a loan at this moment keep using MTN momo to qualify next time"<<endl;
		cout<<"THANK YOU"<<endl;
	}else{
		cout<<"Invalid PIN. Please Try Again..."<<endl;
	}
	}	
	
	
	return 0;
}
