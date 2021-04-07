// CSIS111_Lab3B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> g1;
	for (int i = 1; i <= 5; i++) {
		g1.push_back(i);
	}
	g1.insert(g1.begin(), 61);
	cout << "Numbers in vector: ";
	for (int i = 0; i < g1.size(); i++) {
		cout << g1[i] << " ";
	}
	cout << "\n\nNumbers in reverse: ";
	for (int i = g1.size() - 1; i >= 0; i--)
		cout << g1[i] << " ";
	cout << "\n\nEnd of Program\n\n";
	getchar();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
