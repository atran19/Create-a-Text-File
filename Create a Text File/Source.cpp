////////////
//Anna Tran
//CS 172 Sec 1
//13.1
////////////

#include<iostream>
#include<string>
#include<fstream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main() {

	ofstream fout;

//open file for output
	fout.open("Exercise13_1.txt", ios::out);
//Check if file cannot open
	if (fout.fail())
	{
		cout << "Can't open file" << endl;
		return 0;
	}
	
//Output 100 random integers	
	srand(time(0));
	for (int i = 0; i < 101; i++)
	{
		cout<< " "<< rand() % 100;
	}
	
	fout.close();

}