#include <iostream>
#include <set>
#include <map>
using namespace std;

typedef pair<int, string> myPair;
int main()
{
	//set. содержит только уникальные значения
	//set<int> arr{ 2,7,4,0,9,1,5 }; 
	//arr.insert(3);
	//arr.insert(4); //не добавилось

	//for (auto it = arr.begin(); it != arr.end();it++)
	//{
	//	cout << *it << " ";
	//}

	//multiset
	/*multiset<int> arr{ 2,7,4,0,9,1,5 };
	arr.insert(3);
	arr.insert(4);

	for (auto it = arr.begin(); it != arr.end();it++)
	{
		cout << *it << " ";
	}*/

	//map, multimap
	map<int, string> arr;
	//multimap<int, string> arr;
	arr.insert(make_pair(1, "Hello"));
	arr.insert(myPair(3, "Hi"));
	arr.insert(pair<int, string>(2, "Hola"));
	arr.insert(pair<int, string>(2, "Hey")); //map не добавит. ключи должны быть уникальными


	for (auto it = arr.begin(); it != arr.end();it++)
	{
		cout << it->first << " - " << it->second<<endl;
	}
}