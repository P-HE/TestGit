#include<iostream>

double a,b;

using namespace std;

int main(int argc, char* argv[]) {
	cout << "Hello World" << endl;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	double c = a + b;
	cout << c << endl;
	return 0;	
}
