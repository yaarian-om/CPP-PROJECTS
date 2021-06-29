#include <iostream>
#include <string>

using namespace std;

int main()
{

	const string USERNAME = "Admin";
	const string PASSWORD = "password";
	string username, password;
	bool user_validated = false;

	do
	{

		cout << "Insert ID:";
		cin >> username;

		if (username.length() < 4)
		{
			cout << "Username length must be atleast 4 characters long.";
		}
		else
		{
			cout << "Insert ID password:";
			cin >> password;

			if (password.length() < 6)
			{
				cout << "Password length must be atleast 6 characters long." << endl;
			}
			else
			{

				if (username == USERNAME && password == PASSWORD)
				{
					cout << "User credentials are correct, Granting access" << endl;
					user_validated = true;
				}
				else
				{
					cout << "Wrong Serial number" << endl;
				}
			}
		}
	} while (user_validated == false);
}
