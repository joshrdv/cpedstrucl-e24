#include <iostream>
#include <conio.h>
using namespace std;

class LinkedList{
    struct Node {
        int x;
        Node *next;
    };

public:
    LinkedList(){
        head = NULL; // set head to NULL
    }

    void addValue(int val){
        Node *n = new Node();   
        n->x = val;             
        n->next = head;         
                               
        head = n;              
    }

    int popValue(){
        Node *n = head;
        int ret = n->x;

        head = head->next;
        delete n;
        return ret;
    }
    
    void displayValue(){
    	n = head;
    	cout << "\n";
    	while(n!=NULL){
    		cout << n->x << "\n";
    		n = n->next;
		}
		getch();
	}

private:
    Node *head,*n; 
};

int main() {
    LinkedList list;
    int choice,count=0;
	while(1){
		system("cls");
		cout << "============MENU============\n";
		cout << "[1] Insert into linked list\n";
		cout << "[2] Pop\n";
		cout << "[3] Exit\n";
		cout << "[4] Display\n";
		cout << "Choice: ";
		cin >> choice;
		switch(choice){
			case 1:
				int val;
				cout << "Input value: ";
				cin >> val;
				list.addValue(val);
				count++;
				break;
			case 2:
				if(count!=0){
					cout << list.popValue() <<" has been popped."<< endl;
					count--;
				}
				else
					cout << "No value to pop."<<endl;
				getch();
				break;
			case 3:
				exit(1);
			case 4:
				list.displayValue();
				break;
			default: 
				cout << "\nWrong input. Try again.";
				getch();		
		}
	}

    return 0;
}
