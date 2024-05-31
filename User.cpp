#pragma once
#include "User.h"

User::User()
{
	suspended = false;
}

User::User(string UserName, string Password, double balance, bool sus)
{
	this->UserName = UserName;
	this->Password = Password;
	this->balance = balance;
	this->suspended = sus;

}

User::User(string UserName, string Password, double balance)
{
	this->UserName = UserName;
	this->Password = Password;
	this->balance = balance;

}

void User::BalanceAfterTransaction(double newBalance)
{
	this->balance = newBalance;
}

void User::editUsername(string &new_name){
//
//	/*string new_name;
//	cout << "Please Enter The New Username :";
//	cin >> new_name;
//
//	if (System::search_user(new_name))
//	{
//		cout << "The Username already exist :\n";
//		return editUsername();
//
//	}*/
//	string oldName = UserName;
//	//handling transaction history after edit name 
//	{
//		for (int i = 0; i < System::allTransactions.size(); i++) {
//			if (System::allTransactions[i].getSender() == oldName) {
//				System::allTransactions[i].SetSender(new_name);
//			}
//			else if (System::allTransactions[i].getReciever() == oldName)
//				System::allTransactions[i].reciever = new_name;
//		}
//		for (int i = 0; i < History.size(); i++) {
//			if (History[i].getSender() == oldName) {
//				User* R = System::getUser(History[i].getReciever());
//				History[i].SetSender(new_name);
//				for (int j = 0; j < R->History.size(); j++) {
//					if (R->History[j].getSender() == oldName)
//						R->History[j].sender = new_name;
//				}
//			}
//			else if (History[i].getReciever() == oldName) {
//				User* R = System::getUser(History[i].getSender());
//				History[i].reciever = new_name;
//				for (int j = 0; j < R->History.size(); j++) {
//					if (R->History[j].reciever == oldName)
//						R->History[j].reciever = new_name;
//				}
//
//			}
//		}
//	}
//	//handling pending transaction after edit name
//	{
//		for (auto& request : System::allPendingRequests) {
//			// Check if the sender's username matches the old username
//			if (request.sender == oldName) {
//				// Update the sender's username to the new username
//				request.sender = new_name;
//			}
//			// Check if the receiver's username matches the old username
//			if (request.reciever == oldName) {
//				// Update the receiver's username to the new username
//				request.reciever = new_name;
//
//				User* R = System::getUser(request.sender);
//				for (auto& request1 : R->pendingRequests)
//				{
//					if (request1.reciever == oldName)
//						request1.reciever = new_name;
//				}
//
//			}
//		}
//
//		for (auto& request : pendingRequests) {
//			// Check if the sender's username matches the old username
//			if (request.sender == oldName) {
//				// Update the sender's username to the new username
//				request.sender = new_name;
//			}
//			// Check if the receiver's username matches the old username
//
//		}
//
//
//	}
//	UserName=new_name;
//
//	User userrr = System::allUsers[oldName];
//
//	userrr.UserName = new_name;
//	System::allUsers.erase(oldName);
//
//	System::allUsers[new_name] = userrr;
//	cout << "the Username has been Changed Successfully \n";
//	cout << balance;
	Admin::edit_username(UserName, new_name);
}

void User::editPassword(string &password)
{
	/*string new_pass;
	cout << "Please Enter The New Password :";
	cin >> new_pass;*/

	setpassword(System::sha256(password));
	cout << "the Password has been Changed Successfully \n";
}

double User::ViewCurrentBalance()
{

	return  balance;
}

void User::setUserName(string UserName)
{
	this->UserName = UserName;
}

string User::getUserName()
{
	return UserName;
}

bool User::getSuspended()
{
	return suspended;
}

void User::setpassword(string pass)
{
	Password = pass;
}

void User::setbalance(double bal)
{
	balance = bal;
}

string User::getpassword()
{
	return Password;
}

void User::userData()
{
	cout << "User Name: " << getUserName() << "\t";
	cout << "Balance: " << ViewCurrentBalance() << endl;
	//ViewHistory();
}

