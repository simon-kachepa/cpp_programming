#include <iostream>

void displayWelcomeMessage();
void displayMenu();
void viewBalance(double balance);
double deposit(double balance);
double withdraw(double balance);
void goodByMessage();

int main(){

    double balance = 0;
    int choice = 0;

    displayWelcomeMessage();

    do{
        displayMenu();
        std::cout<<"Enter your choice between (1-4): ";
        std::cin>>choice;

        switch(choice){
            case 1: balance = deposit(balance);
            std::cout<<"\n********************************\n";
            break;

            case 2: balance = withdraw(balance);
            std::cout<<"\n********************************\n";
            break;

            case 3: viewBalance(balance);
            std::cout<<"\n********************************\n";
            break;

            case 4: goodByMessage();
            std::cout<<"\n********************************\n";
            break;

            default: std::cout<<"Invalid choice! Enter a number between (1-4)\n";
        }
    }while(choice != 4);


    return 0;
}

void displayWelcomeMessage(){
    std::cout<<"\n**************** WELCOME TO BANKING APP ****************\n\n";
}

void displayMenu(){
    std::cout<<"CHOOSE AN OPTION \n";
    std::cout<<"1. Deposit \n";
    std::cout<<"2. Withdraw \n";
    std::cout<<"3. View Balance \n";
    std::cout<<"4. Exit()\n";
}

void goodByMessage(){
    std::cout<<"Thank you for choosing us! See you next time\n";
}

double deposit(double balance){
    double amount;

    std::cout<<"\nDepositing ........\n";
    std::cout<<"Enter the amount you want to deposit: ";
    std::cin>> amount;

    if(amount < 0){
        std::cout<<"Failed. You can't deposit negative amount\n";
    }
    else{
        std::cout<<"Successfully deposited $"<<amount<<'\n';
        balance+=amount;
    }

    return balance;
}

void viewBalance(double balance){

    std::cout<<"\nView Balance().....\n";
    std::cout<<"Balance: $"<< balance<<'\n';
}

double withdraw(double balance){
    double amount;

    std::cout<<"\nWithdrawing........\n";
    std::cout<<"Enter amount to withdraw: ";
    std::cin>>amount;

    if (amount > balance){
        std::cout<<"Failed. Inssuficient funds \n";
    }
    else{
        std::cout<<"Successfully withdrawn $"<<amount<<'\n';
        balance-=amount;
    }

    return balance;
}