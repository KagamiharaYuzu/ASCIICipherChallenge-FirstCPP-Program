#include <iostream>
#include <string>
#include <list>
using namespace std;
int main()
{
	string sentence;
	cout << "Please enter the sentence you want to parse to ASCII : ";
	getline(cin, sentence);

	for (char i : sentence)
		cout << int(i) << " ";
}