void User::Send(string reciever, double amount)
{
	//string reciever;
	//double amount = -1;
	//cout << "Please enter the recipient's username: ";
	//cin >> reciever;
	//while (amount <= 0) {
	//	cout << "Please enter the amount of money: ";
	//	cin >> amount;
	//	if (amount <= 0)
	//	{
	//		cout << "amount of money cannot = 0 or negative please try again\n ";
	//	}
	//}

	//string T;

	//map<string, User>::iterator FindingUser;
	//FindingUser = System::allUsers.find(reciever);

	//if (FindingUser == System::allUsers.end()) {

	//	cout << "The User is not found" << endl;
	//	while (T != "1" && T != "0" || T.length() != 1) {
	//		cout << "Do you want to continue? press 1 / 0 to exit";
	//		cin >> T;
	//		if (T == "1" && T.length() == 1)
	//		{

	//			Send();
	//		}
	//		else if (T == "0" && T.length() != 1)
	//		{
	//			exit; //redirect to home page 
	//		}
	//		else cout << "Invalid choice \n";
	//	}
	//}


	//else if (checkSuspendedAccounts(reciever))
	//{
	//	cout << "This account is inactive" << endl;
	//	while (T != "1" && T != "0" || T.length() != 1) {
	//		cout << "Do you want to continue? press 1 / 0 to exit";
	//		cin >> T;
	//		if (T == "1") {

	//			Send();
	//		}
	//		else if (T == "0")
	//		{
	//			exit; //redirect to home page
	//		}
	//		else cout << "Invalid choice \n";
	//	}
	//}
	//else if (getSuspended())
	//{
	//	cout << "Your account account is inactive\n"
	//		"cannot perform any Transaction until reactivated" << endl;

	//	exit;

	//}
	//else if (!CheckBalance(amount))
	//{
	//	cout << "Your balance is not enough" << endl;
	//	while (T != "1" && T != "0" || T.length() != 1) {
	//		cout << "Do you want to continue? press 1 / 0 to exit";
	//		cin >> T;
	//		if (T == "1") {

	//			Send();
	//		}
	//		else if (T == "0")
	//		{
	//			exit; //redirect to home page
	//		}
	//		else cout << "Invalid choice \n";
	//	}
	//}
	//else if (UserName == FindingUser->second.getUserName())
	//{
	//	cout << "You can not send money to yourself\n";
	//	while (T != "1" && T != "0" || T.length() != 1) {
	//		cout << "Do you want to continue? press 1 / 0 to exit";
	//		cin >> T;
	//		if (T == "1") {

	//			Send();
	//		}
	//		else if (T == "0")
	//		{
	//			exit; //redirect to home page
	//		}
	//		else cout << "Invalid choice \n";
	//	}
	//}


	//else
	//{
	transactions.amount = amount;
	transactions.sender = System::loggedInUser->getUserName();
	transactions.reciever = reciever;
	transactions.Date = Transaction::getCurrentDateTime();
	CheckOut(reciever);
	//}


}


bool User::checkSuspendedAccounts(string Reciever)
{
	return  System::getUser(Reciever)->getSuspended();

}


void User::ViewHistory()
{
	if (History.empty()) {
		cout << "There is no transaction made\n";
		return;
	}
	else {
		cout << "Your Transaction History: " << endl << "**************\n";

		for (Transaction t : History) {
			t.DisplayTransactionData();
		}
	}
}




// display out the message to enter username and amount - Entering username and amount in system



bool User::CheckBalance(double amount)
{
	return(ViewCurrentBalance() >= amount || (amount > 0));
}


void User::CheckOut(string reciever)
{
	DATE TransactionDate = transactions.getCurrentDateTime();
	//string T;




	cout << "Receiver: " << reciever << endl;
	cout << "Paid Amount: " << transactions.getAmount() << endl;
	cout << "Time: " << TransactionDate.hour << ":" << TransactionDate.min << endl;
	cout << "Date: " << TransactionDate.month << "/" << TransactionDate.day << "/" << TransactionDate.year << endl;


	/*while (T != "1" && T != "0" || T.length() != 1) {
		cout << "confirm transaction" << endl << "press 1 to confirm / 0 to delete transaction\n";
		cin >> T;

		if (T == "1")
		{
*/

	User* Reciever = System::getUser(reciever);


	double SenderNewBalance = ViewCurrentBalance() - transactions.getAmount();

	double RecieverNewBalance = Reciever->ViewCurrentBalance() + transactions.getAmount();

	BalanceAfterTransaction(SenderNewBalance);


	Reciever->BalanceAfterTransaction(RecieverNewBalance);

	History.push_back(transactions);

	Reciever->History.push_back(transactions);
	System::allTransactions.push_back(transactions);


	//	}

	//	else if (T == "0")
	//	{
	//		exit; //redirect to home page
	//	}
	//	else cout << "invalid choice\n";

	//}
}







