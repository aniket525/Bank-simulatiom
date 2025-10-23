🏦 Bank Simulation Program (C++)

This program simulates a simple banking system where a user can create either a Personal Account or a Joint Account and perform various banking operations like deposit, withdrawal, checking balance, and viewing account details.

🧩 Main Features
1.Account Creation Options
-Personal Account
-Joint Account

2.Information Collection
-Name, Parents’ names, Address
-PAN Number (validated for 10 characters)
-Account Type (Saving or Current)
-Initial Deposit
-Security PIN for account protection

3.Bank Operations (Menu Driven)
-Deposit: Add money to the account
-Withdraw: Deduct money if sufficient balance exists
-Account Details: Display stored information
-Check Balance: Show current balance
-Exit: Quit the program safely

⚙️ How It Works
1.The program starts with a main menu asking the user to choose between:
-Creating a Personal Account
-Creating a Joint Account
2.Based on the choice, it collects user details using getline() and cin.
3.A 4-digit PIN is set and verified for secure access.
4.The user can then repeatedly perform transactions using a while loop and a switch-case menu until they choose to exit.

💡 Key Programming Concepts Used
-Conditional Statements:
         Used (if, else if, switch) to manage user choices.

-Loops:
     while loop keeps the menu active until the user exits.

-Functions and Variables:
         Local variables store account data such as Name, Balance, and Account_Type.

-String Handling:
         getline() for reading multi-word input.
         toupper() ensures PAN is always uppercase.

-Validation:
         Ensures PAN is exactly 10 characters and that PIN matches before account access.

🎯 Purpose
This project demonstrates basic banking operations and helps beginners understand:
-Input/Output handling in C++
-Use of loops and switch-case
-Real-life application simulation
