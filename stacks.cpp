#include <iostream>
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
	int z, y;
	char ans;
	while (1) {
		
	D: menu();
	cin >> z;
	switch (z)
	{
  case 1:
  		cout << "What number do you want to push?: ";
  		cin >> y;
  		cout << "\n";
  		s->push(y);

		break;
	case 2:
		s -> pop();
		if (y == 0)
      	cout << "(empty)\n";
      	cout << "\n";
		
		break;
	case 3:
		s -> display();
		cout << "\n";
		break;
	case 4:
		return 0;
	}
			}
		}
