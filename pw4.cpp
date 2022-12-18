#include <iostream>
#include <string>

using namespace std;

extern void Check_user();


struct Special_Date {
	string welcome;
	int number;
	int time;
	int ID;


};

struct User_login_in
{
	void Check_user(string User_password, string User_login)
	{
		string login = "leshojke";
		string password = "123456";

		cout << "Enter login: ";
		cin >> User_login;

		cout << "Enter password: ";
		cin >> User_password;

		if (User_login == login && User_password == password)
		{
			cout << "You entered!" << endl;
		}
		else
		{
			cout << "Error" << endl;

			exit(0);
		}
	};

};



struct TwoFA
{
	string TwoFAg;
	int special_code;
};





int main()
{

	Special_Date sd;
	sd.welcome = "Welcome";
	sd.number = 7771;
	sd.time = 6;
	sd.ID = 982547319;
	cout << sd.welcome << endl;
	cout << "Number: " << sd.number << endl;
	cout << "Time: " << sd.time << endl;
	cout << "ID: " << sd.ID << endl;



	User_login_in uli;
	string login;
	string password;
	uli.Check_user(login, password);

	TwoFA tfa;
	tfa.TwoFAg = "2FA";
	tfa.special_code;
	cout << tfa.TwoFAg << endl;

	cout << "Enter Special Code: ";
	cin >> tfa.special_code;


	system("pause");
	return 0;


}