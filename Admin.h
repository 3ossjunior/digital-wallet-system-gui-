#pragma once
#include <iostream>
#include "System.h"
#include "Transaction.h"
#include <queue>

using namespace std;
class User;
class Admin
{
private:
	string username;
	string password;
public:

	Admin();
	Admin(string, string);


	void set_username(string new_name);
	string get_username();

	void set_password(string new_pass);
	string get_password();

	void view_Accounts_Data();

	static  void edit_username(string name, string);
	static void edit_password(string name, string);
	void add_user(string, string, double);
	void delete_user();

	void suspend_user(string);
	void reactivated(string);

	void view_all_transactions();

	void edit_balance(string name, double);
	~Admin();
};