void User::RequestMoney(string& sender, double amount) {

	//bool T;

	map<string, User>::iterator R;
	R = System::allUsers.find(sender);
	User* FindingUser = &R->second;

	//if (R == System::allUsers.end()) {
	//	cout << "The User is not found" << endl << "Do you want to continue? press 1 / 0 to exit";
	//	cin >> T;
	//	if (T == 1)
	//	{
	//		cin >> sender;
	//		cin >> amount;
	//		RequestMoney(sender, amount);
	//	}
	//	else
	//	{
	//		exit; //redirect to home page 
	//	}
	//}


	//else if (checkSuspendedAccounts(sender))
	//{
	//	cout << "This account was inactive" << endl << "Do you want to continue? press 1 / 0 to exit";
	//	cin >> T;
	//	if (T == 1) {
	//		cin >> sender;
	//		cin >> amount;
	//		RequestMoney(sender, amount);
	//	}
	//	else
	//	{
	//		exit; //redirect to home page
	//	}
	//}
	//else if (FindingUser->getUserName() == UserName)
	//{
	//	cout << "You can not send request to yourself\n";
	//	cout << "Do you want to continue? press 1 / 0 to exit";
	//	cin >> T;
	//	if (T == 1) {
	//		cin >> sender;
	//		cin >> amount;
	//		RequestMoney(sender, amount);
	//	}
	//	else
	//	{
	//		exit; //redirect to home page
	//	}
	//}


	//else
	//{


	cout << "Request is sent successfully\n";
	transactions.setAmount(amount);
	transactions.SetSender(FindingUser->getUserName());
	transactions.reciever = System::loggedInUser->getUserName();
	System::allPendingRequests.push_back(transactions);
	FindingUser->pendingRequests.push_back(transactions);
	// display out pending request in system
//}



}




void User::acceptRequest(Transaction transactions) {
	transactions.Date = Transaction::getCurrentDateTime();
	double newBalanceOfReciever = balance - transactions.getAmount();
	BalanceAfterTransaction(newBalanceOfReciever);



	User* FindingUser = System::getUser(transactions.getReciever());

	double newBalanceOfSender = FindingUser->ViewCurrentBalance() + transactions.getAmount();
	FindingUser->BalanceAfterTransaction(newBalanceOfSender);

	cout << "transaction completed successfully";

	History.push_back(transactions);
	FindingUser->History.push_back(transactions);
	System::allTransactions.push_back(transactions);
	System::allPendingRequests.erase(
		remove(System::allPendingRequests.begin(), System::allPendingRequests.end(), transactions),
		System::allPendingRequests.end());
	pendingRequests.erase(
		remove(pendingRequests.begin(), pendingRequests.end(), transactions),
		pendingRequests.end());

}

void User::addTransactionToHistory(Transaction transaction)
{

	History.push_back(transaction);

}

void User::Reject(Transaction transactions)
{
	System::allPendingRequests.erase(
		remove(System::allPendingRequests.begin(), System::allPendingRequests.end(), transactions),
		System::allPendingRequests.end());
	pendingRequests.erase(
		remove(pendingRequests.begin(), pendingRequests.end(), transactions),
		pendingRequests.end());
}

void User::addPendingRequest(Transaction transaction)
{
	pendingRequests.push_back(transaction);

}

string User::serializeToString() const
{
	ostringstream oss;
	oss << UserName << "|" << Password << "|";
	oss << std::fixed << std::setprecision(3) << balance << "|";

	oss << suspended << "\n";

	for (const auto& transaction : History) {
		if (transaction.serializeToString() != "EMPTY") { // Skip empty transactions
			oss << "History:" << transaction.serializeToString() << "\n"; // Add "History:" prefix
		}
	}

	return oss.str();
}

User User::deserializeFromString(const string& str)
{
	istringstream iss(str);
	string token;

	// Read UserName
	getline(iss, token, '|');
	string userName = token;
	if (userName.substr(0, 8) != "History:")
	{

		// Read Password
		getline(iss, token, '|');
		string password = token;

		bool sus = false;

		// Read balance
		getline(iss, token, '|');
		double balance = stod(token);

		getline(iss, token, '|');
		if (token == "true" || token == "1" || token == "TRUE") {
			sus = true;
		}



		User user(userName, password, balance, sus);

		// Read remaining lines for History
		while (getline(iss, token)) {
			if (!token.empty()) {
				if (token.find("History:") == 0) {
					string historyData = token.substr(8); // Extract the transaction part
					if (historyData != "EMPTY") { // Skip empty transactions
						Transaction historyTransaction = Transaction::deserializeFromString(historyData);
						user.addTransactionToHistory(historyTransaction);
					}
				}
			}
		}
		return user;

	}
	else {
		User user("Not good user", "-500", 0, true);
		return user;
	}

}




//

void User::viewPendingRequests() {
	cout << "Pending requests for User: " << UserName << endl;
	if (pendingRequests.empty()) {
		cout << "No pending requests." << endl;
	}
	else
	{
		while (!pendingRequests.empty()) {
			int i = 1;
			Transaction request = pendingRequests.front(); // Get the front element of the queue

			cout << "Request " << (i) << ": Sender: " << request.getReciever() << ", Amount: " << request.getAmount() << endl;
			cout << "Do you want to Accept(A) or Decline(D) this request? (A/D): ";
			char choice;
			cin >> choice;
			if (choice == 'A' || choice == 'a') {
				acceptRequest(pendingRequests.front());

				cout << "Request accepted." << endl;
			}

			else if (choice == 'D' || choice == 'd') {
				pendingRequests.pop_front();
				cout << "Request declined." << endl;
			}

			i++;

		}
		if (pendingRequests.empty()) {
			cout << "No more pending requests." << endl;
		}

	}
}


User::~User(void) {

}
