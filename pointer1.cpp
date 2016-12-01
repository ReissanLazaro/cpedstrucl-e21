#include<iostream>
using namespace std;
int main(){
	int n, *p;
	p = &n;
	cout << "Enter number: ";
	cin >> n;
	cout << p;
}
