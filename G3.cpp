#include <iostream>
#include <iomanip>
using namespace std;

void  printReportMenu();
int main(){
	bool exitValue;
	int choice;
	exitValue=true;

    printReportMenu();
    cin>> choice;

    do{
    cout<<"\x1B[2J\x1B[H";

    switch(choice){
    case 1:
     cout<<"Inventory Listing";
     break;
    case 2:
     cout<<"Inventory Listing";
         break;
    case 3:
         cout<<"Inventory Retail Value";
             break;
    case 4:
         cout<<"Listing by Quantity";
             break;
    case 5:
         cout<<"Listing by Cost";
             break;
    case 6:
         cout<<"List by Age";
             break;
    case 7:
         cout<<"Return to Main Menu";
             break;
    default:
         cout<<"Invalid input please enter correct choice: ";
         cin>>choice;
         exitValue=false;

    }
    }while(exitValue!=true);



    return 0;}

void printReportMenu(){
	cout<<"Serendipity Booksellers"<<endl<<"Reports";
    cout<<"1. Inventory Listing"<<endl;
    cout<<"2. Inventory Wholesale Value"<<endl;
    cout<<"3. Inventory Retail Value"<<endl;
    cout<<"4. Listing by Quantity"<<endl;
    cout<<"5. Listing by Cost "<<endl;
    cout<<"6. Listing by Age"<<endl;
    cout<<"7. Return to Main Menu"<<endl<<endl;
    cout<<"Enter Your Choice:";

    return;}
