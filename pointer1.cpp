#include<iostream>
using namespace std;
int main(){
	int arr[] = {1,3,5,7,9};
	int *ptr = arr;
	for(int i=0; i<5; i++){
	cout << *ptr << endl;
	ptr++;
	}
}
