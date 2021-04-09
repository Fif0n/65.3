#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class file {
public:
	ifstream fIn;

	file();
	~file();
};

file::file() {
	fIn.open("c:\\dane_ulamki.txt");
}

file::~file() {
	fIn.close();
}

class algo {
	
	public:
		int counter = 0;
		int nwd(int a, int b);

};

int algo::nwd(int a, int b) {
	while (a != b)
		if (a > b)
			a -= b;
		else
			b -= a;
	return a;
}


int main()
{
	file f;
	algo a;
	int num1, num2;
	while (!f.fIn.eof()) {

			f.fIn >> num1 >>num2;


			a.counter += num1 /a.nwd(num1, num2);
	}
	cout << a.counter;
}

