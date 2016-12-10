#include <iostream>
#include <conio.h>
using namespace std;

class Stack {
  public:
    Stack(int num) {
      top = 0;
      maxelem = num;
      s = new int[maxelem];
    }
    
  void push(int t) {
  	cout << "Push "<<t<<": \n";
    if (top == maxelem) 
		return;
    s[top++] = t;
  }
  
  int pop() {
  	cout << "Pop: \n";
    if (top == 0) 
		return -1;
    return s[--top];
  }
  
  void display() {
    if (top == 0) {
      cout << "(empty)\n";
      return;
    }
    for (int t = 0; t < top; t++) 
		cout << s[t] << " ";
    cout << "\n";
  }
  
  int empty() {
    return top == 0;
  }
  
  private:
    int * s;
	int top;
	int maxelem;
};

void menu(){
	cout << "What would you like to do?: \n";
	cout << "1: Push \n";
	cout << "2: Pop \n";
	cout << "3: Display \n";
	cout << "4: Exit \n";
	
}

int main() {
  Stack * s = new Stack(100);
  int choice,tbp;
  while(1){
  	system("cls");
  	menu();
  	cout << "Choice: ";
  	cin >> choice;
  	switch(choice){
  		case 1:
  			cout << "Push what number? ";
  			cin >> tbp;
  			s -> push(tbp);
  			break;
  			getch();
  		case 2:
		  	s -> pop();
		  	break;
		  	getch();
		case 3:
			s -> display();
			getch();
			break;
		case 4:
			exit(1);
		default:
			cout << "Wrong input.";	
	  }
  }
  return 1;
}
