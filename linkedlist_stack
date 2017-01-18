#include<iostream>
using namespace std;


struct node
{
    int data;
    struct node *next;
};

class stack
{
    struct node *top;
    public:
    stack()
    {
        top=NULL;
    }
    void push();
    void pop();
    void show();
};

void stack::push()
{
    int pv;
    struct node *ptr;
    cout << "PUSH Operation" << endl;
    cout << "Enter a number to insert: ";
    cin >> pv;
    ptr = new node;
    ptr -> data=pv;
    ptr -> next = NULL;
    if(top != NULL){
        ptr -> next=top;
		}
    top = ptr;
    cout << endl << "New number is pushed!";

}

void stack::show()
{
    struct node *ptr1=top;
    cout << "STACK:" << endl;
    cout << "top -> ";
    while(ptr1 != NULL)
    {
		cout << ptr1 -> data <<" ";
        ptr1 = ptr1 -> next;
    }
    cout<<"<- bottom" << endl << endl;
}

main()
{
    stack s;
    int ans;
    char ans1;
    while(1){
        system("cls");
        cout << "STACK USING LINKED LIST" << endl;
        cout << "1.PUSH\n2.DISPLAY STACK\n3.EXIT" << endl;
        cout << "Enter your choice: ";
        cin >> ans;
        switch(ans)
        {
            case 1:{
            	system("cls");
                s.push();
                break;
            }
        
            case 2:{
				system("cls");
                s.show();
                system("pause");
                break;
        	}
        	
            case 3:{
				system("cls");
				cout << "\t\t\t\t\t\t BYE!" << endl;
				system("pause");
                return 0;
                break;
        	}
        	
            default:{
				system("cls");
                cout << "You have entered invalid number! \n Do you want to continue anyway [Y/N]?: ";
    			cin >> ans1;
    				if ((ans1 == 'y') || (ans1 == 'Y')){
					system("cls");
					return main();
			}
			else {
				system("cls");
				cout << "\t\t\t\t\t\t BYE!" << endl;
				system("pause");
				return 0;
                break;
        }
    }
		}
        }
    }
