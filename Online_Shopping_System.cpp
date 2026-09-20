// Header Files
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
// Global Variables
int counter=0;
int BillAmount=0; 
int MobileChoice,LaptopChoice,WatchChoice,TV_Choice,PaymentChoice;
string item[100];
// Function Prototype
void introduction();
void Choice(void); 
void Mobile_Choice(void);
void Laptop_Choice(void);
void Watch_Choice(void);
void TVChoice(void);
void Discount(void);
void Payment_Choice(void);
void Feedback(void);
void View_Cart(void);
// Main Function
int main()
{
	introduction();
	string name;
	int continue_shopping=1;
	// Greeting the user
	cout<<"-----------------------------------------"<<endl;
	cout<<"       Daraz Online Shopping Store       "<<endl;
	cout<<"-----------------------------------------"<<endl;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"\tWelcome, "<<name<<"...!"<<endl;
	// Loop used to continue shopping
	do
	{   
	    getch();
		system("cls");                                             
		Choice();                       // Function Call
		cout << "\nYour total amount is: " <<BillAmount <<endl;
        cout << "\nWould you like to buy another item? " <<endl;
        cout << "Enter 1 to continue shopping! ";
        cin >> continue_shopping;
	}while(continue_shopping==1);
	getch();
	system("cls");
	View_Cart();                        // Function Call
	getch();
	system("cls");
	Discount();                         // Function Call
	getch();
	system("cls");
	Payment_Choice();                   // Function Call
	Feedback();                         // Function Call
	getch();
	system("cls");
	cout << "\nThank you for shopping with us!" <<endl;
	cout << "-------Have a nice day! :)-------" <<endl;
	return 0;
}

// Function created for introduction of group members
void introduction()
{
	cout<<"\n\n\n\n\n\t";
	for(int i=1;i<=60;i++)
	cout<<"*";
	cout<<"\n\t ";
	for(int i=1;i<=58;i++)
	cout<<"*";
	cout<<"\n\t ";
	for(int i=1;i<=56;i++)
	cout<<"*";
	cout<<"\n\n\t\t\tOnline Shopping System\n\n\t\t\t    Project In C++\n\n\t ";
	for(int i=1;i<=57;i++)
	cout<<"*";
	cout<<"\n\t ";
	for(int i=1;i<=58;i++)
	cout<<"*";
	cout<<"\n\t";
	for(int i=1;i<=60;i++)
	cout<<"*";
	getch();
	system("cls");
	cout<<"\n\n\n\n\n\t\t\t";
	for(int i=1;i<=30;i++)
	cout<<"*";
	cout<<"\n\t\t\t";
	for(int i=1;i<=30;i++)
	cout<<"*";
	cout<<"\n\n\t\t\t\t    Project";
	cout<<"\n\n\t\t\t\t 1. Faria Sajid";
	cout<<"\n\t\t\t\t\n\n\t\t\t";
	for(int i=1;i<=30;i++)
	cout<<"*";
	cout<<"\n\t\t\t";
	for(int i=1;i<=30;i++)
	cout<<"*";
	getch();
	system("cls");
}

// Function created for Choices 
void Choice(void) 
{
    char choice;
    cout << "\nWelcome to Online Shopping Center!" << endl;
    cout << "Enter M For Mobiles\nL For Laptops\nW For Watches\nT For TV: ";
    cin >> choice;
    // Using switch only for section selection (Mobile, Laptop, Watches or TV)
    switch (choice) 
	{
        case 'M':
        case 'm':
            Mobile_Choice();             // Function Call
            break;

        case 'L':
        case 'l':
            Laptop_Choice();             // Function Call
            break;
        case 'W':
        case 'w':
            Watch_Choice();             // Function Call
            break;
        case 'T':
        case 't':
            TVChoice();                // Function Call
            break;
        // Code to execute if no case matches
        default:
            cout << "Invalid Choice, please try again." << endl;
    }
}

