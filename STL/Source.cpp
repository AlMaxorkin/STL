#include <iostream>
#include <conio.h>
#include <vector>
#include <algorithm>

using namespace std;

void base(int x, int y, vector<int>& vec)
{
	vector<int>::iterator last_it;

	for (auto it = vec.begin(); it != vec.end(); ++it)
		if (*it >= y)
			last_it = it;

	auto result = remove_if(last_it, vec.end(), [x](int val)
		{
			return val < x;
		});

	vec.erase(result, vec.end());
}

void print_vec(vector<int> vec)
{
	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << " ";
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");


	vector<int> myVector;
	myVector.push_back(5);
	myVector.push_back(3);
	myVector.push_back(10);
	myVector.push_back(1);
	myVector.push_back(8);
	myVector.push_back(4);
	myVector.push_back(7);
	myVector.push_back(5);
	myVector.push_back(4);
	myVector.push_back(13);
	myVector.push_back(2);
	myVector.push_back(1);
	myVector.push_back(5);
	myVector.push_back(2);


	print_vec(myVector);

	int x, y;
	cout << "¬ведите x и y: " << endl;
	cin >> x;
	cin >> y;

	base(x, y, myVector);

	print_vec(myVector);

	system("pause");
	return 0;
}