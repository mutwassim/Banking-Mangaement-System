#include <iostream>
using namespace std;
void mainchoice(){
    cout<<endl;
    cout<<"Press..!!"<<endl;
    cout << "a. If You Are A Banker" << endl;
    cout<<"b. If You Are A Customer"<<endl;
    cout<<"x. Exit "<<endl;
    cout<<"**************"<<endl;
    
}
void choice1(){
    cout<<endl;
    cout<<"Press..!!"<<endl;
    cout << "1. Signup(for first time user.)" << endl;
    cout<<"2. Login"<<endl;
     cout<<"8. Go Back"<<endl;
     cout<<"**************"<<endl;

}
void choice10()
{
    cout << endl;
    cout << "PRESS..!!" << endl;
    cout << "1. Create new account" << endl;
    cout << "2. Update information of an existing account" << endl;
    cout << "3. Check the details of an existing account" << endl;
    cout << "4. For transactions" << endl;
    cout << "5. Remove an existing account" << endl;
    cout << "6. View customers list" << endl;
    cout << "66. for Transfer money" << endl;
    cout << "7. Exit" << endl;
    cout<<"********************************************"<<endl;
}
void choice()
{
    cout << endl;
    cout<<".Press..!!"<<endl;
    cout << "3. For transaction" << endl;
    cout << "4. Transfer Amount" << endl;
    cout << "5. Change Details" << endl;
    cout << "6. Check Details" << endl;
    cout << "7. Delete Account" << endl;
    cout << "8. Exit" << endl;
    cout<<"**************"<<endl;
}


struct BankAccount
{
    long IBAN;
    string AccountHolderName, AccountHolderLastName, MobileNumber, email, username, password;
    float balance;
};
void login(BankAccount bankaccount[],int &c,string email,string password);
void login(BankAccount bankaccount[],int &c, string email, string password){
   
    for(int i=0;i<c;i++){
    if(email==bankaccount[i].email && password==bankaccount[i].password){
        cout<<endl<<"Welcome " <<bankaccount[i].username<<".....";
        
        return;
    }

    }
    cout<<endl<<"Entered E-mail or Password is not correct";
    cout<<"***********************************************"<<endl;


}

void Signup(BankAccount accounts[], int &count, int n)
{
    for (int i = count; i < n + count; i++)
    {
        cout<<"Enter the data for account "<<i+1<<endl;
        cout << "Enter The IBAN Number :";
        cin >> accounts[i].IBAN;
        cout << "Enter The Account Holder First Name:";
        cin >> accounts[i].AccountHolderName;
        cout << "Enter The Account Holder Last Name:";
        cin >> accounts[i].AccountHolderLastName;
        cout << "Enter Mobile Number:";
        cin >> accounts[i].MobileNumber;
        cout << "Enter Email:";
        cin >> accounts[i].email;
        cout << "Enter Username:";
        cin >> accounts[i].username;
        cout << "Enter Password:";
        cin >> accounts[i].password;
        cout << "Enter The Account Balance:";
        cin >> accounts[i].balance;
        cout<<"Account Created for "<<accounts[i].username<<endl;
        cout<<"*****************************"<<endl;
    }
    cout << "New Accounts Are Created" << endl;
    cout<<"**************************"<<endl;
    count += n;
}

void changeDetails(BankAccount accounts[], int &count,string email,string password)
{
    
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].email == email && accounts[i].password==password)
        {
            cout << "Enter The Account Holder First Name:";
            cin >> accounts[i].AccountHolderName;
            cout << "Enter The Account Holder Last Name:";
            cin >> accounts[i].AccountHolderLastName;
            cout << "Enter Mobile Number:";
            cin >> accounts[i].MobileNumber;
            cout << "Enter Username:";
            cin >> accounts[i].username;
            cout << "Enter The Account Balance:";
            cin >> accounts[i].balance;
            cout << "Account Details Have Been Changed" << endl;
            cout<<"***************************************"<<endl;
            return;
        }
    }
    cout << "Invalid IBAN" << endl;
    cout<<"**************"<<endl;
}
void BankerchangeDetails(BankAccount accounts[], int &count)
{
    int IBAN;
    cout << "Enter Account Number You Want To Change Details Of:";
    cin >> IBAN;
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].IBAN == IBAN)
        {
            cout << "Enter The Account Holder First Name:";
            cin >> accounts[i].AccountHolderName;
            cout << "Enter The Account Holder Last Name:";
            cin >> accounts[i].AccountHolderLastName;
            cout << "Enter Mobile Number:";
            cin >> accounts[i].MobileNumber;
            cout << "Enter Email:";
            cin >> accounts[i].email;
            cout << "Enter Username:";
            cin >> accounts[i].username;
            cout << "Enter Password:";
            cin >> accounts[i].password;
            cout << "Enter The Account Balance:";
            cin >> accounts[i].balance;
            cout << "Account Details Have Been Changed" << endl;
            cout<<"************************************"<<endl;
            return;
        }
    }
    cout << "Invalid IBAN" << endl;
    cout<<"**************"<<endl;
}

