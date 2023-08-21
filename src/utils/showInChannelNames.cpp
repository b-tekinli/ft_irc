#include <Utils.hpp>

//" :@" + channels[group][0]->getNickName() + " " +user.getNickName()
string	showInChannelNames(vector<Person *>& persons)
{
	string	result = " :@";

	for (int i = 0; i < int(persons.size()); i++)
	{
		result += persons[i]->getNickName();
		if (i < int(persons.size()) - 1)
			result += " ";
	}
	cout << "result" << endl;
	return (result);
}