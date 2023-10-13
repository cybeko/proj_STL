#include <iostream>
#include <vector>
#include <deque>
#include <array>
#include <list>
#include <forward_list>

using namespace std;

int main()
{
	//vector<int> vec{ 1,3,4,5 };
	deque<int> vec{ 1,3,4,5 };
	for (int i = 0; i < vec.size();i++)
	{
		cout << vec[i] << " ";
	}
	cout << endl;

	vec.push_back(6);//добавить в конец
	vec.insert(vec.begin(), 0); //в начало 
	vec.insert(vec.begin() + 2, 2); //на позицию

	//vector <int>::iterator ptr; //указатель на вектор
	//for (ptr = vec.begin(); ptr != vec.end();ptr++)
	//{
	//	cout << *ptr << " ";
	//}
	//cout << endl;
	
	vec.pop_back();//извлекать с конца
	vec.push_front(-1);//добавитб в начало
	for (auto ptr = vec.begin(); ptr != vec.end();ptr++) //auto ptr
	{
		cout << *ptr << " ";
	}
	cout << endl;

	//deque - двунаправленная очередь. от вектора отличается тем, что поддерживает работу с началом коллекции(push front)

	//static array
	/*array<int, 5> arr{1,2,3,4,5};
	arr[4] = 200;
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;*/

	//forward list
	/*forward_list<int> arr{ 1,2,3,4,5 };
	arr.pop_front();
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	arr.push_front(100);
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << " ";
	}*/

	// list
	list<int> arr{ 1,2,3,4,5 };
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	arr.push_front(100);
	arr.push_back(100);
	for (auto it = arr.begin(); it != arr.end(); it++)
	{
		cout << *it << " ";
	}
}