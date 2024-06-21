#include <iostream>
#include <cstring>
using namespace std;

class String {
public:
	char* nstr;
	static int countofuse;
	String() : String(0) {}
	String(int sizee)
	{
		nstr = new char[sizee + 1];
		countofuse++;
	}
	String(const char* stringg){
		int nstrSize = strlen(stringg)+1;
		nstr = new char[nstrSize + 1];
		strcpy_s(nstr, nstrSize, stringg);
		countofuse++;
	}

	void Inputstr() {
		cout << "\nEnter new string : ";
		cin >> nstr;
	}

	void Printstr() {
		cout << nstr;
	}

	static void Showuse() {
		cout << "\n" << countofuse;
	}


	~String()
	{
		delete[] nstr;
	}
};

int String::countofuse = 0;

int main()
{
	String st(12);
	String st1("eeee");
	cout << st1.nstr;
	st1.Inputstr();
	st1.Printstr();
	String::Showuse();
}