void checkDetails(BankAccount accounts[], int &count,string email,string password)
{
   
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].email == email && accounts[i].password==password)
        {
            cout << "The Account Number: " << accounts[i].IBAN << endl;
            cout << "The Account Holder First Name: " << accounts[i].AccountHolderName << endl;
            cout << "The Account Holder Last Name: " << accounts[i].AccountHolderLastName << endl;
            cout << "Mobile Number: " << accounts[i].MobileNumber << endl;
            cout << "Email: " << accounts[i].email << endl;
            cout << "Username: " << accounts[i].username << endl;
            cout << "Password: " << accounts[i].password << endl;
            cout << "The Account Balance: " << accounts[i].balance << endl;
            cout<<"**************"<<endl;
            return;
        }
    }
    cout << "Invalid Data. Account not found." << endl;
    cout<<"**************"<<endl;
}
void BankercheckDetails(BankAccount accounts[], int &count)
{
    int IBAN;
    cout << "Enter Account Number You Want To Check Details Of:";
    cin >> IBAN;
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].IBAN == IBAN)
        {
            cout << "The Account Number: " << accounts[i].IBAN << endl;
            cout << "The Account Holder First Name: " << accounts[i].AccountHolderName << endl;
            cout << "The Account Holder Last Name: " << accounts[i].AccountHolderLastName << endl;
            cout << "Mobile Number: " << accounts[i].MobileNumber << endl;
            cout << "Email: " << accounts[i].email << endl;
            cout << "Username: " << accounts[i].username << endl;
            cout << "Password: " << accounts[i].password << endl;
            cout << "The Account Balance: " << accounts[i].balance << endl;
            cout<<"********************"<<endl;
            return;
        }
    }
    cout << "Invalid IBAN. Account not found." << endl;
    cout<<"*********************************"<<endl;
}

void deposit(BankAccount accounts[], int &count,string email,string password)
{
    
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].email == email && accounts[i].password==password)
        {
            long Deposit;
            cout << "Enter Deposit Money:";
            cin >> Deposit;
            long sum = Deposit + accounts[i].balance;
            accounts[i].balance = sum;
            cout << "Current Balance: " << accounts[i].balance << endl;
            cout<<"**************"<<endl;
            return;
        }
    }
    cout << "Invalid Data. Account not found." << endl;
    cout<<"**************"<<endl;
}
void Bankerdeposit(BankAccount accounts[], int &count)
{
    int IBAN;
    cout << "Enter Account Number You Want To Deposit Money In:";
    cin >> IBAN;
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].IBAN == IBAN)
        {
            long Deposit;
            cout << "Enter Deposit Money:";
            cin >> Deposit;
            long sum = Deposit + accounts[i].balance;
            accounts[i].balance = sum;
            cout << "Current Balance: " << accounts[i].balance << endl;
            cout<<"*********************************"<<endl;
            return;
        }
    }
    cout << "Invalid IBAN. Account not found." << endl;
    cout<<"*********************************"<<endl;
}