// Function created for Mobile Choices
void Mobile_Choice(void)
{
	// Mobile Section
	cout << "\n-------Mobile Section-------" << endl;                       
    cout << "1) Apple\n2) Samsung" << endl;
    cout << "Select brand: ";
    cin >> MobileChoice;
	char AppleMobile,SamsungMobile;
	// Apple Mobiles
	if (MobileChoice == 1)
	{                                  
        cout << "\nAvailable Apple Mobiles:\n";                       
        cout << "1) iPhone X - 60000\n2) iPhone 13 - 150000\n";
        cout << "Select Mobile: ";
        cin >> AppleMobile;
        if (AppleMobile == '1')                                         
		{                             
            BillAmount += 60000;
            cout << "You selected iPhone X\n";
            item[counter]="iphone X";
            counter++;
        } 
		else if (AppleMobile == '2') 
		{
            BillAmount += 150000;
            cout << "You selected iPhone 13\n";
            item[counter]="iphone 13";
            counter++;
        }
		else 
		{
            cout << "Invalid Mobile Selection\n";
        }
    }
    // Samsung Mobiles
	else if (MobileChoice == 2)                                         
	{                                                          
        cout << "\nAvailable Samsung Mobiles:\n";
        cout << "1) Note 10 - 60000\n2) S22 - 90000\n";
        cout << "Select mobile: ";
        cin >> SamsungMobile;
        if (SamsungMobile == '1') 
		{
            BillAmount += 60000;
            cout << "You selected Note 10\n";
            item[counter]="Note 10";
            counter++;
        } 
		else if (SamsungMobile == '2') 
		{
            BillAmount += 90000;
            cout << "You selected S22\n";
            item[counter]="S22";
            counter++;
        } 
		else 
		{
            cout << "Invalid Mobile Selection\n";
        }
    }
	else
        cout << "Invalid Mobile Choice !" <<endl;
}

// Function Created for Laptop Choices
void Laptop_Choice(void)
{
	// Laptop Section
	cout << "\n-------Laptop Section-------" << endl;                                    
    cout << "1) Apple\n2) HP\n3) DELL" << endl;
    cout << "Select brand: ";
    cin >> LaptopChoice;
	char AppleLaptop,HPlaptop;
	// Apple Laptops	    
	if (LaptopChoice == 1)                                                 
	{                                
        cout << "\nAvailable Apple Laptops:\n";
        cout << "1) Macbook Pro 17 - 150000\n2) Macbook M1Chip - 200000\n";
        cout << "Select laptop: ";
        cin >> AppleLaptop;

        if (AppleLaptop == '1') 
		{
            BillAmount += 150000;
            cout << "You selected Macbook Pro 17\n";
            item[counter]="Macbook Pro 17";
            counter++;
        } 
		else if (AppleLaptop == '2') 
		{
            BillAmount += 200000;
            cout << "You selected Macbook M1Chip\n";
            item[counter]="Macbook M1Chip";
            counter++;
        } 
		else 
		{
            cout << "Invalid Laptop Selection\n";
        }
    }
	// HP Laptops 
	else if (LaptopChoice == 2)                                            
	{                                                           
        cout << "\nAvailable HP Laptops:\n";
        cout << "1) HP 14 - 80000\n2) HP 5 - 70000\n";
        cout << "Select laptop: ";
        cin >> HPlaptop;
        if (HPlaptop == '1') 
		{
            BillAmount += 80000;
            cout << "You selected HP 14\n";
            item[counter]="HP 14";
            counter++;
        } 
		else if (HPlaptop == '2') 
		{
            BillAmount += 70000;
            cout << "You selected HP 5\n";
            item[counter]="HP 5";
            counter++;
        } 
		else 
		{
            cout << "Invalid Laptop Selection\n";
        }
    }
    // DELL Laptops
	else if (LaptopChoice == 3)                                           
	{                                                                 
        cout << "Sorry, no Dell laptops available.\n";
        cout << "Out of Stock ! " <<endl;
    }
	else
		cout << "Invalid Laptop Choice !" <<endl; 
}

// Function created for Watch Choices
void Watch_Choice(void)
{
	// Watches Section
	cout << "\n-------Watches Section-------" << endl;                       
    cout << "1) Apple\n2) Samsung" << endl;
    cout << "Select brand: ";
    cin >> WatchChoice;
	char AppleWatch,SamsungWatch;
	// Apple Watches
	if (WatchChoice == 1)
	{                                  
        cout << "\nAvailable Apple Watches:\n";                       
        cout << "1) Apple Watch Ultra 2 - 250000\n2) Apple Watch Series 10 - 110000\n";
        cout << "Select Watch: ";
        cin >> AppleWatch;
        if (AppleWatch == '1')                                         
		{                             
            BillAmount += 250000;
            cout << "You selected Apple Watch Ultra 2\n";
            item[counter]="Apple Watch Ultra 2";
            counter++;
        } 
		else if (AppleWatch == '2') 
		{
            BillAmount += 110000;
            cout << "You selected Apple Watch Series 10\n";
            item[counter]="Apple Watch Series 10";
            counter++;
        }
		else 
		{
            cout << "Invalid Watch Selection\n";
        }
    }
    // Samsung Watches
	else if (WatchChoice == 2)                                         
	{                                                          
        cout << "\nAvailable Samsung Watches:\n";
        cout << "1) Galaxy Watch 7 - 92400\n2) Galaxy Watch 6 - 55000\n";
        cout << "Select Watch: ";
        cin >> SamsungWatch;
        if (SamsungWatch == '1') 
		{
            BillAmount += 92400;
            cout << "You selected Galaxy Watch 7\n";
            item[counter]="Galaxy Watch 7";
            counter++;
        } 
		else if (SamsungWatch == '2') 
		{
            BillAmount += 55000;
            cout << "You selected Galaxy Watch 6\n";
            item[counter]="Galaxy Watch 6";
            counter++;
        } 
		else 
		{
            cout << "Invalid Watch Selection\n";
        }
    }
	else
        cout << "Invalid Watch Choice !" <<endl;
}

