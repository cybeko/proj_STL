#include <string>
#include <map>
using namespace std;
#include <iostream>

int main()
{
	map<string, string> arrWords;
	string myWord;
	string myDef;
	map<string, string>::iterator it;

	int userCh;
	bool loopValid = true;

	cout << "\tMenu: "<< "\n1.Add word\n2.Delete word \n3.Redact word\n4.Search word\n5.Print all\n6.Exit\n"<<endl;

	while(loopValid)
	{
		cout << "\nChoose option: ";
		cin >> userCh;

		switch (userCh)
		{
		case 1:
			//add
			cout << "Enter word: ";
			cin >> myWord;
			cout << "Enter defenition: ";
			cin >> myDef;
			arrWords.insert(make_pair(myWord, myDef ));
			break;
		case 2:
			//delete
			cout << "Enter word to delete: ";
			cin >> myWord;

			if(arrWords.find(myWord) != arrWords.end())
			{
				arrWords.erase(myWord);
				cout << "[" << myWord << " deleted]" << endl;
			}
			else
			{
				cout << "Not found"<<endl;
			}
			break;
		case 3:
			//redact
			cout << "Enter word to redact: ";
			cin >> myWord;

			if (arrWords.find(myWord) != arrWords.end())
			{
				cout << "Enter new definition: ";
				cin >> myDef;
				it->second = myDef;
			}
			else
			{
				cout << "Not found" << endl;
			}
			break;
		case 4:
			//search
			cout << "Enter word you're searching for: ";
			cin >> myWord;
			it = arrWords.find(myWord);

			if (it != arrWords.end())
			{
				cout << it->first << " - " << it->second << endl;
			}
			else
			{
				cout << "Not found" << endl;
			}
			break;
		case 5:
			//printall
			for (auto it = arrWords.begin(); it != arrWords.end();it++)
			{
				cout << it->first << " - " << it->second << endl;
			}
			break;
		case 6:
			cout << "Goodbye!"<<endl;
			loopValid = false;
			break;
		default:
			cout << "Wrong option." << endl;
			break;
		}
	}
}