void withdraw(BankAccount accounts[], int &count,string email,string password)
{
    
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].email == email && accounts[i].password==password)
        {
            long amount;
            cout << "Enter withdraw Money:";
            cin >> amount;
            if (amount <= accounts[i].balance)
            {
                long subtract = accounts[i].balance - amount;
                accounts[i].balance = subtract;
                cout << "Current Balance: " << accounts[i].balance << endl;
                cout<<"**************"<<endl;
            }
            else
            {
                cout << "Insufficient funds. Withdrawal failed." << endl;
                cout<<"**************"<<endl;
            }
            return;
        }
    }
    cout << "Invalid Data. Account not found." << endl;
    cout<<"**************"<<endl;
     
}
void Bankerwithdraw(BankAccount accounts[], int &count)
{
    int IBAN;
    cout << "Enter Account Number You Want To Withdraw Money From:";
    cin >> IBAN;
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].IBAN == IBAN)
        {
            long Withdraw;
            cout << "Enter Withdraw Money:";
            cin >> Withdraw;
            if (Withdraw <= accounts[i].balance)
            {
                long subtract = accounts[i].balance - Withdraw;
                accounts[i].balance = subtract;
                cout << "Current Balance: " << accounts[i].balance << endl;
                cout<<"*********************************"<<endl;
            }
            else
            {
                cout << "Insufficient funds. Withdrawal failed." << endl;
                cout<<"******************************************"<<endl;
            }
            return;
        }
    }
    cout << "Invalid IBAN. Account not found." << endl;
    cout<<"*********************************"<<endl;
}

void removeAccount(BankAccount accounts[], int &count,string email,string password)
{
    
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].email == email && accounts[i].password==password)
        {
            for (int j = i; j < count - 1; j++)
            {
                accounts[j] = accounts[j + 1];
            }
            count--;
            cout << "Account removed successfully." << endl;
            cout<<"**************"<<endl;
            return;
        }
    }
    cout << "Invalid Data. Account not found." << endl;
    cout<<"**************"<<endl;
    choice1();
}
void BankerremoveAccount(BankAccount accounts[], int &count)
{
    int IBAN;
    cout << "Enter Account Number You Want To Remove:";
    cin >> IBAN;
    for (int i = 0; i < count; i++)
    {
        if (accounts[i].IBAN == IBAN)
        {
            for (int j = i; j < count - 1; j++)
            {
                accounts[j] = accounts[j + 1];
            }
            count--;
            cout << "Account removed successfully." << endl;
            cout<<"*********************************"<<endl;
            return;
        }
    }
    cout << "Invalid IBAN. Account not found." << endl;
    cout<<"*********************************"<<endl;
}