// Function created for TV Choices
void TVChoice(void)
{
	// TV Section
	cout << "\n-------TV Section-------" << endl;                       
    cout << "1) Dawlance\n2) Haier" << endl;
    cout << "Select brand: ";
    cin >> TV_Choice;
	char DawlanceTV,HaierTV;
	// Dawlance TV
	if (TV_Choice == 1)
	{                                  
        cout << "\nAvailable Dawlance TV:\n";                       
        cout << "1) 32E3A Simple HD LED - 100000\n2) 4KQ LED Google TV - 150000\n";
        cout << "Select TV: ";
        cin >> DawlanceTV;
        if (DawlanceTV == '1')                                         
		{                             
            BillAmount += 100000;
            cout << "You selected 32E3A Simple HD LED\n";
            item[counter]="32E3A Simple HD LED";
            counter++;
        } 
		else if (DawlanceTV == '2') 
		{
            BillAmount += 150000;
            cout << "You selected 4KQ LED Google TV\n";
            item[counter]="4KQ LED Google TV";
            counter++;
        }
		else 
		{
            cout << "Invalid TV Selection\n";
        }
    }
    // Haier TV
	else if (TV_Choice == 2)                                         
	{                                                          
        cout << "\nAvailable Haier TV:\n";
        cout << "1) H-Cast LED - 120000\n2) Smart google Bezel - 210000\n";
        cout << "Select TV: ";
        cin >> HaierTV;
        if (HaierTV == '1') 
		{
            BillAmount += 120000;
            cout << "You selected H-Cast LED\n";
            item[counter]="H-Cast LED";
            counter++;
        } 
		else if (HaierTV == '2') 
		{
            BillAmount += 210000;
            cout << "You selected Smart google Bezel\n";
            item[counter]="Smart google Bezel";
            counter++;
        } 
		else 
		{
            cout << "Invalid TV Selection\n";
        }
    }
	else
        cout << "Invalid TV Choice !" <<endl;
}

// Function created to View Cart
void View_Cart(void)
{
	cout << "\n-------View Cart-------"<<endl;
	cout << "There are " <<counter << " items in your cart!"<<endl;
	for(int i=0;i<counter;i++)
	{
		cout << item[i] <<endl;
	}
}

// Function created for Applying Discount
void Discount(void)
{
	cout << "\n-------Apply Discount-------\n";
    if (BillAmount >= 1000000) 
	{
        cout << "A 25% discount is applied on your total bill.\n";
        BillAmount = BillAmount - (BillAmount * 25 / 100);
    } 
	else if (BillAmount >= 200000) 
	{
        cout << "A 10% discount is applied on your total bill.\n";
        BillAmount = BillAmount - (BillAmount * 10 / 100);
    } 
    
	else 
	{
        cout << "No discount applicable. Spend more than 200000 to get a discount.\n";
    }
    cout << "Updated Bill Amount: " << BillAmount << endl;
}

// Function created for Payment Method
void Payment_Choice(void)
{
	if(BillAmount>0)
	{
	    cout << "\n-------Payment Method-------\n";
	    cout << "1. Credit Card\n";
	    cout << "2. Debit Card\n";
	    cout << "3. Cash on Delivery\n";
	    cout << "Select payment method: ";
	    cin >> PaymentChoice;	
	    switch (PaymentChoice) 
		{
	        case 1:
	            cout << "\nYou selected Credit Card." <<endl;
				cout << "Payment of " << BillAmount << " is being processed.\n";
	            break;
	        case 2:
	            cout << "\nYou selected Debit Card."<<endl;
				cout << "Payment of " << BillAmount << " is being processed.\n";
	            break;
	        case 3:
	            cout << "\nYou selected Cash on Delivery." <<endl;
	            cout << "Delivery charges of 2000 are applied on your Bill" <<endl;
				cout << "Your total amount is " << (BillAmount+2000) <<endl;
				cout << "Please pay upon delivery.\n";
	            break;
	        default:
	            cout << "\nInvalid payment method. Please try again.\n";
    	}
    	getch();
		system("cls");
	}
}

// Function created for User's Feedback
void Feedback(void)
{
	cout << "\n-------Feedback-------";
	cin.ignore();
	string comment;
	cout << "\nEnter your Feedback : ";
	getline(cin, comment);
	cout << "\nThank you for your feedback :) "<<endl;
}