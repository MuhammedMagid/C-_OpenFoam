#include<iostream>
using namespace std;

class Stack
{
private:
	int tos;
	int size;
	int *st;
	static int counter;
public:
	Stack(int n=7){
		tos=0;
		size=n;
		st = new int[size];
		counter++;
		cout<<"Stack object number " <<counter<<endl;
	}
	~Stack(){
		delete[] st;
		counter--;
		cout <<"One object destroied"<<endl;
	}
	static int getCounter(){
		return counter;
	}
	void push(int i);
	int pop();
};
int Stack::counter=0;


// Push method to add an element to the stack
void Stack::push(int i) {
	if (tos == size) {
		cout << "Stack is full, cannot push " << i << endl;
	} else {
		st[tos] = i;
		tos++;
		cout << "Pushed " << i << " onto the stack" << endl;
	}
}

// Pop method to remove and return the top element from the stack
int Stack::pop() {
	if (tos == 0) {
		cout << "Stack is empty, cannot pop" << endl;
		return -1; // Return a sentinel value for an empty stack
	} else {
		tos--;
		int poppedValue = st[tos];
		cout << "Popped " << poppedValue << " from the stack" << endl;
		return poppedValue;
	}
}

int main(){
	string singleLine(25, '-'); 
	
    Stack obj(7);
    cout << "Number of objects: " << Stack::getCounter() << endl;

	cout<<singleLine<<endl;

    // Demonstrate pushing elements
    obj.push(10);
    obj.push(20);
    obj.push(30);
	
	cout<<singleLine<<endl;

    // Demonstrate popping elements
    obj.pop();
    obj.pop();
    obj.pop();
    obj.pop();  // Attempt to pop from an empty stack
	cout<<singleLine<<endl;

	return 0; 
}	