void Transfer(BankAccount accounts[], int &count, string email, string password)
{
    long amount, iban;
    cout << "Enter IBAN:";
    cin >> iban;

    cout << "Enter amount:";
    cin >> amount;

    int senderIndex = -1;
    int receiverIndex = -1;

    for (int i = 0; i < count; i++)
    {
        if (accounts[i].email == email && accounts[i].password == password)
        {
            senderIndex = i;
            break;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (iban == accounts[i].IBAN)
        {
            receiverIndex = i;
            break;
        }
    }

    if (senderIndex != -1 && receiverIndex != -1)
    {
        
        if (amount <= accounts[senderIndex].balance)
        {
            accounts[senderIndex].balance -= amount;
            accounts[receiverIndex].balance += amount;

            cout << "Transfer successful. Current Balance: " << accounts[senderIndex].balance << endl;
            cout << "**************************************************" << endl;
            return;
        }
        else
        {
            cout << "Insufficient balance. Transfer failed." << endl;
            cout<<"*********************************"<<endl;
        }
    }
    else
    {
        cout << "Invalid IBAN. Account not found." << endl;
        cout<<"*********************************"<<endl;
    }

    
}
void BankerTransfer(BankAccount accounts[], int &count)
{
    long amount, iban,iban2;
    cout << "Enter the account number you want to transfer money to:";
    cin >> iban;
    cout << "Enter the account number you want to transfer money from:";
    cin >> iban2;
    cout << "Enter amount:";
    cin >> amount;

    int senderIndex = -1;
    int receiverIndex = -1;

    for (int i = 0; i < count; i++)
    {
        if (iban2==accounts[i].IBAN)
        {
            senderIndex = i;
            break;
        }
    }

    for (int i = 0; i < count; i++)
    {
        if (iban == accounts[i].IBAN)
        {
            receiverIndex = i;
            break;
        }
    }

    if (senderIndex != -1 && receiverIndex != -1)
    {
        
        if (amount <= accounts[senderIndex].balance)
        {
            accounts[senderIndex].balance -= amount;
            accounts[receiverIndex].balance += amount;

            cout << "Transfer successful. Sender Balance: " << accounts[senderIndex].balance << endl;
             cout << "Transfer successful. Reciever Balance: " << accounts[receiverIndex].balance << endl;
            cout << "***************************************************" << endl;
            return;
        }
        else
        {
            cout << "Insufficient balance. Transfer failed." << endl;
        }
    }
    else
    {
        cout << "Invalid IBAN. Account not found." << endl;
    }

    cout << "***********************************" << endl;
}

void viewCustomersList(BankAccount accounts[], int &count)
{
    for (int i = 0; i < count; i++)
    {
        cout << "The Account Number: " << accounts[i].IBAN << endl;
        cout << "The Account Holder First Name: " << accounts[i].AccountHolderName << endl;
        cout << "The Account Holder Last Name: " << accounts[i].AccountHolderLastName << endl;
        cout << "Mobile Number: " << accounts[i].MobileNumber << endl;
        cout << "Email: " << accounts[i].email << endl;
        cout << "Username: " << accounts[i].username << endl;
        cout << "Password: " << accounts[i].password << endl;
        cout << "The Account Balance: " << accounts[i].balance << endl;
        cout<<"*********************************"<<endl;
    }
}

int main()
{
    int count = 0, press = 0, n = 0;
    string email,password;
    const int max = 50;
    BankAccount accounts[max];
    char presschar;

    mainchoice();
    cin>>presschar;
    
    while(presschar!='x'){
if(presschar=='a')
{
    
    choice10();
    cin >> press;

    while (press != 7)
    {
        if (press == 1)
        {
            cout << "Enter Number Of Accounts You Want To Create: ";
            cin >> n;
            Signup(accounts, count, n);
        }
        else if (press == 2)
        {
            BankerchangeDetails(accounts, count);
        }
        else if(press==66){
            BankerTransfer(accounts,count);
        }
        else if (press == 3)
        {
            BankercheckDetails(accounts, count);
        }
        else if (press == 4)
        {
            int moneypress;
            cout << "Press 1 To Deposit Money, Press 2 To Withdraw Money: ";
            cin >> moneypress;
            if (moneypress == 1)
            {
                Bankerdeposit(accounts, count);
            }
            else if (moneypress == 2)
            {
                withdraw(accounts, count,email,password);
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
        }
        else if (press == 5)
        {
            BankerremoveAccount(accounts, count);
        }
        else if (press == 6)
        {
             viewCustomersList(accounts, count);
        }
        else
        {
            cout << "Invalid input. Please enter a valid option." << endl;
        }

        choice10();
        cin >> press;
    }
    
}

else if(presschar=='b')
{
    choice1();
    cin >> press;
    while( press!=8){
        if (press == 1)
        {
            n=1;
            Signup(accounts, count, n);
            choice1();
            cin>>press;
        }
            if(press==2){
            cout<<"Enter the E-mail:";
            cin>>email;
            cout<<"Enter the Password:";
            cin>>password;
            login(accounts,count,email,password);
            choice();
            cin>>press;
            while(press!=8){
              if (press == 5)
        {
            changeDetails(accounts, count,email,password);
        }
        else if (press == 6)
        {
            checkDetails(accounts, count,email,password);
        }
        else if (press == 3)
        {
            int moneypress;
            cout << "Press 1 to Deposit Money, Press 2 To amount Money: ";
            cin >> moneypress;
            if (moneypress == 1)
            {
                deposit(accounts, count,email,password);
            }
            else if (moneypress == 2)
            {
                withdraw(accounts, count,email,password);
            }
            else
            {
                cout << "Invalid Input" << endl;
            }
        }
        else if (press == 7)
        {
            removeAccount(accounts, count,email,password);
        }
        else if (press == 4)
        {
            Transfer(accounts, count,email,password);
        }
        else
        {
            cout << "Invalid input. Please enter a valid option." << endl;
        }
          choice();
        cin >> press;  
        
        }
        }
         
        }
    
}
mainchoice();
    cin>>presschar;
    
    }
    return 0;
}