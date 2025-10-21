#include <iostream>
#include <string>
using namespace std;

int main() {
    int mainChoice;
    cout << "   Welcome to Bank Simulation   " << endl;
    cout<<endl;
    cout << "1. Create Personal Account" << endl;
    cout<<endl;
    cout << "2. Create Joint Account" << endl;
    cout<<endl;
    cout << "Enter your choice: ";
    cin >> mainChoice; 

    int choice = 0, Balance = 0, Amount = 0, pin, enteredPin;
    string Account_Type, PAN_Number;
    int Account_Number = 234890541278;

    string Name, Father_Name, Mother_Name, Address;

    string Name1, Name2, Father1, Father2, Mother1, Mother2, Address1, Address2;

    if (mainChoice == 1) {
    	cout<<"\n";
        cout << "Enter the informations to create a Personal Account "<<endl;
        cout<<endl;
        cin.ignore();
        cout << "Enter your name: ";
        getline(cin, Name);
        
        
        cout << "Enter your Father's name: ";
        getline(cin, Father_Name);
        

        cout << "Enter your Mother's name: ";
        getline(cin, Mother_Name);
        

        cout << "Enter your Address: ";
        getline(cin, Address);
        

        cout << "Enter your 10-character PAN Number: ";
        cin >> PAN_Number;
        
        if (PAN_Number.length() != 10) {
            cout << "Invalid! PAN number must be exactly 10 characters." <<endl;
            return 0;
        }
        for (int i = 0; i <	 PAN_Number.length(); i++) {
            PAN_Number[i] = toupper(PAN_Number[i]);
        }

        cout << "Choose Account Type (Saving/Current): ";
        cin >> Account_Type;//since both the account type will need the same info. so we didn't make another if-else block for the account type 
        

        cout << "Enter initial deposit: ";
        cin >> Balance;
        

        cout << "Your " << Account_Type << " account is successfully created!"<<endl;

        cout << "Set a 4-digit security code for your account: ";
        cin >> pin;
        cout<<endl;

        cout << "Enter your security code to access the account: ";
        cin >> enteredPin;
        cout<<"\n";
        if (enteredPin != pin) {
            cout << "Access Denied! Wrong code entered." << endl;
            return 0;
        }
        while (choice != 5) {
            cout << "  Bank Menu (Personal Account)  " << endl;
            cout << "1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Account Details" << endl;
            cout << "4. Check Balance" << endl;
            cout << "5. Exit" << endl;
            
			cout << "Enter your choice: ";
            cin >> choice;
            

            switch (choice) {
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> Amount;
                    
                    if (Amount <= 0) {
                        cout << "Invalid amount." << endl;
                        
                    } else {
                        Balance += Amount;
                        cout << "New Balance: " << Balance << endl;
                        cout<<endl;
                    }
                    break;

                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> Amount;
                    cout<<endl;
                    if (Amount > Balance) {
                        cout << "Insufficient balance!" << endl;
                        
                        
                    } else if (Amount <= 0) {
                        cout << "Invalid amount." << endl;
                        
                    } else {
                        Balance -= Amount;
                        cout << "Rs. " << Amount << " successfully withdrawn" << endl;
                        cout << "Remaining balance = " << Balance << endl;
                        cout<<endl;
                        
                    }
                    break;

                case 3:
                	cout<<endl;
                    cout << "    Account Details   " << endl;
                    cout << "Name: " << Name << endl;
                    cout << "Father's Name: " << Father_Name << endl;
                    cout << "Mother's Name: " << Mother_Name << endl;
                    cout << "Address: " << Address << endl;
                    cout << "PAN Number: " << PAN_Number << endl;
                    cout << "Account Type: " << Account_Type << endl;
                    cout << "Account Number: 234890541278 "  << endl;
                    cout << "Balance: " << Balance << endl;
                    cout<<endl;
                    break;
                

                case 4:
                	cout<<endl;
                    cout << "Your balance is: " << Balance << endl;
                    cout<<endl;
                    break;
                    

                case 5:
                    cout << "Thank you for banking with us!" << endl;
                    break;
                    

                default:
                	cout<<endl;
                    cout << "Invalid choice, try again." << endl;
                    cout<<endl;
            }
        }
    } 
    else if (mainChoice == 2) {
    	cout<<endl;
        cout << "Enter the informations to create a Joint Account   "<<endl;
        cout<<endl;
        cin.ignore();
		cout << "Enter first account holder's name: ";
        getline(cin, Name1);
        cout << "Enter Father's name: ";
        getline(cin, Father1);
        cout << "Enter Mother's name: ";
        getline(cin, Mother1);
        cout << "Enter Address: ";
        getline(cin, Address1);
        cout<<endl;

        cout << "Enter second account holder's name: ";
        getline(cin, Name2);
        cout << "Enter Father's name: ";
        getline(cin, Father2);
        cout << "Enter Mother's name: ";
        getline(cin, Mother2);
        cout << "Enter Address: ";
        getline(cin, Address2);

        cout << "Enter 10-character PAN Number: ";
        cin >> PAN_Number;
        if (PAN_Number.length() != 10) {
            cout << "Invalid! PAN number must be exactly 10 characters.";
            return 0;
        }
        for (int i = 0; i < PAN_Number.length(); i++) {
            PAN_Number[i] = toupper(PAN_Number[i]);
        }

        cout << "Choose Account Type (Saving/Current): ";
        cin >> Account_Type;

        cout << "Enter initial deposit: ";
        cin >> Balance;
        cout<<endl;

        cout << "Your Joint " << Account_Type << " account is successfully created!"<<endl;

        cout << "Set a 4-digit security code for your account: ";
        cin >> pin;
        cout<<endl;

        cout << "Enter your security code to access the account: ";
        cin >> enteredPin;
        cout<<endl;
        if (enteredPin != pin) {
            cout << "Access Denied! Wrong code entered.";
            return 0;
        }
        while (choice != 5) {
            cout << "    Bank Menu (Joint Account)    " << endl;
            cout << "1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Account Details" << endl;
            cout << "4. Check Balance" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter amount to deposit: ";
                    cin >> Amount;
                    if (Amount <= 0) {
                        cout << "Invalid amount." << endl;
                    } else {
                        Balance += Amount;
                        cout << "New Balance: " << Balance << endl;
                        cout<<endl;
                    }
                    break;

                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> Amount;
                    if (Amount > Balance) {
                        cout << "Insufficient balance!" << endl;
                    } else if (Amount <= 0) {
                        cout << "Invalid amount." << endl;
                    } else {
                        Balance -= Amount;
                        cout << "Rs " << Amount << " successfully withdrawn" << endl;
                        cout << "Remaining balance = " << Balance << endl;
                        cout<<endl;
                    }
                    break;

                case 3:
                	cout<<endl;
                    cout << "    Joint Account Details    " << endl;
                    cout << "First Holder: " << Name1 << endl;
                    cout << "Father's Name: " << Father1 << endl;
                    cout << "Mother's Name: " << Mother1 << endl;
                    cout << "Address: " << Address1 << endl;
                    cout << "Second Holder: " << Name2 << endl;
                    cout << "Father's Name: " << Father2 << endl;
                    cout << "Mother's Name: " << Mother2 << endl;
                    cout << "Address: " << Address2 << endl;
                    cout << "PAN Number: " << PAN_Number << endl;
                    cout << "Account Type: " << Account_Type << endl;
                    cout << "Account Number: 234890541278 "  << endl;
                    cout << "Balance: " << Balance << endl;
                    cout<<endl;
                    break;

                case 4:
                	cout<<endl;
                    cout << "Your balance is: " << Balance << endl;
                    cout<<endl;
                    break;

                case 5:
                    cout << "Thank you for banking with us!" << endl;
                    break;

                default:
                	cout<<endl;
                    cout << "Invalid choice, try again." << endl;
                    cout<<endl;
            }
        }
    } 
    else {
        cout << "Invalid option! Program closing..." << endl;
    }

    return 0;
}
