#pragma once
#include<iostream>
#include <iomanip>
#include <sstream>
#include"System.h"
#include "Admin.h"
#include <iterator>
#include"Transaction.h"
#include"User.h"
#include<SFML/Graphics.hpp>
#include<cryptopp/md5.h>
#include<cryptopp/hex.h>
#include<cryptopp/cryptlib.h>

using namespace CryptoPP;
using namespace std;
using namespace sf;


Admin ali("Madian", "123456");
User omar("omar", "123123", 402.279);
User amr("amr", "123123", 999999);
User osama("osama", "123123", 999999);

RenderWindow window(sf::VideoMode(1200, 800), "Digital Wallet System", Style::Default);

Font rokebFint, britanicFont, berlinSansFont;
Texture headertexture, button_texture, background_texture, darkbackground_texture, text_field_texture
, background2_texture, home_icon_texture, add_user_texture, login_icon_texture, background_frame_texture, wallet_icon_texture, wallet_icon_2_texture, person_texture
, remove_user_texture, suspend_user_texture, reactivate_user_texture, edit_user_texture, transiction_history_texture, user_history_texture, request_texture,
logout_texture, setting_texture, profile_edit_texture, messages_texture, admin_icon_texture,
yes_texture, no_texture, back_texture, user_icon_texture, send_texture, balance_texture;


Sprite background, background2, wallet_icon, wallet_icon_2, login_icon, add_user, remove_user, suspend_user, reactivate_user, edit_user,
logout, transiction_history, user_history, request, send, message, home_icon, person, admin_icon, user_icon,
yes, no, back, balance, setting, profile_edit;


struct half
{
	Sprite half_background;
	Sprite frame_background;
	Sprite textfiled_1;
	Sprite textfiled_2;
	Sprite textfiled_3;

	Sprite button_1;
	Sprite button_2;
	Sprite button_3;
	Text text1, text2, text3, text4, text5, text6, text7, text8, text9, text10, text11;
	bool isTextField1Active, isTextField2Active;


	//int size_of_arr = 100;
	Sprite* textfiled_arr_1;
	Sprite* textfiled_arr_2;
	Sprite* textfiled_arr_3;
	Sprite* textfiled_arr_4;

	Sprite* frame_background_arr;
	Sprite* button_1_arr;
	Sprite* button_2_arr;

	Text* text_arr_1;
	Text* text_arr_2;
	Text* text_arr_3;
	Text* text_arr_4;
	Text* text_arr_5;
	Text* text_arr_6;
	Text* text_arr_7;
	Text* text_arr_8;
	

};
struct halfvec
{
	sf::Sprite half_background;
	sf::Sprite frame_background;
	sf::Sprite textfiled_1;
	sf::Sprite textfiled_2;
	sf::Sprite textfiled_3;

	sf::Sprite button_1;
	sf::Sprite button_2;
	sf::Sprite button_3;
	sf::Text text1, text2, text3, text4, text5, text6, text7, text8, text9, text10, text11;
	bool isTextField1Active, isTextField2Active;

	std::vector<sf::Sprite> textfiled_arr_1;
	std::vector<sf::Sprite> textfiled_arr_2;
	std::vector<sf::Sprite> textfiled_arr_3;
	std::vector<sf::Sprite> textfiled_arr_4;

	std::vector<sf::Sprite> frame_background_arr;
	std::vector<sf::Sprite> button_1_arr;
	std::vector<sf::Sprite> button_2_arr;

	std::vector<sf::Text> text_arr_1;
	std::vector<sf::Text> text_arr_2;
	std::vector<sf::Text> text_arr_3;
	std::vector<sf::Text> text_arr_4;
	std::vector<sf::Text> text_arr_5;
	std::vector<sf::Text> text_arr_6;
	std::vector<sf::Text> text_arr_7;
	std::vector<sf::Text> text_arr_8;
	
};

void texturesandfonts();

void handleButtonInteraction(sf::Sprite& buttonSprite)
{
	// Check if the mouse cursor is within the bounds of the button sprite
	sf::Vector2f mousePosition = sf::Vector2f(sf::Mouse::getPosition(window));
	sf::FloatRect buttonBounds = buttonSprite.getGlobalBounds();

	if (buttonBounds.contains(mousePosition))
	{
		// Increase the scale when the mouse is over the button
		buttonSprite.setScale(1.1f, 1.1f);
	}
	else
	{
		// Reset the scale when the mouse is not over the button
		buttonSprite.setScale(1.0f, 1.0f);
	}
}

// Function to handle text field interaction
void handleTextFieldInteraction(sf::Sprite& textFieldSprite, sf::Event& event, bool& typing)
{
	// Check if the mouse cursor is within the bounds of the text field sprite
	sf::Vector2f mousePosition = sf::Vector2f(sf::Mouse::getPosition(window));
	sf::FloatRect textFieldBounds = textFieldSprite.getGlobalBounds();

	if (textFieldBounds.contains(mousePosition))
	{
		// Handle events for the text field
		if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
		{
			// Start typing when left mouse button is pressed inside the text field
			typing = true;
		}
	}
	else
	{
		// Stop typing when the mouse is outside the text field
		typing = false;
	}
}




////////////////////////////////////////////////////////////
//******************User*********************************//
void user(User& ali);
void user_set(half& h1, User& ali);
void user_draw(half& h1);
////////////////////////////////////////////////////////////
void User_login();
void user_login_draw(half& h1);
void user_login_set(half& h1);
////////////////////////////////////////////////////////////
void user_send(User& ali);
void user_send_set(half& h1, User& ali);
void user_send_draw(half& h1);
////////////////////////////////////////////////////////////
void user_request(User& ali);
void user_request_set(half& h1, User& ali);
void user_request_draw(half& h1);
////////////////////////////////////////////////////////////
void user_messeges(User& ali);
void user_messeges_set(halfvec& h1, User& ali);
void user_messeges_draw(halfvec& h1);
////////////////////////////////////////////////////////////
void user_transactions(User& ali);
void user_transactions_set(half& h1, User& ali);
void user_transactions_draw(half& h1);
////////////////////////////////////////////////////////////
void user_edit_profile(User& ali);
void user_edit_profile_set(half& h1, User& ali);
void user_edit_profile_draw(half& h1);
////////////////////////////////////////////////////////////
void user_edit_username(User& ali);
void user_edit_username_set(half& h1, User& ali);
void user_edit_username_draw(half& h1);
////////////////////////////////////////////////////////////
void user_edit_password(User& ali);
void user_edit_password_set(half& h1, User& ali);
void user_edit_password_draw(half& h1);
////////////////////////////////////////////////////////////
//******************Admin*********************************//
void admin(Admin& ali);
void Admin_set(half& h1, Admin& ali);
void Admin_draw(half& h1);
////////////////////////////////////////////////////////////
void Admin_login();
void admin_login_set(half& h1);
void admin_login_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_add_user(Admin& ali);
void admin_add_user_set(half& h1);
void admin_add_user_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_edit_user(Admin& ali);
void admin_edit_user_set(half& h1);
void admin_edit_user_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_edit_username_of_user(Admin& ali);
void admin_edit_username_of_user_set(half& h1);
void admin_edit_username_of_user_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_edit_password_of_user(Admin& ali);
void admin_edit_password_of_user_set(half& h1);
void admin_edit_password_of_user_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_edit_balance_of_user(Admin& ali);
void admin_edit_balance_of_user_set(half& h1);
void admin_edit_balance_of_user_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_suspend_user(Admin& ali);
void admin_suspend_user_set(half& h1);
void admin_suspend_user_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_reactivate_user(Admin& ali);
void admin_reactivate_user_set(half& h1);
void admin_reactivate_user_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_remove_user(Admin& ali);
void admin_remove_user_set(half& h1);
void admin_remove_user_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_all_transactions(Admin& ali);
void admin_all_transactions_set(half& h1, Admin& ali);
void admin_all_transactions_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_all_users(Admin& ali);
void admin_all_users_set(half& h1);
void admin_all_users_draw(half& h1);
////////////////////////////////////////////////////////////
void admin_User_transactions(Admin& ali, User& omar);
void admin_User_transactions_set(half& h1, Admin& ali, User& omar);
void admin_User_transactions_draw(half& h1, User& omar);
///////////////////////////////////////////////////////////
//******************Home & signup************************//
void Signup();
void signup_set(half& h1);
void signup_draw(half& h1);
////////////////////////////////////////////////////////////
void Home();
void home_set(half& h1);
void home_draw(half& h1);
bool isNumeric(const std::string& str) {
	return !str.empty() && std::all_of(str.begin(), str.end(), [](char c) {
		return std::isdigit(c) || c == '.';
		});
}


////////////////////////////////////////////////////////////
//******************Main*********************************//
void main() {
	//User omar("omar", "123123", 402.279);
	//System::allUsers["omar"] = omar;
	{
		texturesandfonts();
		Transaction t1("amr", "1st recive", 20);
		Transaction t2("send2", "amr", 4231.25);
		Transaction t3("amr", "3rd recive", 31564);
		Transaction t4("amr", "4th message", 8976);
		Transaction t5("send5", "amr", 2525);

		Transaction t6("omar", "1st recive", 20000);
		Transaction t7("send2", "omar", 4231.25);
		Transaction t8("omar", "3rd recive", 31564);
		Transaction t9("omar", "4th message", 8976);
		Transaction t10("send5", "omar", 2525);

		Transaction t11("osama", "1st recive", 20000);
		Transaction t12("send2", "osama", 4231.25);
		Transaction t13("osama", "3rd recive", 31564);
		Transaction t14("osama", "4th message", 8976);
		Transaction t15("send5", "osama", 2525);

		DATE d1, d2;
		d1.day = 28; d1.month = 4; d1.year = 2003;
		d1.hour = 9; d1.min = 30;

		d2.day = 4; d2.month = 9; d2.year = 2003;
		d2.hour = 6; d2.min = 45;

		t1.Date = d1;
		t2.Date = d2;
		t3.Date = d1;
		t4.Date = d2;
		t5.Date = d1;

		t6.Date = d1;
		t7.Date = d2;
		t8.Date = d1;
		t9.Date = d2;
		t10.Date = d1;

		t11.Date = d1;
		t12.Date = d2;
		t13.Date = d1;
		t14.Date = d2;
		t15.Date = d1;


		omar.pendingRequests.push_back(t5);
		omar.pendingRequests.push_back(t1);
		omar.pendingRequests.push_back(t2);
		omar.pendingRequests.push_back(t3);
		omar.pendingRequests.push_back(t4);

		/*omar.pendingRequests.push_back(t5);
		omar.pendingRequests.push_back(t4);
		omar.pendingRequests.push_back(t3);
		omar.pendingRequests.push_back(t2);
		omar.pendingRequests.push_back(t1);*/

		omar.History.push_back(t6);
		omar.History.push_back(t7);
		omar.History.push_back(t8);
		omar.History.push_back(t9);
		omar.History.push_back(t10);

		amr.History.push_back(t1);
		amr.History.push_back(t2);
		amr.History.push_back(t3);
		amr.History.push_back(t4);
		amr.History.push_back(t5);

		osama.History.push_back(t11);
		osama.History.push_back(t12);
		osama.History.push_back(t13);
		osama.History.push_back(t14);
		osama.History.push_back(t15);

		System::allTransactions.push_back(t5);
		System::allTransactions.push_back(t4);
		System::allTransactions.push_back(t3);
		System::allTransactions.push_back(t2);
		System::allTransactions.push_back(t1);

		System::allUsers[omar.UserName] = omar;
		System::allUsers[amr.UserName] = amr;
		System::allUsers[osama.UserName] = osama;
		System::allUsers[omar.UserName] = omar;
		System::allUsers[amr.UserName] = amr;
		System::allUsers[osama.UserName] = osama;
	}
	System::readUsersFromFile();
	System::readAllTransactions();
	System::readPendingRequests();
	for (Transaction& t : System::allTransactions)
	{
		//Get sender and receiver from the transaction
		string senderName = t.getSender();
		string receiverName = t.getReciever();

		//Get sender user from the system
		User* sender = System::getUserForTrans(senderName);
		if (sender == nullptr) {

			continue; // Skip to the next transaction
		}

		// Get receiver user from the system
		User* receiver = System::getUserForTrans(receiverName);
		if (receiver == nullptr) {

			continue; // Skip to the next transaction
		}

		// Add transaction to sender's and receiver's history
		sender->addTransactionToHistory(t);
		receiver->addTransactionToHistory(t);

	}
	
	for (Transaction& t : System::allPendingRequests)
	{
		// Get sender and receiver from the transaction
		string senderName = t.getSender();
		string receiverName = t.getReciever();

		// Get sender user from the system
		User* sender = System::getUserForTrans(senderName);
		if (sender == nullptr) {

			continue; // Skip to the next transaction
		}

		// Get receiver user from the system
		User* receiver = System::getUserForTrans(receiverName);
		if (receiver == nullptr) {

			continue; // Skip to the next transaction
		}

		// Add transaction to sender's and receiver's history
		sender->addPendingRequest(t);
		receiver->addPendingRequest(t);

	}
	//System::loggedInUser = omar;

	//User *u =System::getUser("omar");
	
	//Signup();
	admin(ali);
	//user_edit_password(System::allUsers["mado"]);
	//user_messeges(System::allUsers["3oss"]);
	//User_login();
	//user_send(u);
	//admin_edit_username_of_user(ali);
	//admin_all_users(ali);
	System::writePendingRequests();
	System::writeAllTransactions();
	System::writeUsersToFile();

	//Home();
	//user(omar);
}




void texturesandfonts()
{
	background_texture.loadFromFile("assets/background.jpg");

	headertexture.loadFromFile("assets/header.jpg");
	button_texture.loadFromFile("assets/button.png");
	darkbackground_texture.loadFromFile("assets/background 5.jpg");
	text_field_texture.loadFromFile("assets/text.png");
	wallet_icon_texture.loadFromFile("assets/digital wallet.png");
	wallet_icon_2_texture.loadFromFile("assets/digital wallet 2.png");

	background_frame_texture.loadFromFile("assets/header 2.png");
	login_icon_texture.loadFromFile("assets/login icon.png");

	add_user_texture.loadFromFile("assets/add.png");
	remove_user_texture.loadFromFile("assets/remove user.png");
	suspend_user_texture.loadFromFile("assets/suspend.png");
	reactivate_user_texture.loadFromFile("assets/reactivate.png");
	edit_user_texture.loadFromFile("assets/edit.png");

	transiction_history_texture.loadFromFile("assets/transaction history.png");
	user_history_texture.loadFromFile("assets/user history.png");

	request_texture.loadFromFile("assets/request.png");
	send_texture.loadFromFile("assets/send money.png");
	messages_texture.loadFromFile("assets/messages.png");

	home_icon_texture.loadFromFile("assets/home.png");
	background2_texture.loadFromFile("assets/background 6 1.jpg");
	person_texture.loadFromFile("assets/person.png");

	admin_icon_texture.loadFromFile("assets/admin 2.png");
	user_icon_texture.loadFromFile("assets/user.png");
	balance_texture.loadFromFile("assets/balance.png");
	setting_texture.loadFromFile("assets/setting.png");
	profile_edit_texture.loadFromFile("assets/profile.png");
	logout_texture.loadFromFile("assets/logout.png");
	back_texture.loadFromFile("assets/back.png");
	yes_texture.loadFromFile("assets/yes.png");
	no_texture.loadFromFile("assets/no.png");
	//fonts
	rokebFint.loadFromFile("fonts/ROCKEB.ttf");
	britanicFont.loadFromFile("fonts/BRITANIC.ttf");
	berlinSansFont.loadFromFile("fonts/BRLNSR.ttf");

}

void User_login()
{
	//texturesandfonts();
	half h1;
	user_login_set(h1);

	std::string username, password; // Variables to store entered username and password
	
		sf::Text enteredUsername, enteredPassword;
		enteredUsername.setFont(rokebFint);
		enteredPassword.setFont(rokebFint);
		enteredUsername.setFillColor(Color::Black);
		enteredPassword.setFillColor(Color::Black);
		enteredUsername.setCharacterSize(21);
		enteredPassword.setCharacterSize(25);
		enteredUsername.setPosition(690, 255);
		enteredPassword.setPosition(690, 335);
	
	//wrong
	
		bool invalidboolen=false;
		Text invalidinput;
		invalidinput.setFont(britanicFont);
		invalidinput.setFillColor(Color::Red);
		invalidinput.setCharacterSize(25);
		invalidinput.setPosition(630, 50);
		invalidinput.setString("Wrong Username Or Password\n Please try again");
	
	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = h1.half_background.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis
	float finalButton2YPosition = 620; // Final position for button2 on the y-axis
	float finalButton3YPosition = 620; // Final position for button3 on the y-axis
	float finalText3YPosition = 575; // Final position for text3 on the y-axis
	float finalText7YPosition = 625; // Final position for text7 on the y-axis
	float finalText8YPosition = 625; // Final position for text8 on the y-axis
	float finalText9YPosition = 575; // Final position for text9 on the y-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions
	float distanceToMoveButton2Y = finalButton2YPosition - initialYPosition;
	float distanceToMoveButton3Y = finalButton3YPosition - initialYPosition;
	float distanceToMoveText3Y = finalText3YPosition - initialYPosition;
	float distanceToMoveText7Y = finalText7YPosition - initialYPosition;
	float distanceToMoveText8Y = finalText8YPosition - initialYPosition;
	float distanceToMoveText9Y = finalText9YPosition - initialYPosition;

	// Calculate the time needed for the y-axis animations based on the speed
	float animationTimeY = std::max({ std::abs(distanceToMoveButton2Y), std::abs(distanceToMoveButton3Y),
									  std::abs(distanceToMoveText3Y), std::abs(distanceToMoveText7Y),
									  std::abs(distanceToMoveText8Y), std::abs(distanceToMoveText9Y) }) / animationSpeedY;

	// Create a clock to measure time
	sf::Clock clock;
	sf::String enteredText; // Stores the text entered by the user
	bool isUsernameInputActive = false;
	bool isPasswordInputActive = false;
	//cout << System::allUsers["mamadou"].UserName<< System::allUsers["mamadou"].Password;
	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_1.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					isPasswordInputActive = false;
				}

				// Check if mouse clicked on password input field
				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isPasswordInputActive = true;
				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

				if (isPasswordInputActive) {
					if (event.text.unicode == '\b' && !password.empty()) { // Backspace
						password.pop_back();
					}
					else if (event.text.unicode < 128) {
						password += static_cast<char>(event.text.unicode);
					}
					enteredPassword.setString(std::string(password.size(), '*'));
				}
			}
			if (true) {
				if (wallet_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					wallet_icon.setScale(0.22, 0.22); // Scale up
				else
					wallet_icon.setScale(0.2, 0.2); // Return to original scale

				if (login_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					login_icon.setScale(0.22, 0.22); // Scale up
				else
					login_icon.setScale(0.2, 0.2);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_1.setScale(0.105, 0.117);
					h1.text6.setCharacterSize(25);

				}
				else
				{
					h1.button_1.setScale(0.1, 0.1);
					h1.text6.setCharacterSize(23);

				}

				if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_2.setScale(0.105, 0.117);
					h1.text7.setCharacterSize(25);

				}
				else
				{
					h1.button_2.setScale(0.1, 0.1);
					h1.text7.setCharacterSize(23);

				}
				if (h1.button_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_3.setScale(0.105, 0.117);
					h1.text8.setCharacterSize(25);

				}
				else
				{
					h1.button_3.setScale(0.1, 0.1);
					h1.text8.setCharacterSize(23);

				}


				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(44);// Scale up
				else
					h1.text1.setCharacterSize(40); // Return to original scale

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(44); // Scale up
				else
					h1.text2.setCharacterSize(40); // Return to original scale


				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(24);	// Scale up
				else
					h1.text3.setCharacterSize(22);


				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(24);

				else
					h1.text9.setCharacterSize(22);


				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(22);

				else
					h1.text4.setCharacterSize(20);

				if (h1.text5.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text5.setCharacterSize(22);

				else
					h1.text5.setCharacterSize(20);

			}
			if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return Admin_login();
			}


			if (h1.button_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return Signup();
			}
			if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				if (System::Login(username, password)) {


					window.clear();
					window.clear();
					invalidboolen = false;
					return user(System::allUsers[username]);
				}
				else  {
					invalidboolen = true;
					username = "";
					password = "";
					enteredPassword.setString(std::string(password.size(), '*'));
					enteredUsername.setString(username);
					
				}
			}
		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		user_login_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.half_background.setPosition(newXPosition, initialPosition.y);
			h1.text1.setPosition(newXPosition + 100, 280); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 100, 350); // Adjust position of text2
			wallet_icon.setPosition(newXPosition + 150, 150); // Adjust position of wallet_icon
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.half_background.setPosition(finalXPosition, initialPosition.y);
			h1.text1.setPosition(finalXPosition + 100, 280); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 100, 350); // Adjust position of text2
			wallet_icon.setPosition(finalXPosition + 150, 150); // Adjust position of wallet_icon
		}

		// Calculate the new positions of buttons and texts based on elapsed time for y-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeY)
		{
			float elapsedTimeY = clock.getElapsedTime().asSeconds();
			float newButton2YPosition = initialYPosition + (distanceToMoveButton2Y * (elapsedTimeY / animationTimeY));
			h1.button_2.setPosition(870, newButton2YPosition);

			float newButton3YPosition = initialYPosition + (distanceToMoveButton3Y * (elapsedTimeY / animationTimeY));
			h1.button_3.setPosition(580, newButton3YPosition);

			float newText3YPosition = initialYPosition + (distanceToMoveText3Y * (elapsedTimeY / animationTimeY));
			h1.text3.setPosition(890, newText3YPosition);

			float newText7YPosition = initialYPosition + (distanceToMoveText7Y * (elapsedTimeY / animationTimeY));
			h1.text7.setPosition(925, newText7YPosition);

			float newText8YPosition = initialYPosition + (distanceToMoveText8Y * (elapsedTimeY / animationTimeY));
			h1.text8.setPosition(670, newText8YPosition);

			float newText9YPosition = initialYPosition + (distanceToMoveText9Y * (elapsedTimeY / animationTimeY));
			h1.text9.setPosition(625, newText9YPosition);
		}
		else
		{
			// Animation for y-axis transition is complete, set the final positions of buttons and texts
			h1.button_2.setPosition(870, finalButton2YPosition);
			h1.button_3.setPosition(580, finalButton3YPosition);
			h1.text3.setPosition(890, finalText3YPosition);
			h1.text7.setPosition(925, finalText7YPosition);
			h1.text8.setPosition(670, finalText8YPosition);
			h1.text9.setPosition(625, finalText9YPosition);
		}

		// Draw the half_background sprite
		window.draw(h1.half_background);

		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(wallet_icon);
		window.draw(h1.button_2);
		window.draw(h1.button_3);
		window.draw(h1.text3);
		window.draw(h1.text7);
		window.draw(h1.text8);
		window.draw(h1.text9);
		if (invalidboolen)
			window.draw(invalidinput);
		window.draw(enteredUsername);
		window.draw(enteredPassword);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void user_login_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	wallet_icon.setTexture(wallet_icon_texture);
	wallet_icon.setScale(0.2, 0.2);
	wallet_icon.setPosition(150, 150);

	login_icon.setTexture(login_icon_texture);
	login_icon.setScale(0.2, 0.2);
	login_icon.setPosition(775, 120);

	h1.half_background.setTexture(darkbackground_texture);
	h1.half_background.setPosition(-500, 0);
	h1.half_background.setScale(0.25, 0.2);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.1, 0.1);
	h1.button_1.setPosition(720, 420);

	h1.button_2.setTexture(button_texture);
	h1.button_2.setScale(0.1, 0.1);
	h1.button_2.setPosition(870, 620);

	h1.button_3.setTexture(button_texture);
	h1.button_3.setScale(0.1, 0.1);
	h1.button_3.setPosition(580, 620);

	h1.text1.setString("Welcome,to");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(100, 280);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("D wallet");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(100, 350);

	h1.text3.setString("You are not a User ?");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(22);
	h1.text3.setPosition(890, 575);
	h1.text3.setFillColor(sf::Color::Black);

	h1.text4.setString("Username ");
	h1.text4.setCharacterSize(20);
	h1.text4.setPosition(580, 255);
	h1.text4.setFillColor(sf::Color::White);
	h1.text4.setFont(britanicFont);

	h1.text5.setString("Password");
	h1.text5.setFont(britanicFont);
	h1.text5.setCharacterSize(20);
	h1.text5.setPosition(580, 335);
	h1.text5.setFillColor(sf::Color::White);

	h1.text6.setString("Login");
	h1.text6.setFont(berlinSansFont);
	h1.text6.setCharacterSize(23);
	h1.text6.setPosition(810, 425);
	h1.text6.setFillColor(sf::Color::White);

	h1.text7.setString("Login as Admin");
	h1.text7.setFont(berlinSansFont);
	h1.text7.setCharacterSize(20);
	h1.text7.setPosition(925, 625);

	h1.text8.setString("Sign up");
	h1.text8.setFont(berlinSansFont);
	h1.text8.setCharacterSize(21);
	h1.text8.setPosition(670, 625);

	h1.text9.setString("New to d wallet ?");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(22);
	h1.text9.setPosition(625, 575);
	h1.text9.setFillColor(sf::Color::Black);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.25, 1.2);
	h1.frame_background.setPosition(520, 60);

	h1.textfiled_1.setTexture(text_field_texture);
	h1.textfiled_1.setScale(0.15, 0.1);
	h1.textfiled_1.setPosition(680, 250);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.15, 0.1);
	h1.textfiled_2.setPosition(680, 330);
}
void user_login_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(wallet_icon);
	window.draw(login_icon);
	window.draw(h1.text1);
	window.draw(h1.text2);

	window.draw(h1.text3);
	window.draw(h1.textfiled_1);
	window.draw(h1.textfiled_2);
	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.button_1);
	window.draw(h1.button_2);
	window.draw(h1.button_3);
	window.draw(h1.text4);
	window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);
	window.draw(h1.text9);
}

void Admin_login()
{
	//texturesandfonts();
	half h1;
	admin_login_set(h1);
	std::string username, password; // Variables to store entered username and password

	sf::Text enteredUsername, enteredPassword;
	enteredUsername.setFont(rokebFint);
	enteredPassword.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredPassword.setFillColor(Color::Black);
	enteredUsername.setCharacterSize(21);
	enteredPassword.setCharacterSize(25);
	enteredUsername.setPosition(690, 255);
	enteredPassword.setPosition(690, 335);
	/////////////////////////////////////////////////
	//wrong
	bool invalidboolen = false;
	Text invalidinput;
	invalidinput.setFont(britanicFont);
	invalidinput.setFillColor(Color::Red);
	invalidinput.setCharacterSize(25);
	invalidinput.setPosition(630, 50);
	invalidinput.setString("Wrong Username Or Password\n Please try again");

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = h1.half_background.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis
	float finalButton2YPosition = 620; // Final position for button2 on the y-axis
	float finalButton3YPosition = 620; // Final position for button3 on the y-axis
	float finalText3YPosition = 625; // Final position for text3 on the y-axis
	float finalText7YPosition = 625; // Final position for text7 on the y-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions
	float distanceToMoveButton2Y = finalButton2YPosition - initialYPosition;
	float distanceToMoveButton3Y = finalButton3YPosition - initialYPosition;
	float distanceToMoveText3Y = finalText3YPosition - initialYPosition;
	float distanceToMoveText7Y = finalText7YPosition - initialYPosition;

	// Calculate the time needed for the y-axis animations based on the speed
	float animationTimeY = std::max({ std::abs(distanceToMoveButton2Y), std::abs(distanceToMoveButton3Y),
									  std::abs(distanceToMoveText3Y), std::abs(distanceToMoveText7Y), }) / animationSpeedY;

	// Create a clock to measure time
	sf::Clock clock;
	sf::String enteredText; // Stores the text entered by the user
	bool isUsernameInputActive = false;
	bool isPasswordInputActive = false;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_1.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					isPasswordInputActive = false;
				}

				// Check if mouse clicked on password input field
				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isPasswordInputActive = true;
				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

				if (isPasswordInputActive) {
					if (event.text.unicode == '\b' && !password.empty()) { // Backspace
						password.pop_back();
					}
					else if (event.text.unicode < 128) {
						password += static_cast<char>(event.text.unicode);
					}
					enteredPassword.setString(std::string(password.size(), '*'));
				}
			}
			if (true) {
				if (wallet_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					wallet_icon.setScale(0.22, 0.22);
				else
					wallet_icon.setScale(0.2, 0.2); // Return to original scale

				if (login_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					login_icon.setScale(0.22, 0.22);
				else
					login_icon.setScale(0.2, 0.2); // Return to original scale


				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(44); // Scale up
				else
					h1.text1.setCharacterSize(40); // Return to original scale

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(44); // Scale up
				else
					h1.text2.setCharacterSize(40); // Return to original scale

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(22);

				else
					h1.text3.setCharacterSize(20);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(22);


				else
					h1.text4.setCharacterSize(20);


				if (h1.text5.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text5.setCharacterSize(22);

				else
					h1.text5.setCharacterSize(20);


				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_1.setScale(0.105, 0.11);
					h1.text6.setCharacterSize(25);

				}
				else
				{
					h1.button_1.setScale(0.1, 0.1);
					h1.text6.setCharacterSize(23);

				}
				if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_2.setScale(0.105, 0.11);
					h1.text7.setCharacterSize(22);

				}
				else
				{
					h1.button_2.setScale(0.1, 0.1);
					h1.text7.setCharacterSize(20);

				}

			}
			if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return User_login();
			}
			if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				if (username == "admin" && password == "admin") {


					window.clear();

					return admin(ali);
				}
				else {
					invalidboolen = true;
					username = "";
					password = "";
					enteredPassword.setString(std::string(password.size(), '*'));
					enteredUsername.setString(username);
					
				}
			}
		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		admin_login_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.half_background.setPosition(newXPosition, initialPosition.y);
			h1.text1.setPosition(newXPosition + 100, 280); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 100, 350); // Adjust position of text2
			wallet_icon.setPosition(newXPosition + 150, 150); // Adjust position of wallet_icon
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.half_background.setPosition(finalXPosition, initialPosition.y);
			h1.text1.setPosition(finalXPosition + 100, 280); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 100, 350); // Adjust position of text2
			wallet_icon.setPosition(finalXPosition + 150, 150); // Adjust position of wallet_icon
		}

		// Calculate the new positions of buttons and texts based on elapsed time for y-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeY)
		{
			float elapsedTimeY = clock.getElapsedTime().asSeconds();
			float newButton2YPosition = initialYPosition + (distanceToMoveButton2Y * (elapsedTimeY / animationTimeY));
			h1.button_2.setPosition(820, newButton2YPosition);


			float newText3YPosition = initialYPosition + (distanceToMoveText3Y * (elapsedTimeY / animationTimeY));
			h1.text3.setPosition(560, newText3YPosition);

			float newText7YPosition = initialYPosition + (distanceToMoveText7Y * (elapsedTimeY / animationTimeY));
			h1.text7.setPosition(875, newText7YPosition);


		}
		else
		{
			// Animation for y-axis transition is complete, set the final positions of buttons and texts
			h1.button_2.setPosition(820, finalButton2YPosition);
			h1.text3.setPosition(560, finalText3YPosition);
			h1.text7.setPosition(875, finalText7YPosition);
		}

		// Draw the half_background sprite
		window.draw(h1.half_background);

		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(wallet_icon);
		window.draw(h1.button_2);
		window.draw(h1.button_3);
		window.draw(h1.text3);
		window.draw(h1.text7);
		if (invalidboolen)
			window.draw(invalidinput);
		window.draw(enteredUsername);
		window.draw(enteredPassword);


		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void admin_login_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	wallet_icon.setTexture(wallet_icon_texture);
	wallet_icon.setScale(0.2, 0.2);
	wallet_icon.setPosition(150, 150);

	login_icon.setTexture(login_icon_texture);
	login_icon.setScale(0.2, 0.2);
	login_icon.setPosition(775, 120);

	h1.half_background.setTexture(darkbackground_texture);
	h1.half_background.setPosition(-500, 0);
	h1.half_background.setScale(0.25, 0.2);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.1, 0.1);
	h1.button_1.setPosition(720, 420);

	h1.button_2.setTexture(button_texture);
	h1.button_2.setScale(0.1, 0.1);
	h1.button_2.setPosition(820, 620);



	h1.text1.setString("Welcome,to");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(100, 280);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("D wallet");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(100, 350);

	h1.text3.setString("You are not a Admin ?");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(23);
	h1.text3.setPosition(560, 625);
	h1.text3.setFillColor(sf::Color::Black);

	h1.text4.setString("Username ");
	h1.text4.setCharacterSize(20);
	h1.text4.setPosition(580, 255);
	h1.text4.setFillColor(sf::Color::White);
	h1.text4.setFont(britanicFont);

	h1.text5.setString("Password");
	h1.text5.setFont(britanicFont);
	h1.text5.setCharacterSize(20);
	h1.text5.setPosition(580, 335);
	h1.text5.setFillColor(sf::Color::White);

	h1.text6.setString("Login");
	h1.text6.setFont(berlinSansFont);
	h1.text6.setCharacterSize(23);
	h1.text6.setPosition(810, 425);
	h1.text6.setFillColor(sf::Color::White);

	h1.text7.setString("Login as User");
	h1.text7.setFont(berlinSansFont);
	h1.text7.setCharacterSize(20);
	h1.text7.setPosition(875, 625);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.25, 1.2);
	h1.frame_background.setPosition(520, 60);

	h1.textfiled_1.setTexture(text_field_texture);
	h1.textfiled_1.setScale(0.15, 0.1);
	h1.textfiled_1.setPosition(680, 250);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.15, 0.1);
	h1.textfiled_2.setPosition(680, 330);
}
void admin_login_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(wallet_icon);
	window.draw(login_icon);
	window.draw(h1.text1);
	window.draw(h1.text2);

	window.draw(h1.text3);
	window.draw(h1.textfiled_1);
	window.draw(h1.textfiled_2);
	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.button_1);
	window.draw(h1.button_2);
	window.draw(h1.text4);
	window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
}

void Signup()
{
	//texturesandfonts();
	half h1;
	signup_set(h1);
	////////////////////


	std::string username, password; // Variables to store entered username and password

	sf::Text enteredUsername, enteredPassword;
	enteredUsername.setFont(rokebFint);
	enteredPassword.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredPassword.setFillColor(Color::Black);

	enteredUsername.setCharacterSize(21);
	enteredPassword.setCharacterSize(25);
	enteredUsername.setPosition(690, 255);
	enteredPassword.setPosition(690, 335);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = h1.half_background.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis
	float finalButton2YPosition = 700; // Final position for button2 on the y-axis
	float finalButton3YPosition = 700; // Final position for button3 on the y-axis
	float finalText3YPosition = 655; // Final position for text3 on the y-axis
	float finalText7YPosition = 705; // Final position for text7 on the y-axis
	float finalText8YPosition = 705; // Final position for text8 on the y-axis
	float finalText9YPosition = 655; // Final position for text9 on the y-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions
	float distanceToMoveButton2Y = finalButton2YPosition - initialYPosition;
	float distanceToMoveButton3Y = finalButton3YPosition - initialYPosition;
	float distanceToMoveText3Y = finalText3YPosition - initialYPosition;
	float distanceToMoveText7Y = finalText7YPosition - initialYPosition;
	float distanceToMoveText8Y = finalText8YPosition - initialYPosition;
	float distanceToMoveText9Y = finalText9YPosition - initialYPosition;

	// Calculate the time needed for the y-axis animations based on the speed
	float animationTimeY = std::max({ std::abs(distanceToMoveButton2Y), std::abs(distanceToMoveButton3Y),
									  std::abs(distanceToMoveText3Y), std::abs(distanceToMoveText7Y),
									  std::abs(distanceToMoveText8Y), std::abs(distanceToMoveText9Y) }) / animationSpeedY;

	// Create a clock to measure time
	sf::Clock clock;
	sf::String enteredText; // Stores the text entered by the user
	bool isUsernameInputActive = false;
	bool isPasswordInputActive = false;
	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {
				if (wallet_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					wallet_icon.setScale(0.22, 0.22);
				else
					wallet_icon.setScale(0.2, 0.2); // Return to original scale

				if (add_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					add_user.setScale(0.0385, 0.0385);
				else
					add_user.setScale(0.035, 0.035f); // Return to original scale


				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(44); // Scale up
				else
					h1.text1.setCharacterSize(40); // Return to original scale

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(44); // Scale up
				else
					h1.text2.setCharacterSize(40); // Return to original scale

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(22);

				else
					h1.text3.setCharacterSize(20);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(22);


				else
					h1.text4.setCharacterSize(20);


				if (h1.text5.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text5.setCharacterSize(22);

				else
					h1.text5.setCharacterSize(20);

				if (h1.text10.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text10.setCharacterSize(22);

				else
					h1.text10.setCharacterSize(20);

				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(22);


				else
					h1.text9.setCharacterSize(20);


				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_1.setScale(0.105, 0.11);
					h1.text6.setCharacterSize(25);

				}
				else
				{
					h1.button_1.setScale(0.1, 0.1);
					h1.text6.setCharacterSize(23);

				}
				if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_2.setScale(0.105, 0.11);
					h1.text7.setCharacterSize(22);

				}
				else
				{
					h1.button_2.setScale(0.1, 0.1);
					h1.text7.setCharacterSize(20);

				}
				if (h1.button_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_3.setScale(0.105, 0.11);
					h1.text8.setCharacterSize(22);

				}
				else
				{
					h1.button_3.setScale(0.1, 0.1);
					h1.text8.setCharacterSize(21);
				}

			}

			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_1.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					isPasswordInputActive = false;
				}

				// Check if mouse clicked on password input field
				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isPasswordInputActive = true;
				}
			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

				if (isPasswordInputActive) {
					if (event.text.unicode == '\b' && !password.empty()) { // Backspace
						password.pop_back();
					}
					else if (event.text.unicode < 128) {
						password += static_cast<char>(event.text.unicode);
					}
					enteredPassword.setString(std::string(password.size(), '*'));
				}
			}
			if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return User_login();
			}
			if (h1.button_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return user(omar);
			}
			if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				if (System::allUsers.find(username) != System::allUsers.end() && password.empty()) {
					cout << "Username already exist \n";


				}
				else
				{

					window.clear();
					window.clear();
					System::Register(username, password,0);
					return user(System::allUsers[username]);
				}
			}



		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites

		signup_draw(h1);


		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.half_background.setPosition(newXPosition, initialPosition.y);
			h1.text1.setPosition(newXPosition + 100, 280); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 100, 350); // Adjust position of text2
			wallet_icon.setPosition(newXPosition + 150, 150); // Adjust position of wallet_icon
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.half_background.setPosition(finalXPosition, initialPosition.y);
			h1.text1.setPosition(finalXPosition + 100, 280); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 100, 350); // Adjust position of text2
			wallet_icon.setPosition(finalXPosition + 150, 150); // Adjust position of wallet_icon
		}

		// Calculate the new positions of buttons and texts based on elapsed time for y-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeY)
		{
			float elapsedTimeY = clock.getElapsedTime().asSeconds();
			float newButton2YPosition = initialYPosition + (distanceToMoveButton2Y * (elapsedTimeY / animationTimeY));
			h1.button_2.setPosition(870, newButton2YPosition);

			float newButton3YPosition = initialYPosition + (distanceToMoveButton3Y * (elapsedTimeY / animationTimeY));
			h1.button_3.setPosition(580, newButton3YPosition);

			float newText3YPosition = initialYPosition + (distanceToMoveText3Y * (elapsedTimeY / animationTimeY));
			h1.text3.setPosition(885, newText3YPosition);

			float newText7YPosition = initialYPosition + (distanceToMoveText7Y * (elapsedTimeY / animationTimeY));
			h1.text7.setPosition(925, newText7YPosition);

			float newText8YPosition = initialYPosition + (distanceToMoveText8Y * (elapsedTimeY / animationTimeY));
			h1.text8.setPosition(630, newText8YPosition);

			float newText9YPosition = initialYPosition + (distanceToMoveText9Y * (elapsedTimeY / animationTimeY));
			h1.text9.setPosition(590, newText9YPosition);
		}
		else
		{
			// Animation for y-axis transition is complete, set the final positions of buttons and texts
			h1.button_2.setPosition(870, finalButton2YPosition);
			h1.button_3.setPosition(580, finalButton3YPosition);
			h1.text3.setPosition(885, finalText3YPosition);
			h1.text7.setPosition(925, finalText7YPosition);
			h1.text8.setPosition(630, finalText8YPosition);
			h1.text9.setPosition(590, finalText9YPosition);
		}

		// Draw the half_background sprite
		window.draw(h1.half_background);

		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(wallet_icon);
		window.draw(h1.button_2);
		window.draw(h1.button_3);
		window.draw(h1.text3);
		window.draw(h1.text7);
		window.draw(h1.text8);
		window.draw(h1.text9);
		window.draw(enteredUsername);
		window.draw(enteredPassword);

		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void signup_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.25, 1.4);
	h1.frame_background.setPosition(520, 60);

	wallet_icon.setTexture(wallet_icon_texture);
	wallet_icon.setScale(0.2, 0.2);
	wallet_icon.setPosition(150, 150);

	add_user.setTexture(add_user_texture);
	add_user.setScale(0.035, 0.035);
	add_user.setPosition(775, 140);

	h1.half_background.setTexture(darkbackground_texture);
	h1.half_background.setPosition(-500, 0);
	h1.half_background.setScale(0.25, 0.2);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.1, 0.1);
	h1.button_1.setPosition(720, 500);

	h1.button_2.setTexture(button_texture);
	h1.button_2.setScale(0.1, 0.1);
	h1.button_2.setPosition(870, 700);

	h1.button_3.setTexture(button_texture);
	h1.button_3.setScale(0.1, 0.1);
	h1.button_3.setPosition(580, 700);

	h1.text1.setString("Welcome,to");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(100, 280);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("D wallet");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(100, 350);

	h1.text3.setString("You have a User account?");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(20);
	h1.text3.setPosition(885, 655);
	h1.text3.setFillColor(sf::Color::Black);

	h1.text4.setString("Username ");
	h1.text4.setCharacterSize(20);
	h1.text4.setPosition(580, 255);
	h1.text4.setFillColor(sf::Color::White);
	h1.text4.setFont(britanicFont);

	h1.text5.setString("Password");
	h1.text5.setFont(britanicFont);
	h1.text5.setCharacterSize(20);
	h1.text5.setPosition(580, 335);
	h1.text5.setFillColor(sf::Color::White);

	h1.text6.setString("Sign Up");
	h1.text6.setFont(berlinSansFont);
	h1.text6.setCharacterSize(23);
	h1.text6.setPosition(805, 505);
	h1.text6.setFillColor(sf::Color::White);

	h1.text7.setString("Login as User");
	h1.text7.setFont(berlinSansFont);
	h1.text7.setCharacterSize(20);
	h1.text7.setPosition(925, 705);

	h1.text8.setString("Login as Admin");
	h1.text8.setFont(berlinSansFont);
	h1.text8.setCharacterSize(21);
	h1.text8.setPosition(630, 705);

	h1.text9.setString("You have a Admin account?");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(20);
	h1.text9.setPosition(590, 655);
	h1.text9.setFillColor(sf::Color::Black);

	h1.text10.setString("Balance");
	h1.text10.setFont(britanicFont);
	h1.text10.setCharacterSize(20);
	h1.text10.setPosition(580, 415);

	h1.textfiled_1.setTexture(text_field_texture);
	h1.textfiled_1.setScale(0.15, 0.1);
	h1.textfiled_1.setPosition(680, 250);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.15, 0.1);
	h1.textfiled_2.setPosition(680, 330);

	h1.textfiled_3.setTexture(text_field_texture);
	h1.textfiled_3.setScale(0.15, 0.1);
	h1.textfiled_3.setPosition(680, 410);
}
void signup_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(wallet_icon);
	window.draw(add_user);
	window.draw(h1.text1);
	window.draw(h1.text2);

	window.draw(h1.text3);
	window.draw(h1.textfiled_1);
	window.draw(h1.textfiled_2);
	window.draw(h1.textfiled_3);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.button_1);
	window.draw(h1.button_2);
	window.draw(h1.button_3);
	window.draw(h1.text4);
	window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);
	window.draw(h1.text9);
	window.draw(h1.text10);

}

void Home()

{
	//texturesandfonts();
	half h1;
	home_set(h1);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = wallet_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {
				if (wallet_icon_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					wallet_icon_2.setScale(0.6f, 0.6f); // Scale up
				else
					wallet_icon_2.setScale(0.55f, 0.55f); // Return to original scale

				if (wallet_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					wallet_icon.setScale(0.22, 0.22); // Scale up
				else
					wallet_icon.setScale(0.2, 0.2); // Return to original scale

				if (person.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					person.setScale(0.122, 0.122); // Scale up
				else
					person.setScale(0.12, 0.12); // Return to original scale

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_1.setScale(0.105, 0.11); // Scale up
					h1.text3.setCharacterSize(25);
				}
				else
				{
					h1.button_1.setScale(0.1, 0.1); // Return to original scale
					h1.text3.setCharacterSize(23);
				}
				if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_2.setScale(0.105, 0.11); // Scale up
					h1.text5.setCharacterSize(23);

				}
				else
				{
					h1.button_2.setScale(0.1, 0.1); // Return to original scale
					h1.text5.setCharacterSize(21);
				}

				if (h1.button_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
				{
					h1.button_3.setScale(0.105, 0.11); // Scale up
					h1.text4.setCharacterSize(22);
				}
				else
				{
					h1.button_3.setScale(0.1, 0.1); // Return to original scale
					h1.text4.setCharacterSize(20);
				}
				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(44); // Scale up
				else
					h1.text1.setCharacterSize(40);; // Return to original scale

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(44); // Scale up
				else
					h1.text2.setCharacterSize(40); // Return to original scale
			}
			if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return Signup();
			}
			if (h1.button_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return User_login();
			}
			if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return Admin_login();
			}
		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		home_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 265, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 290, 130); // Adjust position of text2
			wallet_icon.setPosition(newXPosition + 150, 80); // Adjust position of wallet_icon
			person.setPosition(950 - newXPosition, 80);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 265, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 290, 130); // Adjust position of text2
			wallet_icon.setPosition(finalXPosition + 150, 80); // Adjust position of wallet_icon
			person.setPosition(950, 80);

		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(wallet_icon);
		window.draw(person);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void home_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	background2.setTexture(background2_texture);
	background2.setScale(0.3, 0.28);
	background2.setPosition(0, 50);

	wallet_icon.setTexture(wallet_icon_texture);
	wallet_icon.setScale(0.2, 0.2);
	wallet_icon.setPosition(-500, 80);

	wallet_icon_2.setTexture(wallet_icon_2_texture);
	wallet_icon_2.setScale(0.55, 0.55);
	wallet_icon_2.setPosition(750, 250);

	person.setTexture(person_texture);
	person.setScale(0.12, 0.12);
	person.setPosition(950, 80);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.1, 0.1);
	h1.button_1.setPosition(200, 550);

	h1.button_2.setTexture(button_texture);
	h1.button_2.setScale(0.1, 0.1);
	h1.button_2.setPosition(350, 420);

	h1.button_3.setTexture(button_texture);
	h1.button_3.setScale(0.1, 0.1);
	h1.button_3.setPosition(50, 420);

	h1.text1.setString("Welcome to");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("D wallet");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(290, 130);

	h1.text3.setString("Sign Up");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(23);
	h1.text3.setPosition(280, 555);
	h1.text3.setFillColor(sf::Color::White);

	h1.text4.setString("Login as User");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(20);
	h1.text4.setPosition(110, 425);

	h1.text5.setString("Login as Admin");
	h1.text5.setFont(berlinSansFont);
	h1.text5.setCharacterSize(21);
	h1.text5.setPosition(400, 425);

	h1.text6.setString("Security you can trust, convenience you'll love.");
	h1.text6.setFont(berlinSansFont);
	h1.text6.setCharacterSize(24);
	h1.text6.setPosition(690, 550);

	h1.text7.setString("with your digital wallet application.");
	h1.text7.setFont(berlinSansFont);
	h1.text7.setCharacterSize(24);
	h1.text7.setPosition(730, 575);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.25, 1.2);
	h1.frame_background.setPosition(520, 60);

	/*h1.textfiled_1.setTexture(text_field_texture);
	h1.textfiled_1.setScale(0.15, 0.1);
	h1.textfiled_1.setPosition(680, 250);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.15, 0.1);
	h1.textfiled_2.setPosition(680, 330);*/
}
void home_draw(half& h1)
{
	//window.draw(background);
	window.draw(background2);
	window.draw(h1.half_background);

	window.draw(wallet_icon);
	window.draw(wallet_icon_2);
	window.draw(home_icon);
	window.draw(person);
	window.draw(h1.button_1);
	window.draw(h1.button_2);
	window.draw(h1.button_3);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text3);
	window.draw(h1.text4);
	window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);


}

void user(User& ali)

{
	//texturesandfonts();
	half h1;
	user_set(h1, ali);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = user_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {
				if (send.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					send.setScale(0.22f, 0.22f); // Scale up
				else
					send.setScale(0.2f, 0.2f); // Return to original scale

				if (request.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					request.setScale(0.22f, 0.22f); // Scale up
				else
					request.setScale(0.2f, 0.2f);

				if (message.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					message.setScale(0.11f, 0.11f); // Scale up
				else
					message.setScale(0.1f, 0.1f);

				if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					logout.setScale(0.22f, 0.22f); // Scale up
				else
					logout.setScale(0.2f, 0.2f);


				if (profile_edit.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					profile_edit.setScale(0.22f, 0.22f); // Scale up
				else
					profile_edit.setScale(0.2f, 0.2f);

				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);

				if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					transiction_history.setScale(0.22f, 0.22f); // Scale up
				else
					transiction_history.setScale(0.2f, 0.2f);

				if (user_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					user_icon.setScale(0.22f, 0.22f); // Scale up
				else
					user_icon.setScale(0.2f, 0.2f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(24); // Scale up
				else
					h1.text4.setCharacterSize(22);

				if (h1.text5.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text5.setCharacterSize(24); // Scale up
				else
					h1.text5.setCharacterSize(22);

				if (h1.text6.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text6.setCharacterSize(24); // Scale up
				else
					h1.text6.setCharacterSize(22);

				if (h1.text7.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text7.setCharacterSize(24); // Scale up
				else
					h1.text7.setCharacterSize(22);

				if (h1.text8.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text8.setCharacterSize(24); // Scale up
				else
					h1.text8.setCharacterSize(22);

				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(20); // Scale up
				else
					h1.text9.setCharacterSize(18);

				if (h1.text10.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text10.setCharacterSize(27); // Scale up
				else
					h1.text10.setCharacterSize(26);


			}
			if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return Home();
			}

			if (send.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				//window.clear();
				return user_send(ali);
			}

			if (request.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return user_request(ali);
			}

			if (message.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return user_messeges(ali);
			}

			if (profile_edit.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return user_edit_profile(ali);
			}
			if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return user_transactions(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		user_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 190, 130); // Adjust position of text2
			user_icon.setPosition(newXPosition + 50, 80);
			profile_edit.setPosition(950 - newXPosition, 80);
			h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 190, 130); // Adjust position of text2
			user_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950, 80);
			h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(user_icon);
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(h1.text3);
		window.draw(profile_edit);

		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void user_set(half& h1, User& ali)

{
	window.clear();
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);


	user_icon.setTexture(user_icon_texture);
	user_icon.setScale(0.2, 0.2);
	user_icon.setPosition(-500, 80);

	profile_edit.setTexture(profile_edit_texture);
	profile_edit.setScale(0.2, 0.2);
	profile_edit.setPosition(950, 80);

	send.setTexture(send_texture);
	send.setScale(0.2, 0.2);
	send.setPosition(260, 300);

	request.setTexture(request_texture);
	request.setScale(0.2, 0.2);
	request.setPosition(540, 300);

	message.setTexture(messages_texture);
	message.setScale(0.1, 0.1);
	message.setPosition(840, 290);

	transiction_history.setTexture(transiction_history_texture);
	transiction_history.setScale(0.2, 0.2);
	transiction_history.setPosition(400, 500);

	logout.setTexture(logout_texture);
	logout.setScale(0.2, 0.2);
	logout.setPosition(750, 500);

	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);


	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Welcome");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString(ali.UserName);
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text8.setString("Send money");
	h1.text8.setFont(berlinSansFont);
	h1.text8.setCharacterSize(22);
	h1.text8.setPosition(250, 405);
	h1.text8.setFillColor(sf::Color::Black);

	h1.text4.setString("Request money");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(22);
	h1.text4.setPosition(530, 405);
	h1.text4.setFillColor(sf::Color::Black);

	h1.text5.setString("Recived messages");
	h1.text5.setFont(berlinSansFont);
	h1.text5.setCharacterSize(22);
	h1.text5.setPosition(820, 405);
	h1.text5.setFillColor(sf::Color::Black);

	h1.text6.setString("Transictions history");
	h1.text6.setFont(berlinSansFont);
	h1.text6.setCharacterSize(22);
	h1.text6.setPosition(365, 605);
	h1.text6.setFillColor(sf::Color::Black);

	h1.text7.setString("Logout");
	h1.text7.setFont(berlinSansFont);
	h1.text7.setCharacterSize(22);
	h1.text7.setPosition(765, 605);
	h1.text7.setFillColor(sf::Color::Black);

	h1.text3.setString("Edit Profile");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(24);
	h1.text3.setPosition(950, 100);
	h1.text3.setFillColor(sf::Color::White);

	h1.text9.setString("balance");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(18);
	h1.text9.setPosition(500, 130);
	h1.text9.setFillColor(sf::Color::White);

	stringstream stream;
	stream << fixed << setprecision(2) << ali.balance;
	//stream.str() += '$';
	h1.text10.setString(stream.str() + " $");
	h1.text10.setFont(britanicFont);
	h1.text10.setPosition(588, 80);
	h1.text10.setFillColor(sf::Color::Black);
	h1.text10.setCharacterSize(26);


	h1.textfiled_1.setTexture(text_field_texture);
	if (ali.balance >= 1000000000)
		h1.textfiled_1.setScale(0.09, 0.1);
	else if (ali.balance > 1000000)
		h1.textfiled_1.setScale(0.1, 0.1);
	else
		h1.textfiled_1.setScale(0.072, 0.1);
	h1.textfiled_1.setPosition(580, 75);



	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.25, 1.2);
	h1.frame_background.setPosition(520, 60);

	/*h1.textfiled_1.setTexture(text_field_texture);
	h1.textfiled_1.setScale(0.15, 0.1);
	h1.textfiled_1.setPosition(680, 250);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.15, 0.1);
	h1.textfiled_2.setPosition(680, 330);*/
}
void user_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	//window.draw(user_icon);


	//window.draw(profile_edit);

	window.draw(h1.textfiled_1);


	//window.draw(h1.text1);
	//window.draw(h1.text2);
	//window.draw(h1.text3);
	window.draw(h1.text4);
	window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);
	window.draw(h1.text9);
	window.draw(h1.text10);

	window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);
	window.draw(balance);

}

void user_send(User& ali)

{
	//texturesandfonts();
	half h1;
	user_send_set(h1, ali);
	/////////////////////////////////
	std::string username, sendbalance; // Variables to store entered username and password

	sf::Text enteredUsername, enteredBalance;
	enteredUsername.setFont(rokebFint);
	enteredBalance.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredBalance.setFillColor(Color::Black);
	enteredUsername.setCharacterSize(21);
	enteredBalance.setCharacterSize(25);
	enteredUsername.setPosition(310, 410);
	enteredBalance.setPosition(860, 410);
	bool isUsernameInputActive = false;
	bool isBalanceInputActive = false;
	//wrong

	bool invalidboolen = false;
	Text invalidinput;
	invalidinput.setFont(britanicFont);
	invalidinput.setFillColor(Color::Red);
	invalidinput.setCharacterSize(25);
	invalidinput.setPosition(460, 700);
	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = user_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_2.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					isBalanceInputActive = false;
				}

				// Check if mouse clicked on password input field
				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isBalanceInputActive = true;
				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode == '\b' && username.empty()) { // Backspacek
						continue;
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

				if (isBalanceInputActive) {
					if (event.text.unicode == '\b' && !sendbalance.empty()) { // Backspace
						sendbalance.pop_back();
					}
					else if (event.text.unicode < 128 && (isdigit(static_cast<char>(event.text.unicode)) || event.text.unicode == '.')) {
						// Allow digits and a single decimal point
						if (event.text.unicode == '.' && sendbalance.find('.') != std::string::npos) {
							// Allow only one decimal point


						}
						else
							sendbalance += static_cast<char>(event.text.unicode);
					}
					enteredBalance.setString(sendbalance);
				}
			}
			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {

				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);

				if (send.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					send.setScale(0.22, 0.22); // Scale up
				else
					send.setScale(0.2, 0.2);

				if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					transiction_history.setScale(0.22f, 0.22f); // Scale up
				else
					transiction_history.setScale(0.2f, 0.2f);

				if (user_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					user_icon.setScale(0.22f, 0.22f); // Scale up
				else
					user_icon.setScale(0.2f, 0.2f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(26); // Scale up
				else
					h1.text4.setCharacterSize(24);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.15, 0.11); // Scale up
				else
					h1.textfiled_2.setScale(0.15, 0.1);

				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_3.setScale(0.08, 0.11); // Scale up
				else
					h1.textfiled_3.setScale(0.08, 0.1);

				if (h1.text8.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text8.setCharacterSize(26); // Scale up
				else
					h1.text8.setCharacterSize(24);

				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(20); // Scale up
				else
					h1.text9.setCharacterSize(18);

				if (h1.text10.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text10.setCharacterSize(27); // Scale up
				else
					h1.text10.setCharacterSize(26);

				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(25); // Scale up
				else
					h1.text11.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				else
					h1.button_1.setScale(0.11, 0.1);
				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{

					if(System::loggedInUser->suspended)
					{
						invalidboolen = true;
						invalidinput.setString("Your account is suspended");
						invalidinput.setFillColor(Color::Red);
					}
					if(System::loggedInUser->getUserName()==username)
					{
						invalidboolen = true;
						invalidinput.setString("You can not send money to yourself");
						invalidinput.setFillColor(Color::Red);
					}
					else if (!System::search_user(username))
					{
						invalidboolen = true;
						invalidinput.setString("Username does not exist");
						invalidinput.setFillColor(Color::Red);
					}
					else if (System::getUser(username)->suspended)
					{
						invalidboolen = true;
						invalidinput.setString("This User is suspended");
						invalidinput.setFillColor(Color::Red);
					}
					else if (stod(sendbalance) == 0)
					{
						invalidboolen = true;
						invalidinput.setString("Balance can not be zero");
						invalidinput.setFillColor(Color::Red);
					}
					else if(omar.balance-stod(sendbalance)<0)
					{

						invalidboolen = true;
						invalidinput.setString("Your Balance is not enough");
						invalidinput.setFillColor(Color::Red);
					}
					else {
						omar.Send(username, stod(sendbalance));

						invalidboolen = true;
						invalidinput.setString("Money sent Successfully");
						invalidinput.setFillColor(Color::Green);
						username = "";
						enteredUsername.setString(username);
						sendbalance = "";
						enteredBalance.setString(sendbalance);
					}
				}

			}
			if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return Home();
			}
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return user(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		user_send_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 190, 130); // Adjust position of text2
			user_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			person.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 190, 130); // Adjust position of text2
			user_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			person.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(user_icon);
		if (invalidboolen)
		{
			window.draw(invalidinput);
		}
		window.draw(enteredBalance);
		window.draw(enteredUsername);

		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void user_send_set(half& h1, User& ali)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 320);

	user_icon.setTexture(user_icon_texture);
	user_icon.setScale(0.2, 0.2);
	user_icon.setPosition(-500, 80);

	send.setTexture(send_texture);
	send.setScale(0.2, 0.2);
	send.setPosition(550, 230);

	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Welcome");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString(ali.UserName);
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text3.setString("Recipient Username");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(24);
	h1.text3.setPosition(87, 407);
	h1.text3.setFillColor(sf::Color::White);

	h1.text4.setString("Amount");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(750, 407);
	h1.text4.setFillColor(sf::Color::White);

	h1.text9.setString("balance");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(18);
	h1.text9.setPosition(500, 130);
	h1.text9.setFillColor(sf::Color::White);

	stringstream stream;
	stream << fixed << setprecision(2) << ali.balance;
	h1.text10.setString(stream.str() + " $");
	h1.text10.setFont(britanicFont);
	h1.text10.setCharacterSize(26);
	h1.text10.setPosition(588, 80);
	h1.text10.setFillColor(sf::Color::Black);


	h1.textfiled_1.setTexture(text_field_texture);
	if (ali.balance >= 1000000000)
		h1.textfiled_1.setScale(0.09, 0.1);
	else if (ali.balance > 1000000)
		h1.textfiled_1.setScale(0.1, 0.1);
	else
		h1.textfiled_1.setScale(0.072, 0.1);
	h1.textfiled_1.setPosition(580, 75);


	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.15, 0.1);
	h1.textfiled_2.setPosition(300, 400);

	h1.textfiled_3.setTexture(text_field_texture);
	h1.textfiled_3.setScale(0.08, 0.1);
	h1.textfiled_3.setPosition(850, 400);

	h1.text11.setString("Send Money");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(540, 605);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 600);
}
void user_send_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(user_icon);

	window.draw(h1.frame_background);
	window.draw(h1.button_1);

	window.draw(back);



	window.draw(h1.textfiled_1);
	window.draw(h1.textfiled_2);
	window.draw(h1.textfiled_3);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text3);
	window.draw(h1.text4);
	/*window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);*/
	window.draw(h1.text9);
	window.draw(h1.text10);
	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/
	window.draw(balance);
	window.draw(send);

}

void user_request(User& ali)

{
	//texturesandfonts();
	half h1;
	user_request_set(h1, ali);
	////////////////////////////////////
	std::string username, sendbalance; // Variables to store entered username and password

	sf::Text enteredUsername, enteredBalance;
	enteredUsername.setFont(rokebFint);
	enteredBalance.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredBalance.setFillColor(Color::Black);
	enteredUsername.setCharacterSize(21);
	enteredBalance.setCharacterSize(25);
	enteredUsername.setPosition(310, 410);
	enteredBalance.setPosition(860, 410);
	bool isUsernameInputActive = false;
	bool isBalanceInputActive = false;
	//wrong

	bool invalidboolen = false;
	Text invalidinput;
	invalidinput.setFont(britanicFont);
	invalidinput.setFillColor(Color::Red);
	invalidinput.setCharacterSize(25);
	invalidinput.setPosition(460, 700);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = user_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_2.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					isBalanceInputActive = false;
				}

				// Check if mouse clicked on password input field
				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isBalanceInputActive = true;
				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode == '\b' && username.empty()) { // Backspacek
						continue;
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

				if (isBalanceInputActive) {
					if (event.text.unicode == '\b' && !sendbalance.empty()) { // Backspace
						sendbalance.pop_back();
					}
					else if (event.text.unicode < 128 && (isdigit(static_cast<char>(event.text.unicode)) || event.text.unicode == '.')) {
						// Allow digits and a single decimal point
						if (event.text.unicode == '.' && sendbalance.find('.') != std::string::npos) {
							// Allow only one decimal point


						}
						else
							sendbalance += static_cast<char>(event.text.unicode);
					}
					enteredBalance.setString(sendbalance);
				}
			}
			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {


				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);

				if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					transiction_history.setScale(0.22f, 0.22f); // Scale up
				else
					transiction_history.setScale(0.2f, 0.2f);

				if (user_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					user_icon.setScale(0.22f, 0.22f); // Scale up
				else
					user_icon.setScale(0.2f, 0.2f);

				if (request.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					request.setScale(0.22f, 0.22f); // Scale up
				else
					request.setScale(0.2, 0.2);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);



				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(26); // Scale up
				else
					h1.text4.setCharacterSize(24);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.15, 0.11); // Scale up
				else
					h1.textfiled_2.setScale(0.15, 0.1);

				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_3.setScale(0.08, 0.11); // Scale up
				else
					h1.textfiled_3.setScale(0.08, 0.1);

				if (h1.text8.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text8.setCharacterSize(26); // Scale up
				else
					h1.text8.setCharacterSize(24);

				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(20); // Scale up
				else
					h1.text9.setCharacterSize(18);

				if (h1.text10.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text10.setCharacterSize(28); // Scale up
				else
					h1.text10.setCharacterSize(26);

				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(25); // Scale up
				else
					h1.text11.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				else
					h1.button_1.setScale(0.11, 0.1);
				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{

					if (System::loggedInUser->suspended)
					{
						invalidboolen = true;
						invalidinput.setString("Your account is suspended");
						invalidinput.setFillColor(Color::Red);
					}
					if (System::loggedInUser->getUserName() == username)
					{
						invalidboolen = true;
						invalidinput.setString("Request money to yourself");
						invalidinput.setFillColor(Color::Red);
					}
					else if (!System::search_user(username))
					{
						invalidboolen = true;
						invalidinput.setString("Username does not exist");
						invalidinput.setFillColor(Color::Red);
					}
					else if (System::getUser(username)->suspended)
					{
						invalidboolen = true;
						invalidinput.setString("This User is suspended");
						invalidinput.setFillColor(Color::Red);
					}
					else if (stod(sendbalance) == 0)
					{
						invalidboolen = true;
						invalidinput.setString("Balance can not be zero");
						invalidinput.setFillColor(Color::Red);
					}
					else {
						omar.RequestMoney(username, stod(sendbalance));

						invalidboolen = true;
						invalidinput.setString("Request Successfully");
						invalidinput.setFillColor(Color::Green);
						username = "";
						enteredUsername.setString(username);
						sendbalance = "";
						enteredBalance.setString(sendbalance);
					}
				}

			}
			if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return Home();
			}
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return user(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		user_request_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 190, 130); // Adjust position of text2
			user_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 190, 130); // Adjust position of text2
			user_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(user_icon);
		window.draw(user_icon);
		if (invalidboolen)
		{
			window.draw(invalidinput);
		}
		window.draw(enteredBalance);
		window.draw(enteredUsername);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void user_request_set(half& h1, User& ali)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 320);

	user_icon.setTexture(user_icon_texture);
	user_icon.setScale(0.2, 0.2);
	user_icon.setPosition(-500, 80);

	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);

	request.setTexture(request_texture);
	request.setScale(0.2, 0.2);
	request.setPosition(550, 230);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Welcome");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString(ali.UserName);
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text3.setString("Sender Username");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(24);
	h1.text3.setPosition(87, 407);
	h1.text3.setFillColor(sf::Color::White);

	h1.text4.setString("Amount");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(750, 407);
	h1.text4.setFillColor(sf::Color::White);

	h1.text9.setString("balance");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(18);
	h1.text9.setPosition(500, 130);
	h1.text9.setFillColor(sf::Color::White);

	stringstream stream;
	stream << fixed << setprecision(2) << ali.balance;
	h1.text10.setString(stream.str() + " $");
	h1.text10.setFont(britanicFont);
	h1.text10.setCharacterSize(26);
	h1.text10.setPosition(588, 80);
	h1.text10.setFillColor(sf::Color::Black);


	h1.textfiled_1.setTexture(text_field_texture);
	if (ali.balance >= 1000000000)
		h1.textfiled_1.setScale(0.09, 0.1);
	else if (ali.balance > 1000000)
		h1.textfiled_1.setScale(0.1, 0.1);
	else
		h1.textfiled_1.setScale(0.072, 0.1);
	h1.textfiled_1.setPosition(580, 75);


	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.15, 0.1);
	h1.textfiled_2.setPosition(300, 400);

	h1.textfiled_3.setTexture(text_field_texture);
	h1.textfiled_3.setScale(0.08, 0.1);
	h1.textfiled_3.setPosition(850, 400);

	h1.text11.setString("Send Request");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(540, 605);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 600);

}
void user_request_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);
	window.draw(request);

	window.draw(back);

	window.draw(h1.textfiled_1);
	window.draw(h1.textfiled_2);
	window.draw(h1.textfiled_3);
	window.draw(h1.button_1);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text3);
	window.draw(h1.text4);
	/*window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);*/
	window.draw(h1.text9);
	window.draw(h1.text10);
	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/
	window.draw(balance);

}

void user_messeges(User& ali)
{
	halfvec h1;
	h1.textfiled_arr_1.resize(ali.pendingRequests.size()+1);
	h1.textfiled_arr_2.resize(ali.pendingRequests.size()+1);
	h1.textfiled_arr_3.resize(ali.pendingRequests.size()+1);
	h1.frame_background_arr.resize(ali.pendingRequests.size()+1);
	h1.button_1_arr.resize(ali.pendingRequests.size()+1);
	h1.button_2_arr.resize(ali.pendingRequests.size()+1);
	h1.text_arr_1.resize(ali.pendingRequests.size()+1);
	h1.text_arr_2.resize(ali.pendingRequests.size()+1);
	h1.text_arr_3.resize(ali.pendingRequests.size()+1);
	h1.text_arr_4.resize(ali.pendingRequests.size()+1);
	h1.text_arr_5.resize(ali.pendingRequests.size()+1);
	h1.text_arr_6.resize(ali.pendingRequests.size()+1);

	//texturesandfonts();
//size_of_arr = ali.pendingRequests.size();
	user_messeges_set(h1, ali);
	///////////////////////////////
	bool invalidboolen = false;
	Text invalidinput;
	invalidinput.setFont(britanicFont);
	invalidinput.setFillColor(Color::Red);
	invalidinput.setCharacterSize(25);
	invalidinput.setPosition(200, 300);
	//invalidinput.setString("Wrong Username Or Password\n Please try again");
	stringstream stream;
	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = user_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;
	//////////////////////////////////////////////////////////////////////////////////////////

	float initialPosition2 = -1200;

	// Define the speed of the animation for x-axis transition
	float animationSpeedX2 = 1500; // pixels per second


	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX2 = finalXPosition - initialPosition2;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX2 = std::abs(distanceToMoveX2) / animationSpeedX2;
	bool test = false;
	// Create a clock to measure time
	sf::Clock clock;
	sf::View view(sf::FloatRect(0, 0, window.getSize().x, window.getSize().y));
	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {


				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);

				if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					transiction_history.setScale(0.22f, 0.22f); // Scale up
				else
					transiction_history.setScale(0.2f, 0.2f);

				if (user_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					user_icon.setScale(0.22f, 0.22f); // Scale up
				else
					user_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);

				if (message.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					message.setScale(0.11, 0.11); // Scale up
				else
					message.setScale(0.1, 0.1);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(20); // Scale up
				else
					h1.text9.setCharacterSize(18);

				if (h1.text10.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text10.setCharacterSize(27); // Scale up
				else
					h1.text10.setCharacterSize(26);

				for (int i = 0; i < ali.pendingRequests.size(); i++)
				{
					
					
					
						if (h1.textfiled_arr_1[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
							h1.textfiled_arr_1[i].setScale(0.1, 0.088); // Scale up
						else
							h1.textfiled_arr_1[i].setScale(0.1, 0.08);


						if (h1.textfiled_arr_2[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
							h1.textfiled_arr_2[i].setScale(0.08, 0.088); // Scale up
						else
							h1.textfiled_arr_2[i].setScale(0.08, 0.08);

						if (h1.text_arr_1[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
							h1.text_arr_1[i].setCharacterSize(22);// Scale up
						else
							h1.text_arr_1[i].setCharacterSize(20);

						if (h1.text_arr_2[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
							h1.text_arr_2[i].setCharacterSize(22);// Scale up
						else
							h1.text_arr_2[i].setCharacterSize(20);

						if (h1.frame_background_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
							h1.frame_background_arr[i].setScale(0.47, 0.38);// Scale up
						else
							h1.frame_background_arr[i].setScale(0.47, 0.35);

						if (h1.button_1_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
							h1.button_1_arr[i].setScale(0.1155, 0.1155);
						else
							h1.button_1_arr[i].setScale(0.105, 0.105);

						if (h1.button_2_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
							h1.button_2_arr[i].setScale(0.088, 0.088);
						else
							h1.button_2_arr[i].setScale(0.08, 0.08);

						if (h1.text_arr_3[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
							h1.text_arr_3[i].setCharacterSize(26);// Scale up
						else
							h1.text_arr_3[i].setCharacterSize(24);
					
					if (h1.button_1_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
					{
						auto it = ali.pendingRequests.rbegin();
						auto ve = h1.button_1_arr.begin();
						auto ve2 = h1.button_2_arr.begin();
						auto ve3 = h1.textfiled_arr_1.begin();
						auto ve4 = h1.textfiled_arr_2.begin();
						auto ve5 = h1.textfiled_arr_3.begin();
						auto ve6 = h1.frame_background_arr.begin();
						auto ve7 = h1.text_arr_4.begin();
						auto ve8 = h1.text_arr_3.begin();



						std::advance(ve2, i);
						std::advance(ve3, i);
						std::advance(ve4, i);
						std::advance(ve5, i);
						std::advance(ve6, i);
						advance(ve7, i);
						advance(ve8, i);
						advance(ve, i);
						advance(it, i);
					
						// }

						//auto fwd_it = std::next(ve).base();
						if (ali.balance - it->amount < 0)
						{
							invalidboolen = true;
							invalidinput.setString("No enough balance");
							invalidinput.setFillColor(Color::Red);
						}
						else if (ali.suspended)
						{
							invalidboolen = true;
							invalidinput.setString("Your account is suspended");
							invalidinput.setFillColor(Color::Red);
						}
						else if (System::search_user(it->getReciever()) && System::getUser(it->getReciever())->suspended)
						{

							invalidboolen = true;
							invalidinput.setString("this account is suspended");
							invalidinput.setFillColor(Color::Red);

						}
						else if (!System::search_user(it->getReciever()))
						{
							invalidboolen = true;
							invalidinput.setString("User not found could be deleted");
							invalidinput.setFillColor(Color::Red);
						}
						else
						{

							if (h1.button_1_arr.size() == 1)
							{

								h1.button_1_arr.clear();
								h1.button_2_arr.clear();
								h1.textfiled_arr_1.clear();
								h1.textfiled_arr_2.clear();
								h1.textfiled_arr_3.clear();
								h1.text_arr_4.clear();
								h1.text_arr_3.clear();
								h1.frame_background_arr.clear();
								ali.acceptRequest(*it);
								ali.pendingRequests.clear();
								return user(ali);
							}

							else {
								h1.button_1_arr.erase(ve);
								h1.button_2_arr.erase(ve2);
								h1.textfiled_arr_1.erase(ve3);
								h1.textfiled_arr_2.erase(ve4);
								h1.textfiled_arr_3.erase(ve5);
								h1.text_arr_4.erase(ve7);
								h1.text_arr_3.erase(ve8);
								h1.frame_background_arr.erase(ve6);
							}
							cout << i << endl;;
							cout << it->reciever << endl;
							cout << it->amount << endl;
							ali.acceptRequest(*it);
							invalidboolen = true;
							invalidinput.setString("Send successfully");
							invalidinput.setFillColor(Color::Green);
							stream.str("");
							stream << fixed << setprecision(2) << ali.balance;
							h1.text10.setString(stream.str() + " $");
							
						}
					}
					if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
					{
						window.clear();
						return user(ali);
					}
					if (h1.button_2_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
					{
						
						auto it = ali.pendingRequests.rbegin();
						auto ve = h1.button_1_arr.begin();
						auto ve2 = h1.button_2_arr.begin();
						auto ve3 = h1.textfiled_arr_1.begin();
						auto ve4 = h1.textfiled_arr_2.begin();
						auto ve5 = h1.textfiled_arr_3.begin();
						auto ve6 = h1.frame_background_arr.begin();
						auto ve7 = h1.text_arr_4.begin();
						auto ve8 = h1.text_arr_3.begin();
						auto te = h1.text_arr_1.rbegin();
						std::advance(ve2, i);
						std::advance(ve3, i);
						std::advance(ve4, i);
						std::advance(ve5, i);
						std::advance(ve6, i);
						advance(ve7, i);
						advance(ve8, i);
						advance(ve, i);
						advance(it, i);
						advance(te, i);

						if (h1.button_1_arr.size() == 1)
						{

							h1.button_1_arr.clear();
							h1.button_2_arr.clear();
							h1.textfiled_arr_1.clear();
							h1.textfiled_arr_2.clear();
							h1.textfiled_arr_3.clear();
							h1.text_arr_4.clear();
							h1.text_arr_3.clear();
							h1.frame_background_arr.clear();
							ali.Reject(*it);
							ali.pendingRequests.clear();
							return user(ali);
						}

						else {
							h1.button_1_arr.erase(ve);
							h1.button_2_arr.erase(ve2);
							h1.textfiled_arr_1.erase(ve3);
							h1.textfiled_arr_2.erase(ve4);
							h1.textfiled_arr_3.erase(ve5);
							h1.text_arr_4.erase(ve7);
							h1.text_arr_3.erase(ve8);
							h1.frame_background_arr.erase(ve6);
						}
						
						ali.Reject(*it);
						invalidboolen = true;
						invalidinput.setString("Reject successfully");
						invalidinput.setFillColor(Color::Red);
						

						h1.text10.setString(stream.str() + " $");
						if (h1.text_arr_4[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
							h1.text_arr_4[i].setCharacterSize(24);// Scale up
						else
							h1.text_arr_4[i].setCharacterSize(22);
						if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
						{
							window.clear();
							return user(ali);
						}
					}

					//}

					if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
					{
						window.clear();
						return user(ali);
					}
					if (event.type == sf::Event::MouseWheelScrolled && event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel) {
						// Adjust the view when scrolling vertically
						if (view.getCenter().y - window.getSize().y / 2 > -0.1)
						{
							view.move(0, -event.mouseWheelScroll.delta * 30); // Adjust the scrolling speed here
							window.setView(view);
						}
						else
						{
							view.move(0, 2); // Adjust the scrolling speed here
							window.setView(view);
						}
					}
				}

			}
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return user(ali);
			}
			window.clear();

			user_messeges_draw(h1);

			//Calculate the new position of the sprites based on elapsed time for x-axis transition
			if (clock.getElapsedTime().asSeconds() < animationTimeX)
			{
				float elapsedTimeX = clock.getElapsedTime().asSeconds();
				float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
				h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
				h1.text2.setPosition(newXPosition + 190, 130); // Adjust position of text2
				user_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
				//profile_edit.setPosition(950 - newXPosition, 80);
				//h1.text3.setPosition(950 - newXPosition, 180);
				back.setPosition(1050 - newXPosition, 240);
				message.setPosition(550 - newXPosition, 230);

			}
			else
			{
				// Animation for x-axis transition is complete, set the final position of the sprites
				h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
				h1.text2.setPosition(finalXPosition + 190, 130); // Adjust position of text2
				user_icon.setPosition(finalXPosition + 50, 80);
				back.setPosition(1050, 240);
				message.setPosition(550, 230);

			}
			if (clock.getElapsedTime().asSeconds() < animationTimeX2)
			{
				float elapsedTimeX2 = clock.getElapsedTime().asSeconds();
				float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));

				back.setPosition(1050 - newXPosition2, 240);
				message.setPosition(550 - newXPosition2, 230);

			}
			else
			{

				back.setPosition(1050, 240);
				message.setPosition(550, 230);

			}
			if (ali.pendingRequests.empty())
			{
				if (clock.getElapsedTime().asSeconds() < animationTimeX2)
				{
					float elapsedTimeX2 = clock.getElapsedTime().asSeconds();
					float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));
					h1.text8.setPosition(newXPosition2 + 400, 450);

				}
				else
				{
					h1.text8.setPosition(400, 450);

				}
			}
			// Define the delay between the movement of each element (in seconds)
			float movementDelay = 0.2f; // Adjust this value as needed

			// Inside the loop over the elements
			float totalAnimationTime = ali.pendingRequests.size() * movementDelay + animationTimeX2;

			// Inside the loop over the elements
			for (int i = 0; i < ali.pendingRequests.size(); i++)
			{
				// Calculate the delay for this element based on its index
				float elementDelay = i * movementDelay;

				// Check if enough time has passed for this element to start moving
				if (clock.getElapsedTime().asSeconds() >= elementDelay)
				{
					// Calculate the elapsed time for this element
					float elapsedTimeX2 = clock.getElapsedTime().asSeconds() - elementDelay;

					// Calculate the position based on the elapsed time and animation parameters
					float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));
					newXPosition2 = std::min(newXPosition2, finalXPosition); // Ensure position doesn't overshoot the final position

					// Set the positions of the elements
					h1.frame_background_arr[i].setPosition(newXPosition2 + 30, 360 + i * 160);
					h1.textfiled_arr_1[i].setPosition(newXPosition2 + 300, 385 + i * 160);
					h1.textfiled_arr_2[i].setPosition(newXPosition2 + 850, 385 + i * 160);
					h1.text_arr_1[i].setPosition(newXPosition2 + 87, 392 + i * 160);
					h1.text_arr_2[i].setPosition(newXPosition2 + 750, 392 + i * 160);
					h1.button_1_arr[i].setPosition(newXPosition2 + 670, 439 + i * 160);
					h1.button_2_arr[i].setPosition(newXPosition2 + 430, 445 + i * 160);
					h1.text_arr_3[i].setPosition(newXPosition2 + 315, 385 + i * 160);
					h1.text_arr_4[i].setPosition(newXPosition2 + 865, 388 + i * 160);
				}
				else
				{
					// If not enough time has passed, keep the element at its initial position
					h1.frame_background_arr[i].setPosition(initialPosition2 + 30, 360 + i * 160);
					h1.textfiled_arr_1[i].setPosition(initialPosition2 + 300, 385 + i * 160);
					h1.textfiled_arr_2[i].setPosition(initialPosition2 + 850, 385 + i * 160);
					h1.text_arr_1[i].setPosition(initialPosition2 + 87, 392 + i * 160);
					h1.text_arr_2[i].setPosition(initialPosition2 + 750, 392 + i * 160);
					h1.button_1_arr[i].setPosition(initialPosition2 + 670, 439 + i * 160);
					h1.button_2_arr[i].setPosition(initialPosition2 + 430, 445 + i * 160);
					h1.text_arr_3[i].setPosition(initialPosition2 + 315, 385 + i * 160);
					h1.text_arr_4[i].setPosition(initialPosition2 + 865, 388 + i * 160);
				}
			}




			// Draw the texts, wallet_icon, buttons
			window.draw(h1.text1);
			window.draw(h1.text2);
			window.draw(user_icon);
			window.draw(message);
			window.draw(back);
			if (ali.pendingRequests.empty())
			{
				window.draw(h1.text8);
			}
			for (int i = 0; i < ali.pendingRequests.size(); i++)
			{
				window.draw(h1.frame_background_arr[i]);
				window.draw(h1.textfiled_arr_1[i]);
				window.draw(h1.textfiled_arr_2[i]);
				window.draw(h1.text_arr_1[i]);
				window.draw(h1.text_arr_2[i]);
				window.draw(h1.button_1_arr[i]);
				window.draw(h1.button_2_arr[i]);
				window.draw(h1.text_arr_3[i]);
				window.draw(h1.text_arr_4[i]);
			}
			if (invalidboolen)
				window.draw(invalidinput);
			// Display the window
			window.display();

			// Check if both animations are complete
			/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
				break;*/


		}
	}
}
void user_messeges_set(halfvec& h1, User& ali)
{
	//ali.pendingRequests.
	background.setTexture(background_texture);
	background.setScale(1.5, 3);
	background.setPosition(0, -500);

	deque<Transaction> temp;
	int originalSize = ali.pendingRequests.size();
	for (int i = 0; i < originalSize; ++i)
	{
		Transaction element = ali.pendingRequests.front();
		ali.pendingRequests.pop_front();
		temp.push_back(element);
		ali.pendingRequests.push_back(element);

	}

	for (int i = 0; i < ali.pendingRequests.size(); i++)
	{
		h1.frame_background_arr[i].setTexture(background_frame_texture);
		h1.frame_background_arr[i].setScale(0.47, 0.35);
		h1.frame_background_arr[i].setPosition(30, 360 + i * 160);

		h1.textfiled_arr_1[i].setTexture(text_field_texture);
		h1.textfiled_arr_1[i].setScale(0.1, 0.08);
		h1.textfiled_arr_1[i].setPosition(300, 385 + i * 160);

		h1.textfiled_arr_2[i].setTexture(text_field_texture);
		h1.textfiled_arr_2[i].setScale(0.08, 0.08);
		h1.textfiled_arr_2[i].setPosition(850, 385 + i * 160);

		h1.text_arr_1[i].setString("Sender Username");
		h1.text_arr_1[i].setFont(berlinSansFont);
		h1.text_arr_1[i].setCharacterSize(20);
		h1.text_arr_1[i].setPosition(87, 392 + i * 160);
		h1.text_arr_1[i].setFillColor(sf::Color::White);

		h1.text_arr_2[i].setString("Amount");
		h1.text_arr_2[i].setFont(berlinSansFont);
		h1.text_arr_2[i].setCharacterSize(20);
		h1.text_arr_2[i].setPosition(750, 392 + i * 160);
		h1.text_arr_2[i].setFillColor(sf::Color::White);

		h1.button_1_arr[i].setTexture(yes_texture);
		h1.button_1_arr[i].setScale(0.105, 0.105);
		h1.button_1_arr[i].setPosition(670, 439 + i * 160);

		h1.button_2_arr[i].setTexture(no_texture);
		h1.button_2_arr[i].setScale(0.08, 0.08);
		h1.button_2_arr[i].setPosition(430, 445 + i * 160);

		h1.text_arr_3[i].setString(temp.back().reciever);
		h1.text_arr_3[i].setFont(berlinSansFont);
		h1.text_arr_3[i].setCharacterSize(24);
		h1.text_arr_3[i].setPosition(315, 385 + i * 160);
		h1.text_arr_3[i].setFillColor(sf::Color::Black);

		stringstream stream2;
		stream2 << fixed << setprecision(2) << temp.back().amount;
		h1.text_arr_4[i].setString(stream2.str() + " $");
		h1.text_arr_4[i].setFont(berlinSansFont);
		h1.text_arr_4[i].setCharacterSize(22);
		h1.text_arr_4[i].setPosition(865, 388 + i * 160);
		h1.text_arr_4[i].setFillColor(sf::Color::Black);
		temp.pop_back();
	}

	user_icon.setTexture(user_icon_texture);
	user_icon.setScale(0.2, 0.2);
	user_icon.setPosition(-500, 80);

	message.setTexture(messages_texture);
	message.setScale(0.1, 0.1);
	message.setPosition(550, 230);


	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(1050, 240);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Welcome");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString(ali.UserName);
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text9.setString("balance");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(18);
	h1.text9.setPosition(500, 130);
	h1.text9.setFillColor(sf::Color::White);

	stringstream stream;
	stream << fixed << setprecision(2) << ali.balance;
	h1.text10.setString(stream.str() + " $");
	h1.text10.setFont(britanicFont);
	h1.text10.setCharacterSize(26);
	h1.text10.setPosition(588, 80);
	h1.text10.setFillColor(sf::Color::Black);

	h1.textfiled_1.setTexture(text_field_texture);
	if (ali.balance >= 1000000000)
		h1.textfiled_1.setScale(0.09, 0.1);
	else if (ali.balance > 1000000)
		h1.textfiled_1.setScale(0.1, 0.1);
	else
		h1.textfiled_1.setScale(0.072, 0.1);
	h1.textfiled_1.setPosition(580, 75);

	if (ali.pendingRequests.empty())
	{
		h1.text8.setString("There is no Messages\n       to be displayed");
		h1.text8.setFont(britanicFont);
		h1.text8.setCharacterSize(35);
		h1.text8.setPosition(400, 450);
		h1.text8.setFillColor(Color::Blue);
	}



}
void user_messeges_draw(halfvec& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);


	window.draw(h1.textfiled_1);
	//window.draw(h1.textfiled_2);
	//window.draw(h1.textfiled_3);

	//window.draw(h1.text1);
	//window.draw(h1.text2);
	//window.draw(h1.text3);
	//window.draw(h1.text4);
	///*window.draw(h1.text5);
	//window.draw(h1.text6);
	//window.draw(h1.text7);
	//window.draw(h1.text8);*/
	window.draw(h1.text9);
	window.draw(h1.text10);


	window.draw(balance);


}

void user_transactions(User& ali)

{
	half h1;
	h1.textfiled_arr_1 = new Sprite[ali.History.size()];
	h1.textfiled_arr_2 = new Sprite[ali.History.size()];
	h1.textfiled_arr_3 = new Sprite[ali.History.size()];
	h1.textfiled_arr_4 = new Sprite[ali.History.size()];

	h1.frame_background_arr = new Sprite[ali.History.size()];
	h1.button_1_arr = new Sprite[ali.History.size()];
	h1.button_2_arr = new Sprite[ali.History.size()];
	h1.text_arr_1 = new Text[ali.History.size()];
	h1.text_arr_2 = new Text[ali.History.size()];
	h1.text_arr_3 = new Text[ali.History.size()];
	h1.text_arr_4 = new Text[ali.History.size()];
	h1.text_arr_5 = new Text[ali.History.size()];
	h1.text_arr_6 = new Text[ali.History.size()];
	h1.text_arr_7 = new Text[ali.History.size()];
	h1.text_arr_8 = new Text[ali.History.size()];

	//texturesandfonts();
//size_of_arr = ali.History.size();
	user_transactions_set(h1, ali);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = user_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;
	//////////////////////////////////////////////////////////////////////////////////////////

	float initialPosition2 = -1200;

	// Define the speed of the animation for x-axis transition
	float animationSpeedX2 = 1500; // pixels per second


	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX2 = finalXPosition - initialPosition2;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX2 = std::abs(distanceToMoveX2) / animationSpeedX2;

	// Create a clock to measure time
	sf::Clock clock;
	sf::View view(sf::FloatRect(0, 0, window.getSize().x, window.getSize().y));
	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {


				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);

				if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					transiction_history.setScale(0.22f, 0.22f); // Scale up
				else
					transiction_history.setScale(0.2f, 0.2f);

				if (user_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					user_icon.setScale(0.22f, 0.22f); // Scale up
				else
					user_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);



				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(20); // Scale up
				else
					h1.text9.setCharacterSize(18);

				if (h1.text10.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text10.setCharacterSize(27); // Scale up
				else
					h1.text10.setCharacterSize(26);

				for (int i = 0; i < ali.History.size(); i++)
				{

					if (h1.textfiled_arr_1[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_1[i].setScale(0.1, 0.088); // Scale up
					else
						h1.textfiled_arr_1[i].setScale(0.1, 0.08);


					if (h1.textfiled_arr_2[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_2[i].setScale(0.08, 0.088); // Scale up
					else
						h1.textfiled_arr_2[i].setScale(0.08, 0.08);

					if (h1.text_arr_1[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_1[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_1[i].setCharacterSize(20);

					if (h1.text_arr_2[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_2[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_2[i].setCharacterSize(20);

					if (h1.frame_background_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.frame_background_arr[i].setScale(0.47, 0.38);// Scale up
					else
						h1.frame_background_arr[i].setScale(0.47, 0.35);

					if (h1.button_1_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.button_1_arr[i].setScale(0.1155, 0.1155);
					else
						h1.button_1_arr[i].setScale(0.105, 0.105);

					if (h1.button_2_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.button_2_arr[i].setScale(0.088, 0.088);
					else
						h1.button_2_arr[i].setScale(0.08, 0.08);

					if (h1.text_arr_3[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_3[i].setCharacterSize(26);// Scale up
					else
						h1.text_arr_3[i].setCharacterSize(24);

					if (h1.text_arr_4[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_4[i].setCharacterSize(24);// Scale up
					else
						h1.text_arr_4[i].setCharacterSize(22);
				}

				//}

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{
					window.clear();
					return user(ali);
				}
				if (event.type == sf::Event::MouseWheelScrolled && event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel) {
					// Adjust the view when scrolling vertically
					if (view.getCenter().y - window.getSize().y / 2 > -0.1)
					{
						view.move(0, -event.mouseWheelScroll.delta * 30); // Adjust the scrolling speed here
						window.setView(view);
					}
					else
					{
						view.move(0, 2); // Adjust the scrolling speed here
						window.setView(view);
					}
				}
			}

		}
		window.clear();

		user_transactions_draw(h1);

		//Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 190, 130); // Adjust position of text2
			user_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			//profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
			back.setPosition(1050 - newXPosition, 240);
			transiction_history.setPosition(550 - newXPosition, 230);

		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 190, 130); // Adjust position of text2
			user_icon.setPosition(finalXPosition + 50, 80);
			back.setPosition(1050, 240);
			transiction_history.setPosition(550, 230);

		}
		if (clock.getElapsedTime().asSeconds() < animationTimeX2)
		{
			float elapsedTimeX2 = clock.getElapsedTime().asSeconds();
			float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));

			back.setPosition(1050 - newXPosition2, 240);
			transiction_history.setPosition(550 - newXPosition2, 230);

		}
		else
		{

			back.setPosition(1050, 240);
			transiction_history.setPosition(550, 230);

		}
		if (ali.History.empty())
		{
			if (clock.getElapsedTime().asSeconds() < animationTimeX2)
			{
				float elapsedTimeX2 = clock.getElapsedTime().asSeconds();
				float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));
				h1.text8.setPosition(newXPosition2 + 400, 450);

			}
			else
			{
				h1.text8.setPosition(400, 450);

			}
		}
		// Define the delay between the movement of each element (in seconds)
		float movementDelay = 0.2f; // Adjust this value as needed

		// Inside the loop over the elements
		float totalAnimationTime = ali.History.size() * movementDelay + animationTimeX2;

		// Inside the loop over the elements
		for (int i = 0; i < ali.History.size(); i++)
		{
			// Calculate the delay for this element based on its index
			float elementDelay = i * movementDelay;

			// Check if enough time has passed for this element to start moving
			if (clock.getElapsedTime().asSeconds() >= elementDelay)
			{
				// Calculate the elapsed time for this element
				float elapsedTimeX2 = clock.getElapsedTime().asSeconds() - elementDelay;

				// Calculate the position based on the elapsed time and animation parameters
				float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));
				newXPosition2 = std::min(newXPosition2, finalXPosition); // Ensure position doesn't overshoot the final position

				// Set the positions of the elements
				h1.frame_background_arr[i].setPosition(newXPosition2 + 30, 360 + i * 160);
				h1.textfiled_arr_1[i].setPosition(newXPosition2 + 300, 385 + i * 160);
				h1.textfiled_arr_2[i].setPosition(newXPosition2 + 850, 385 + i * 160);
				h1.textfiled_arr_3[i].setPosition(newXPosition2 + 300, 443 + i * 160);
				h1.textfiled_arr_4[i].setPosition(newXPosition2 + 850, 443 + i * 160);

				h1.text_arr_1[i].setPosition(newXPosition2 + 87, 392 + i * 160);
				h1.text_arr_2[i].setPosition(newXPosition2 + 750, 392 + i * 160);
				h1.text_arr_3[i].setPosition(newXPosition2 + 315, 385 + i * 160);
				h1.text_arr_4[i].setPosition(newXPosition2 + 865, 388 + i * 160);
				h1.text_arr_5[i].setPosition(newXPosition2 + 78, 450 + i * 160);
				h1.text_arr_6[i].setPosition(newXPosition2 + 315, 443 + i * 160);
				h1.text_arr_7[i].setPosition(newXPosition2 + 750, 450 + i * 160);
				h1.text_arr_8[i].setPosition(newXPosition2 + 865, 446 + i * 160);

			}
			else
			{
				// If not enough time has passed, keep the element at its initial position
				h1.frame_background_arr[i].setPosition(initialPosition2 + 30, 360 + i * 160);
				h1.textfiled_arr_1[i].setPosition(initialPosition2 + 300, 385 + i * 160);
				h1.textfiled_arr_2[i].setPosition(initialPosition2 + 850, 385 + i * 160);
				h1.textfiled_arr_3[i].setPosition(initialPosition2 + 300, 443 + i * 160);
				h1.textfiled_arr_4[i].setPosition(initialPosition2 + 850, 443 + i * 160);




				h1.text_arr_1[i].setPosition(initialPosition2 + 87, 392 + i * 160);
				h1.text_arr_2[i].setPosition(initialPosition2 + 750, 392 + i * 160);
				h1.text_arr_3[i].setPosition(initialPosition2 + 315, 385 + i * 160);
				h1.text_arr_4[i].setPosition(initialPosition2 + 865, 388 + i * 160);
				h1.text_arr_5[i].setPosition(initialPosition2 + 87, 450 + i * 160);
				h1.text_arr_6[i].setPosition(initialPosition2 + 315, 443 + i * 160);
				h1.text_arr_7[i].setPosition(initialPosition2 + 750, 450 + i * 160);
				h1.text_arr_8[i].setPosition(initialPosition2 + 865, 446 + i * 160);


			}
		}




		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(user_icon);
		window.draw(transiction_history);
		window.draw(back);
		if (ali.History.empty())
		{
			window.draw(h1.text8);
		}
		for (int i = 0; i < ali.History.size(); i++)
		{
			window.draw(h1.frame_background_arr[i]);
			window.draw(h1.textfiled_arr_1[i]);
			window.draw(h1.textfiled_arr_2[i]);
			window.draw(h1.textfiled_arr_3[i]);
			window.draw(h1.textfiled_arr_4[i]);


			window.draw(h1.text_arr_1[i]);
			window.draw(h1.text_arr_2[i]);
			window.draw(h1.text_arr_3[i]);
			window.draw(h1.text_arr_4[i]);
			window.draw(h1.text_arr_5[i]);
			window.draw(h1.text_arr_6[i]);
			window.draw(h1.text_arr_7[i]);
			window.draw(h1.text_arr_8[i]);


		}
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/


	}
}
void user_transactions_set(half& h1, User& ali)
{

	background.setTexture(background_texture);
	background.setScale(1.5, 3);
	background.setPosition(0, -500);

	auto it = ali.History.rbegin();
	for (int i = 0; i < ali.History.size(); i++)
	{

		h1.frame_background_arr[i].setTexture(background_frame_texture);
		h1.frame_background_arr[i].setScale(0.47, 0.35);
		h1.frame_background_arr[i].setPosition(30, 360 + i * 160);

		h1.textfiled_arr_3[i].setTexture(text_field_texture);
		h1.textfiled_arr_3[i].setScale(0.1, 0.08);
		h1.textfiled_arr_3[i].setPosition(300, 443 + i * 160);

		h1.textfiled_arr_1[i].setTexture(text_field_texture);
		h1.textfiled_arr_1[i].setScale(0.1, 0.08);
		h1.textfiled_arr_1[i].setPosition(300, 385 + i * 160);

		h1.textfiled_arr_2[i].setTexture(text_field_texture);
		h1.textfiled_arr_2[i].setScale(0.08, 0.08);
		h1.textfiled_arr_2[i].setPosition(850, 385 + i * 160);

		h1.textfiled_arr_4[i].setTexture(text_field_texture);
		h1.textfiled_arr_4[i].setScale(0.08, 0.08);
		h1.textfiled_arr_4[i].setPosition(850, 443 + i * 160);



		h1.text_arr_1[i].setString("Sender Username");
		h1.text_arr_1[i].setFont(berlinSansFont);
		h1.text_arr_1[i].setCharacterSize(20);
		h1.text_arr_1[i].setPosition(87, 392 + i * 160);
		h1.text_arr_1[i].setFillColor(sf::Color::White);

		h1.text_arr_5[i].setString("Recipient Username");
		h1.text_arr_5[i].setFont(berlinSansFont);
		h1.text_arr_5[i].setCharacterSize(20);
		h1.text_arr_5[i].setPosition(87, 450 + i * 160);
		h1.text_arr_5[i].setFillColor(sf::Color::White);

		h1.text_arr_2[i].setString("Amount");
		h1.text_arr_2[i].setFont(berlinSansFont);
		h1.text_arr_2[i].setCharacterSize(20);
		h1.text_arr_2[i].setPosition(750, 392 + i * 160);
		h1.text_arr_2[i].setFillColor(sf::Color::White);

		h1.text_arr_7[i].setString("Date");
		h1.text_arr_7[i].setFont(berlinSansFont);
		h1.text_arr_7[i].setCharacterSize(20);
		h1.text_arr_7[i].setPosition(750, 450 + i * 160);
		h1.text_arr_7[i].setFillColor(sf::Color::White);

		h1.text_arr_3[i].setString(it->sender);
		h1.text_arr_3[i].setFont(berlinSansFont);
		h1.text_arr_3[i].setCharacterSize(24);
		h1.text_arr_3[i].setPosition(315, 385 + i * 160);
		h1.text_arr_3[i].setFillColor(sf::Color::Black);

		h1.text_arr_6[i].setString(it->reciever);
		h1.text_arr_6[i].setFont(berlinSansFont);
		h1.text_arr_6[i].setCharacterSize(24);
		h1.text_arr_6[i].setPosition(315, 443 + i * 160);
		h1.text_arr_6[i].setFillColor(sf::Color::Black);

		stringstream stream2;
		stream2 << fixed << setprecision(2) << it->amount;
		h1.text_arr_4[i].setString(stream2.str() + " $");
		h1.text_arr_4[i].setFont(berlinSansFont);
		h1.text_arr_4[i].setCharacterSize(22);
		h1.text_arr_4[i].setPosition(865, 388 + i * 160);
		h1.text_arr_4[i].setFillColor(sf::Color::Black);

		string d = (to_string(it->Date.day) + '/' + to_string(it->Date.month) + '/' + to_string(it->Date.year) + "   " + to_string(it->Date.hour) + ':' + to_string(it->Date.min));
		h1.text_arr_8[i].setString(d);
		h1.text_arr_8[i].setFont(berlinSansFont);
		h1.text_arr_8[i].setCharacterSize(20);
		h1.text_arr_8[i].setPosition(865, 446 + i * 160);
		h1.text_arr_8[i].setFillColor(sf::Color::Black);
		if (it->sender == omar.UserName)
		{
			h1.text_arr_3[i].setFillColor(sf::Color::Blue);
		}
		else if (it->reciever == omar.UserName)
		{
			h1.text_arr_6[i].setFillColor(sf::Color::Blue);
		}
		++it;
	}

	user_icon.setTexture(user_icon_texture);
	user_icon.setScale(0.2, 0.2);
	user_icon.setPosition(-500, 80);

	transiction_history.setTexture(transiction_history_texture);
	transiction_history.setScale(0.2, 0.2);
	transiction_history.setPosition(550, 230);


	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(1050, 240);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Welcome");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString(ali.UserName);
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text9.setString("balance");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(18);
	h1.text9.setPosition(500, 130);
	h1.text9.setFillColor(sf::Color::White);

	stringstream stream;
	stream << fixed << setprecision(2) << ali.balance;
	h1.text10.setString(stream.str() + " $");
	h1.text10.setFont(britanicFont);
	h1.text10.setCharacterSize(26);
	h1.text10.setPosition(588, 80);
	h1.text10.setFillColor(sf::Color::Black);

	h1.textfiled_1.setTexture(text_field_texture);
	if (ali.balance >= 1000000000)
		h1.textfiled_1.setScale(0.09, 0.1);
	else if (ali.balance > 1000000)
		h1.textfiled_1.setScale(0.1, 0.1);
	else
		h1.textfiled_1.setScale(0.072, 0.1);
	h1.textfiled_1.setPosition(580, 75);

	if (ali.History.empty())
	{
		h1.text8.setString("There is no Transactions\n       to be displayed");
		h1.text8.setFont(britanicFont);
		h1.text8.setCharacterSize(35);
		h1.text8.setPosition(400, 450);
		h1.text8.setFillColor(Color::Blue);
	}



}
void user_transactions_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);


	window.draw(h1.textfiled_1);
	//window.draw(h1.textfiled_2);
	//window.draw(h1.textfiled_3);

	//window.draw(h1.text1);
	//window.draw(h1.text2);
	//window.draw(h1.text3);
	//window.draw(h1.text4);
	///*window.draw(h1.text5);
	//window.draw(h1.text6);
	//window.draw(h1.text7);
	//window.draw(h1.text8);*/
	window.draw(h1.text9);
	window.draw(h1.text10);


	window.draw(balance);


}

void user_edit_profile(User& ali)

{
	//texturesandfonts();
	half h1;
	user_edit_profile_set(h1, ali);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = user_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {



				if (user_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					user_icon.setScale(0.22f, 0.22f); // Scale up
				else
					user_icon.setScale(0.2f, 0.2f);

				if (profile_edit.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					profile_edit.setScale(0.22f, 0.22f); // Scale up
				else
					profile_edit.setScale(0.2f, 0.2f);



				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);



				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(25); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(25); // Scale up
				else
					h1.text4.setCharacterSize(24);

				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(20); // Scale up
				else
					h1.text9.setCharacterSize(18);

				if (h1.text10.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text10.setCharacterSize(28); // Scale up
				else
					h1.text10.setCharacterSize(26);

				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);


				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				else
					h1.button_1.setScale(0.11, 0.1);

				if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_2.setScale(0.111, 0.11); // Scale up
				else
					h1.button_2.setScale(0.11, 0.1);




			}
			/*if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return Home();
			}*/
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return user(ali);
			}

			if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return user_edit_username(ali);
			}
			if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return user_edit_password(ali);
			}


		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		user_edit_profile_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			user_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			//profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			user_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			//profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(user_icon);
		window.draw(person);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void user_edit_profile_set(half& h1, User& ali)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);



	user_icon.setTexture(user_icon_texture);
	user_icon.setScale(0.2, 0.2);
	user_icon.setPosition(-500, 80);

	profile_edit.setTexture(profile_edit_texture);
	profile_edit.setScale(0.2, 0.2);
	profile_edit.setPosition(550, 300);




	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Edit");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("Profile");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text3.setString("Change Your Username");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(24);
	h1.text3.setPosition(260, 505);
	h1.text3.setFillColor(sf::Color::White);

	h1.text4.setString("Change Your Password");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(710, 505);
	h1.text4.setFillColor(sf::Color::White);

	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);

	h1.text9.setString("balance");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(18);
	h1.text9.setPosition(500, 130);
	h1.text9.setFillColor(sf::Color::White);

	stringstream stream;
	stream << fixed << setprecision(2) << ali.balance;
	h1.text10.setString(stream.str() + " $");
	h1.text10.setFont(britanicFont);
	h1.text10.setCharacterSize(26);
	h1.text10.setPosition(588, 80);
	h1.text10.setFillColor(sf::Color::Black);


	h1.textfiled_1.setTexture(text_field_texture);
	if (ali.balance >= 1000000000)
		h1.textfiled_1.setScale(0.09, 0.1);
	else if (ali.balance > 1000000)
		h1.textfiled_1.setScale(0.1, 0.1);
	else
		h1.textfiled_1.setScale(0.072, 0.1);
	h1.textfiled_1.setPosition(580, 75);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(250, 500);

	h1.button_2.setTexture(button_texture);
	h1.button_2.setScale(0.11, 0.1);
	h1.button_2.setPosition(700, 500);



}
void user_edit_profile_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	//window.draw(h1.frame_background);
	window.draw(user_icon);
	window.draw(profile_edit);
	window.draw(back);
	window.draw(balance);

	window.draw(h1.textfiled_1);

	window.draw(h1.button_1);
	window.draw(h1.button_2);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text3);
	window.draw(h1.text4);
	window.draw(h1.text9);
	window.draw(h1.text10);

}

void user_edit_username(User& ali)

{
	//texturesandfonts();
	half h1;
	user_edit_username_set(h1, ali);
	/////////////////////////////
	std::string  newUsername; // Variables to store entered username and password

	sf::Text  enteredNewUsername;
	enteredNewUsername.setFont(rokebFint);
	enteredNewUsername.setFillColor(Color::Black);
	enteredNewUsername.setCharacterSize(25);
	enteredNewUsername.setPosition(585, 470);
	bool isUsernameInputActive = false;
	bool invalidboolen = false;
	Text invalidinput;
	invalidinput.setFont(britanicFont);
	invalidinput.setFillColor(Color::Red);
	invalidinput.setCharacterSize(25);
	invalidinput.setPosition(400, 700);
	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = user_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));


			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_2.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
				}

				// Check if mouse clicked on password input field
				

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !newUsername.empty()) { // Backspacek
						newUsername.pop_back();
					}
					else if (event.text.unicode < 128) {
						newUsername += static_cast<char>(event.text.unicode);
					}
					enteredNewUsername.setString(newUsername);
				}

				
			}
			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {

				if (user_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					user_icon.setScale(0.22f, 0.22f); // Scale up
				else
					user_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);

				if (profile_edit.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					profile_edit.setScale(0.22f, 0.22f); // Scale up
				else
					profile_edit.setScale(0.2f, 0.2f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);


				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(26); // Scale up
				else
					h1.text4.setCharacterSize(24);


				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(20); // Scale up
				else
					h1.text9.setCharacterSize(18);

				if (h1.text10.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text10.setCharacterSize(28); // Scale up
				else
					h1.text10.setCharacterSize(26);

				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_2.setScale(0.1, 0.1);




				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(25); // Scale up
				else
					h1.text11.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				else
					h1.button_1.setScale(0.11, 0.1);
				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{


					 if (System::search_user(newUsername))
					{
						invalidboolen = true;
						invalidinput.setString("New Username already exist");
						invalidinput.setFillColor(Color::Red);

					}
					else {
						ali.editUsername(newUsername);

						invalidboolen = true;
						invalidinput.setString("Edited Successfully");
						invalidinput.setFillColor(Color::Green);
						/*newUsername = "";
						enteredNewUsername.setString(newUsername);*/
						return user(System::allUsers[newUsername]);
						
					}
				}

			}

			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return user_edit_profile(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		user_edit_username_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			user_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			//profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			user_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			//profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(user_icon);
		if (invalidboolen)
		{
			window.draw(invalidinput);
		}
		window.draw(enteredNewUsername);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void user_edit_username_set(half& h1, User& ali)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 380);

	user_icon.setTexture(user_icon_texture);
	user_icon.setScale(0.2, 0.2);
	user_icon.setPosition(-500, 80);

	profile_edit.setTexture(profile_edit_texture);
	profile_edit.setScale(0.2, 0.2);
	profile_edit.setPosition(550, 230);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Edit");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("Username");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);


	h1.text4.setString("New Username");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(340, 467);
	h1.text4.setFillColor(sf::Color::White);



	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.1, 0.1);
	h1.textfiled_2.setPosition(575, 460);


	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);

	h1.text9.setString("balance");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(18);
	h1.text9.setPosition(500, 130);
	h1.text9.setFillColor(sf::Color::White);

	stringstream stream;
	stream << fixed << setprecision(2) << ali.balance;
	h1.text10.setString(stream.str() + " $");
	h1.text10.setFont(britanicFont);
	h1.text10.setCharacterSize(26);
	h1.text10.setPosition(588, 80);
	h1.text10.setFillColor(sf::Color::Black);


	h1.textfiled_1.setTexture(text_field_texture);
	if (ali.balance >= 1000000000)
		h1.textfiled_1.setScale(0.09, 0.1);
	else if (ali.balance > 1000000)
		h1.textfiled_1.setScale(0.1, 0.1);
	else
		h1.textfiled_1.setScale(0.072, 0.1);
	h1.textfiled_1.setPosition(580, 75);

	h1.text11.setString("Change Username");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(520, 615);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 610);

}
void user_edit_username_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);
	window.draw(profile_edit);


	window.draw(back);

	window.draw(h1.textfiled_1);
	window.draw(h1.textfiled_2);
	//window.draw(h1.textfiled_3);
	window.draw(h1.button_1);

	window.draw(h1.text1);
	window.draw(h1.text2);
	//window.draw(h1.text3);
	window.draw(h1.text4);
	/*window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);*/
	window.draw(h1.text9);
	window.draw(h1.text10);
	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/
	window.draw(balance);

}

void user_edit_password(User& ali)

{
	//texturesandfonts();
	half h1;
	user_edit_password_set(h1, ali);
	/////////////////////////////////////////////////////
	std::string password, newPassword; // Variables to store entered username and password

	sf::Text enteredPassword, enteredNewpassword;
	enteredPassword.setFont(rokebFint);
	enteredNewpassword.setFont(rokebFint);
	enteredPassword.setFillColor(Color::Black);
	enteredNewpassword.setFillColor(Color::Black);
	enteredPassword.setCharacterSize(21);
	enteredNewpassword.setCharacterSize(25);
	enteredPassword.setPosition(310, 470);
	enteredNewpassword.setPosition(860, 470);
	bool isUsernameInputActive = false;
	bool isPasswordInputActive = false;
	//wrong

	bool invalidboolen = false;
	Text invalidinput;
	invalidinput.setFont(britanicFont);
	invalidinput.setFillColor(Color::Red);
	invalidinput.setCharacterSize(25);
	invalidinput.setPosition(550, 700);
	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = user_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_2.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					isPasswordInputActive = false;
				}

				// Check if mouse clicked on password input field
				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isPasswordInputActive = true;
				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {

					if (event.text.unicode == '\b' && !password.empty()) { // Backspacek
						password.pop_back();
					}
					else if (event.text.unicode < 128) {
						password += static_cast<char>(event.text.unicode);
					}
					enteredPassword.setString(password);
				}

				if (isPasswordInputActive) {
					if (event.text.unicode == '\b' && !newPassword.empty()) { // Backspace
						newPassword.pop_back();
					}
					else if (event.text.unicode < 128) {
						newPassword += static_cast<char>(event.text.unicode);
					}
					enteredNewpassword.setString(newPassword);
				}
			}
			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {

				if (user_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					user_icon.setScale(0.22f, 0.22f); // Scale up
				else
					user_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);

				if (profile_edit.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					profile_edit.setScale(0.22f, 0.22f); // Scale up
				else
					profile_edit.setScale(0.2f, 0.2f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(26); // Scale up
				else
					h1.text4.setCharacterSize(24);


				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(20); // Scale up
				else
					h1.text9.setCharacterSize(18);

				if (h1.text10.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text10.setCharacterSize(28); // Scale up
				else
					h1.text10.setCharacterSize(26);

				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_2.setScale(0.1, 0.1);

				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_3.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_3.setScale(0.1, 0.1);



				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(25); // Scale up
				else
					h1.text11.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				else
					h1.button_1.setScale(0.11, 0.1);
				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{


					if (newPassword==password)
					{
						ali.editPassword(newPassword);

						invalidboolen = true;
						invalidinput.setString("Edited Successfully");
						invalidinput.setFillColor(Color::Green);

						password = "";
						enteredPassword.setString(password);
						newPassword = "";
						enteredNewpassword.setString(newPassword);
					}
					else {
						invalidboolen = true;
						invalidinput.setString("Make sure it is the same password");
						invalidinput.setFillColor(Color::Red);
					}
				}

			}

			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return user_edit_profile(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		user_edit_password_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			user_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			//profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			user_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			//profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(user_icon);
		if (invalidboolen)
		{
			window.draw(invalidinput);
		}
		window.draw(enteredNewpassword);
		window.draw(enteredPassword);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void user_edit_password_set(half& h1, User& ali)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 380);

	user_icon.setTexture(user_icon_texture);
	user_icon.setScale(0.2, 0.2);
	user_icon.setPosition(-500, 80);

	profile_edit.setTexture(profile_edit_texture);
	profile_edit.setScale(0.2, 0.2);
	profile_edit.setPosition(550, 230);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Edit");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("Password");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text3.setString("New Password");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(24);
	h1.text3.setPosition(80, 467);
	h1.text3.setFillColor(sf::Color::White);

	h1.text4.setString("Confirm Password");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(630, 467);
	h1.text4.setFillColor(sf::Color::White);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.1, 0.1);
	h1.textfiled_2.setPosition(300, 460);

	h1.textfiled_3.setTexture(text_field_texture);
	h1.textfiled_3.setScale(0.1, 0.1);
	h1.textfiled_3.setPosition(850, 460);


	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);

	h1.text9.setString("balance");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(18);
	h1.text9.setPosition(500, 130);
	h1.text9.setFillColor(sf::Color::White);

	stringstream stream;
	stream << fixed << setprecision(2) << ali.balance;
	h1.text10.setString(stream.str() + " $");
	h1.text10.setFont(britanicFont);
	h1.text10.setCharacterSize(26);
	h1.text10.setPosition(588, 80);
	h1.text10.setFillColor(sf::Color::Black);


	h1.textfiled_1.setTexture(text_field_texture);
	if (ali.balance >= 1000000000)
		h1.textfiled_1.setScale(0.09, 0.1);
	else if (ali.balance > 1000000)
		h1.textfiled_1.setScale(0.1, 0.1);
	else
		h1.textfiled_1.setScale(0.072, 0.1);
	h1.textfiled_1.setPosition(580, 75);

	h1.text11.setString("Change Password");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(520, 615);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 610);

}
void user_edit_password_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);
	window.draw(profile_edit);


	window.draw(back);

	window.draw(h1.textfiled_1);
	window.draw(h1.textfiled_2);
	window.draw(h1.textfiled_3);
	window.draw(h1.button_1);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text3);
	window.draw(h1.text4);
	/*window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);*/
	window.draw(h1.text9);
	window.draw(h1.text10);
	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/
	window.draw(balance);

}

void admin(Admin& ali)

{
	//texturesandfonts();
	half h1;
	Admin_set(h1, ali);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {
				if (add_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					add_user.setScale(0.042f, 0.042f); // Scale up
				else
					add_user.setScale(0.04f, 0.04f); // Return to original scale

				if (remove_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					remove_user.setScale(0.042f, 0.042f); // Scale up
				else
					remove_user.setScale(0.04f, 0.04f);

				if (suspend_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					suspend_user.setScale(0.042f, 0.042f); // Scale up
				else
					suspend_user.setScale(0.04f, 0.04f);

				if (reactivate_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					reactivate_user.setScale(0.042f, 0.042f); // Scale up
				else
					reactivate_user.setScale(0.04f, 0.04f);

				if (edit_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					edit_user.setScale(0.042f, 0.042f); // Scale up
				else
					edit_user.setScale(0.04f, 0.04f);

				if (profile_edit.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					profile_edit.setScale(0.22f, 0.22f); // Scale up
				else
					profile_edit.setScale(0.2f, 0.2f);

				if (user_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					user_history.setScale(0.22f, 0.22f); // Scale up
				else
					user_history.setScale(0.2f, 0.2f);


				if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					transiction_history.setScale(0.22f, 0.22f); // Scale up
				else
					transiction_history.setScale(0.2f, 0.2f);

				if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					logout.setScale(0.22f, 0.22f); // Scale up
				else
					logout.setScale(0.2f, 0.2f);

				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(24); // Scale up
				else
					h1.text3.setCharacterSize(22);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(24); // Scale up
				else
					h1.text4.setCharacterSize(22);

				if (h1.text5.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text5.setCharacterSize(24); // Scale up
				else
					h1.text5.setCharacterSize(22);

				if (h1.text6.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text6.setCharacterSize(24); // Scale up
				else
					h1.text6.setCharacterSize(22);

				if (h1.text7.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text7.setCharacterSize(24); // Scale up
				else
					h1.text7.setCharacterSize(22);

				if (h1.text8.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text8.setCharacterSize(26); // Scale up
				else
					h1.text8.setCharacterSize(24);

				if (h1.text9.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text9.setCharacterSize(26); // Scale up
				else
					h1.text9.setCharacterSize(24);

				if (h1.text10.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text10.setCharacterSize(26); // Scale up
				else
					h1.text10.setCharacterSize(24);

				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(26); // Scale up
				else
					h1.text11.setCharacterSize(24);

			}
			if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return Home();
			}
			if (edit_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return admin_edit_user(ali);
			}
			if (remove_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return admin_remove_user(ali);
			}
			if (suspend_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return admin_suspend_user(ali);
			}
			if (reactivate_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return admin_reactivate_user(ali);
			}
			if (add_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return admin_add_user(ali);
			}
			if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return admin_all_transactions(ali);
			}
			if (user_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				//cout << "aiaoiosa\n";
				window.clear();
				return admin_all_users(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		Admin_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 265, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 290, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 150, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950 - newXPosition, 80);
			h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 265, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 290, 130); // Adjust position of text2
			wallet_icon.setPosition(finalXPosition + 150, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950, 80);
			h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);

		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void Admin_set(half& h1, Admin& ali)

{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);


	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	/*profile_edit.setTexture(profile_edit_texture);
	profile_edit.setScale(0.2, 0.2);
	profile_edit.setPosition(950, 80);*/

	add_user.setTexture(add_user_texture);
	add_user.setScale(0.04, 0.04);
	add_user.setPosition(200, 300);

	remove_user.setTexture(remove_user_texture);
	remove_user.setScale(0.04, 0.04);
	remove_user.setPosition(440, 300);

	suspend_user.setTexture(suspend_user_texture);
	suspend_user.setScale(0.04, 0.04);
	suspend_user.setPosition(680, 300);


	reactivate_user.setTexture(reactivate_user_texture);
	reactivate_user.setScale(0.04, 0.04);
	reactivate_user.setPosition(920, 300);

	edit_user.setTexture(edit_user_texture);
	edit_user.setScale(0.04, 0.04);
	edit_user.setPosition(200, 510);

	user_history.setTexture(user_history_texture);
	user_history.setScale(0.2, 0.2);
	user_history.setPosition(440, 530);

	transiction_history.setTexture(transiction_history_texture);
	transiction_history.setScale(0.2, 0.2);
	transiction_history.setPosition(680, 530);

	logout.setTexture(logout_texture);
	logout.setScale(0.2, 0.2);
	logout.setPosition(920, 530);


	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Welcome");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString(ali.get_username());
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(245, 130);

	h1.text3.setString("Edit profile");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(22);
	h1.text3.setPosition(950, 180);
	h1.text3.setFillColor(sf::Color::White);

	h1.text4.setString("Add User");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(22);
	h1.text4.setPosition(200, 420);
	h1.text4.setFillColor(sf::Color::Black);

	h1.text5.setString("Remove User");
	h1.text5.setFont(berlinSansFont);
	h1.text5.setCharacterSize(22);
	h1.text5.setPosition(430, 420);
	h1.text5.setFillColor(sf::Color::Black);

	h1.text6.setString("Suspend User");
	h1.text6.setFont(berlinSansFont);
	h1.text6.setCharacterSize(22);
	h1.text6.setPosition(660, 420);
	h1.text6.setFillColor(sf::Color::Black);

	h1.text7.setString("Reactivae User");
	h1.text7.setFont(berlinSansFont);
	h1.text7.setCharacterSize(22);
	h1.text7.setPosition(900, 420);
	h1.text7.setFillColor(sf::Color::Black);

	h1.text8.setString("Edit User");
	h1.text8.setFont(berlinSansFont);
	h1.text8.setCharacterSize(24);
	h1.text8.setPosition(203, 630);
	h1.text8.setFillColor(sf::Color::Black);

	h1.text9.setString("Users History");
	h1.text9.setFont(berlinSansFont);
	h1.text9.setCharacterSize(24);
	h1.text9.setPosition(430, 630);
	h1.text9.setFillColor(sf::Color::Black);

	h1.text10.setString("Transactions History");
	h1.text10.setFont(berlinSansFont);
	h1.text10.setCharacterSize(24);
	h1.text10.setPosition(640, 630);
	h1.text10.setFillColor(sf::Color::Black);

	h1.text11.setString("Logout");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(925, 630);
	h1.text11.setFillColor(sf::Color::Black);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.25, 1.2);
	h1.frame_background.setPosition(520, 60);

	/*h1.textfiled_1.setTexture(text_field_texture);
	h1.textfiled_1.setScale(0.15, 0.1);
	h1.textfiled_1.setPosition(680, 250);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.15, 0.1);
	h1.textfiled_2.setPosition(680, 330);*/
}
void Admin_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);


	//window.draw(profile_edit);
	//window.draw(admin_icon);

	//window.draw(h1.text1);
	//window.draw(h1.text2);
	//window.draw(h1.text3);
	window.draw(h1.text4);
	window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);
	window.draw(h1.text9);
	window.draw(h1.text10);
	window.draw(h1.text11);


	window.draw(add_user);
	window.draw(remove_user);
	window.draw(suspend_user);
	window.draw(reactivate_user);
	window.draw(edit_user);
	window.draw(user_history);
	window.draw(transiction_history);
	window.draw(logout);

}

void admin_edit_user(Admin& ali)

{
	//texturesandfonts();
	half h1;
	admin_edit_user_set(h1);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {



				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (edit_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					edit_user.setScale(0.044f, 0.044f); // Scale up
				else
					edit_user.setScale(0.04f, 0.04f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);



				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(25); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(25); // Scale up
				else
					h1.text4.setCharacterSize(24);

				if (h1.text5.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text5.setCharacterSize(25); // Scale up
				else
					h1.text5.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				else
					h1.button_1.setScale(0.11, 0.1);

				if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_2.setScale(0.111, 0.11); // Scale up
				else
					h1.button_2.setScale(0.11, 0.1);

				if (h1.button_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_3.setScale(0.111, 0.11); // Scale up
				else
					h1.button_3.setScale(0.11, 0.1);



			}
			/*if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return Home();
			}*/
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin(ali);
			}

			if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin_edit_username_of_user(ali);
			}
			if (h1.button_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin_edit_password_of_user(ali);
			}
			if (h1.button_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin_edit_balance_of_user(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		admin_edit_user_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);
		window.draw(person);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void admin_edit_user_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	/*h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 320);*/

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	edit_user.setTexture(edit_user_texture);
	edit_user.setScale(0.04, 0.04);
	edit_user.setPosition(550, 300);


	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Edit");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("User");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text3.setString("Edit Username of a user");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(24);
	h1.text3.setPosition(140, 505);
	h1.text3.setFillColor(sf::Color::White);

	h1.text4.setString("Edit Password of a user");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(490, 505);
	h1.text4.setFillColor(sf::Color::White);

	h1.text5.setString("Edit Balance of a user");
	h1.text5.setFont(berlinSansFont);
	h1.text5.setCharacterSize(24);
	h1.text5.setPosition(840, 505);
	h1.text5.setFillColor(sf::Color::White);


	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(130, 500);

	h1.button_2.setTexture(button_texture);
	h1.button_2.setScale(0.11, 0.1);
	h1.button_2.setPosition(480, 500);

	h1.button_3.setTexture(button_texture);
	h1.button_3.setScale(0.11, 0.1);
	h1.button_3.setPosition(830, 500);

}
void admin_edit_user_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	//window.draw(h1.frame_background);
	window.draw(admin_icon);
	window.draw(edit_user);
	window.draw(back);

	window.draw(h1.button_1);
	window.draw(h1.button_2);
	window.draw(h1.button_3);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text3);
	window.draw(h1.text4);
	window.draw(h1.text5);




}

void admin_edit_username_of_user(Admin& ali)
{
	//texturesandfonts();
	half h1;
	admin_edit_username_of_user_set(h1);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis
	/////////////////////////////////////////////////////////////////////
	std::string username, newUsername; // Variables to store entered username and password

	sf::Text enteredUsername, enteredNewUsername;
	enteredUsername.setFont(rokebFint);
	enteredNewUsername.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredNewUsername.setFillColor(Color::Black);
	enteredUsername.setCharacterSize(21);
	enteredNewUsername.setCharacterSize(25);
	enteredUsername.setPosition(310, 470);
	enteredNewUsername.setPosition(860, 470);
	bool isUsernameInputActive = false;
	bool isPasswordInputActive = false;
	//wrong

	bool invalidboolen = false;
	Text invalidinput;
	invalidinput.setFont(britanicFont);
	invalidinput.setFillColor(Color::Red);
	invalidinput.setCharacterSize(25);
	invalidinput.setPosition(550, 700);
	
	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_2.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					isPasswordInputActive = false;
				}

				// Check if mouse clicked on password input field
				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isPasswordInputActive = true;
				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

				if (isPasswordInputActive) {
					if (event.text.unicode == '\b' && !newUsername.empty()) { // Backspace
						newUsername.pop_back();
					}
					else if (event.text.unicode < 128) {
						newUsername += static_cast<char>(event.text.unicode);
					}
					enteredNewUsername.setString(newUsername);
				}
			}
			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {

				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);

				if (edit_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					edit_user.setScale(0.044f, 0.044f); // Scale up
				else
					edit_user.setScale(0.04f, 0.04f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(26); // Scale up
				else
					h1.text4.setCharacterSize(24);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_2.setScale(0.1, 0.1);

				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_3.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_3.setScale(0.1, 0.1);




				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(25); // Scale up
				else
					h1.text11.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				else
					h1.button_1.setScale(0.11, 0.1);
				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{
					
					
					if (!System::search_user(username))
					{
						invalidboolen = true;
						invalidinput.setString("Username does not exist");
						invalidinput.setFillColor(Color::Red);
					}
					else if (System::search_user(newUsername))
					{
						invalidboolen = true;
						invalidinput.setString("New Username already exist");
						invalidinput.setFillColor(Color::Red);

					}
					else  {
						ali.edit_username(username, newUsername);

						invalidboolen = true;
						invalidinput.setString("Edited Successfully");
						invalidinput.setFillColor(Color::Green);
						username = "";
						enteredUsername.setString(username);
						newUsername = "";
						enteredNewUsername.setString(newUsername);
					}
				}

			}
			if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return Home();
			}
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin_edit_user(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		admin_edit_username_of_user_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);
		window.draw(person);
		if(invalidboolen)
		{
			window.draw(invalidinput);
		}
		window.draw(enteredNewUsername);
		window.draw(enteredUsername);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void admin_edit_username_of_user_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 380);

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	edit_user.setTexture(edit_user_texture);
	edit_user.setScale(0.04, 0.04);
	edit_user.setPosition(550, 230);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Edit");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("Username");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text3.setString("Current Username");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(24);
	h1.text3.setPosition(80, 467);
	h1.text3.setFillColor(sf::Color::White);

	h1.text4.setString("New Username");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(630, 467);
	h1.text4.setFillColor(sf::Color::White);



	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.1, 0.1);
	h1.textfiled_2.setPosition(300, 460);

	h1.textfiled_3.setTexture(text_field_texture);
	h1.textfiled_3.setScale(0.1, 0.1);
	h1.textfiled_3.setPosition(850, 460);

	h1.text11.setString("Change Username");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(520, 615);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 610);

}
void admin_edit_username_of_user_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);
	window.draw(edit_user);

	window.draw(wallet_icon);
	window.draw(back);

	window.draw(h1.textfiled_2);
	window.draw(h1.textfiled_3);
	window.draw(h1.button_1);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text3);
	window.draw(h1.text4);
	/*window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);*/

	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/

}

void admin_edit_password_of_user(Admin& ali)

{
	//texturesandfonts();
	half h1;
	admin_edit_password_of_user_set(h1);
	////////////////////////////////////////
	std::string username, newPassword; // Variables to store entered username and password

	sf::Text enteredUsername, enteredNewpassword;
	enteredUsername.setFont(rokebFint);
	enteredNewpassword.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredNewpassword.setFillColor(Color::Black);
	enteredUsername.setCharacterSize(21);
	enteredNewpassword.setCharacterSize(25);
	enteredUsername.setPosition(310, 470);
	enteredNewpassword.setPosition(860, 470);
	bool isUsernameInputActive = false;
	bool isPasswordInputActive = false;
	//wrong

	bool invalidboolen = false;
	Text invalidinput;
	invalidinput.setFont(britanicFont);
	invalidinput.setFillColor(Color::Red);
	invalidinput.setCharacterSize(25);
	invalidinput.setPosition(550, 700);
	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_2.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					isPasswordInputActive = false;
				}

				// Check if mouse clicked on password input field
				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isPasswordInputActive = true;
				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

				if (isPasswordInputActive) {
					if (event.text.unicode == '\b' && !newPassword.empty()) { // Backspace
						newPassword.pop_back();
					}
					else if (event.text.unicode < 128) {
						newPassword += static_cast<char>(event.text.unicode);
					}
					enteredNewpassword.setString(newPassword);
				}
			}
			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {

				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);

				if (edit_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					edit_user.setScale(0.044f, 0.044f); // Scale up
				else
					edit_user.setScale(0.04f, 0.04f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(26); // Scale up
				else
					h1.text4.setCharacterSize(24);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_2.setScale(0.1, 0.1);

				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_3.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_3.setScale(0.1, 0.1);




				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(25); // Scale up
				else
					h1.text11.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				else
					h1.button_1.setScale(0.11, 0.1);
				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{


					if (!System::search_user(username))
					{
						invalidboolen = true;
						invalidinput.setString("Username does not exist");
						invalidinput.setFillColor(Color::Red);
					}
					else {
						ali.edit_password(username,newPassword);

						invalidboolen = true;
						invalidinput.setString("Edited Successfully");
						invalidinput.setFillColor(Color::Green);
						username = "";
						enteredUsername.setString(username);
						newPassword = "";
						enteredNewpassword.setString(newPassword);
					}
				}


			}
			if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return Home();
			}
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin_edit_user(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		admin_edit_password_of_user_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);
		window.draw(person);
		if (invalidboolen)
		{
			window.draw(invalidinput);
		}
		window.draw(enteredNewpassword);
		window.draw(enteredUsername);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void admin_edit_password_of_user_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 380);

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	edit_user.setTexture(edit_user_texture);
	edit_user.setScale(0.04, 0.04);
	edit_user.setPosition(550, 230);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Edit");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("Password");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text4.setString("New Password");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(660, 467);
	h1.text4.setFillColor(sf::Color::White);

	h1.text5.setString("Username");
	h1.text5.setFont(berlinSansFont);
	h1.text5.setCharacterSize(24);
	h1.text5.setPosition(150, 467);
	h1.text5.setFillColor(sf::Color::White);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.1, 0.1);
	h1.textfiled_2.setPosition(300, 460);

	h1.textfiled_3.setTexture(text_field_texture);
	h1.textfiled_3.setScale(0.1, 0.1);
	h1.textfiled_3.setPosition(850, 460);



	h1.text11.setString("Change Password");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(520, 615);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 610);

}
void admin_edit_password_of_user_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);
	window.draw(edit_user);

	window.draw(wallet_icon);
	window.draw(back);

	window.draw(h1.textfiled_2);
	window.draw(h1.textfiled_3);

	window.draw(h1.button_1);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text4);
	window.draw(h1.text5);

	/*window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);*/

	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/

}

void admin_edit_balance_of_user(Admin& ali)

{
	//texturesandfonts();
	half h1;
	admin_edit_balance_of_user_set(h1);
	////////////////////////////////////////////
	std::string username, balance; // Variables to store entered username and password

	sf::Text enteredUsername, enteredBalance;
	enteredUsername.setFont(rokebFint);
	enteredBalance.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredBalance.setFillColor(Color::Black);
	enteredUsername.setCharacterSize(21);
	enteredBalance.setCharacterSize(25);
	enteredUsername.setPosition(310, 470);
	enteredBalance.setPosition(860, 470);
	bool isUsernameInputActive = false;
	bool isBalanceInputActive = false;
	//wrong

	bool invalidboolen = false;
	Text invalidinput;
	invalidinput.setFont(britanicFont);
	invalidinput.setFillColor(Color::Red);
	invalidinput.setCharacterSize(25);
	invalidinput.setPosition(550, 700);
	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_2.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					isBalanceInputActive = false;
				}

				// Check if mouse clicked on password input field
				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isBalanceInputActive = true;
				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

				if (isBalanceInputActive) {
					if (event.text.unicode == '\b' && !balance.empty()) { // Backspace
						balance.pop_back();
					}
					else if (event.text.unicode < 128 && (isdigit(static_cast<char>(event.text.unicode)) || event.text.unicode == '.')) {
						// Allow digits and a single decimal point
						if (event.text.unicode == '.' && balance.find('.') != std::string::npos) {
							// Allow only one decimal point


						}
						else
							balance += static_cast<char>(event.text.unicode);
					}
					enteredBalance.setString(balance);
				}
			}
			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {

				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);

				if (edit_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					edit_user.setScale(0.044f, 0.044f); // Scale up
				else
					edit_user.setScale(0.04f, 0.04f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(26); // Scale up
				else
					h1.text4.setCharacterSize(24);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_2.setScale(0.1, 0.1);

				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_3.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_3.setScale(0.1, 0.1);




				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(25); // Scale up
				else
					h1.text11.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				else
					h1.button_1.setScale(0.11, 0.1);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{


					if (!System::search_user(username))
					{
						invalidboolen = true;
						invalidinput.setString("Username does not exist");
						invalidinput.setFillColor(Color::Red);
					}
					else if (stod(balance)<0)
					{
						invalidboolen = true;
						invalidinput.setString("Balance can not be negative");
						invalidinput.setFillColor(Color::Red);
					}
					else {
						ali.edit_balance(username,stod(balance));

						invalidboolen = true;
						invalidinput.setString("Edited Successfully");
						invalidinput.setFillColor(Color::Green);
						username = "";
						enteredUsername.setString(username);
						balance = "";
						enteredBalance.setString(balance);
					}
				}
			}
			if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return Home();
			}
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin_edit_user(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		admin_edit_balance_of_user_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);
		window.draw(person);
		if (invalidboolen)
		{
			window.draw(invalidinput);
		}
		window.draw(enteredBalance);
		window.draw(enteredUsername);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void admin_edit_balance_of_user_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 380);

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	edit_user.setTexture(edit_user_texture);
	edit_user.setScale(0.04, 0.04);
	edit_user.setPosition(550, 230);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Edit");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("Balance");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text4.setString("New Balance");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(660, 467);
	h1.text4.setFillColor(sf::Color::White);

	h1.text5.setString("Username");
	h1.text5.setFont(berlinSansFont);
	h1.text5.setCharacterSize(24);
	h1.text5.setPosition(150, 467);
	h1.text5.setFillColor(sf::Color::White);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.1, 0.1);
	h1.textfiled_2.setPosition(300, 460);

	h1.textfiled_3.setTexture(text_field_texture);
	h1.textfiled_3.setScale(0.1, 0.1);
	h1.textfiled_3.setPosition(850, 460);

	h1.text11.setString("Change Balance");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(520, 615);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 610);

}
void admin_edit_balance_of_user_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);
	window.draw(edit_user);

	window.draw(wallet_icon);
	window.draw(back);

	window.draw(h1.textfiled_2);
	window.draw(h1.textfiled_3);

	window.draw(h1.button_1);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text4);
	window.draw(h1.text5);

	/*window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);*/

	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/

}

void admin_suspend_user(Admin& ali)

{
	//texturesandfonts();
	half h1;
	admin_suspend_user_set(h1);
	/////////////////////////////////////
	bool isUsernameInputActive = false;
	string username; // Variables to store entered username and password
	sf::Text enteredUsername;
	enteredUsername.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredUsername.setCharacterSize(18);
	enteredUsername.setPosition(580, 465);
	/////////////////////////////////////
	bool notExist = false;
	Text exist;
	exist.setCharacterSize(25);
	exist.setFillColor(Color::Red);
	exist.setFont(britanicFont);
	exist.setPosition(500, 700);
	exist.setString("Username does not exist");
	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_2.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;

				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

			}
			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {

				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);

				if (suspend_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					suspend_user.setScale(0.044f, 0.044f); // Scale up
				else
					suspend_user.setScale(0.04f, 0.04f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(26); // Scale up
				else
					h1.text4.setCharacterSize(24);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_2.setScale(0.1, 0.1);

				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_3.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_3.setScale(0.1, 0.1);




				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(25); // Scale up
				else
					h1.text11.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left){
					if (!System::search_user(username)) {
						exist.setString("Username does not exist");
						exist.setFillColor(Color::Red);
						notExist = true;
					}
					else {
						notExist = true;
						exist.setString("Suspended Successfully");
						exist.setFillColor(Color::Green);
						ali.suspend_user(username);
						username = "";
						enteredUsername.setString(username);

					}
				}
				else
					h1.button_1.setScale(0.11, 0.1);

			}
			if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return Home();
			}
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		admin_suspend_user_draw(h1);

		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);
		window.draw(person);
		if(notExist)
		{
			window.draw(exist);
		}
		window.draw(enteredUsername);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void admin_suspend_user_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 380);

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	suspend_user.setTexture(suspend_user_texture);
	suspend_user.setScale(0.04, 0.04);
	suspend_user.setPosition(550, 230);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Suspend");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("User");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text4.setString("Username of the user");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(340, 467);
	h1.text4.setFillColor(sf::Color::White);



	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.1, 0.1);
	h1.textfiled_2.setPosition(575, 460);



	h1.text11.setString("Suspend User");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(540, 615);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 610);

}
void admin_suspend_user_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);
	window.draw(suspend_user);

	window.draw(wallet_icon);
	window.draw(back);

	window.draw(h1.textfiled_2);
	window.draw(h1.button_1);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text4);
	/*window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);*/

	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/

}

void admin_reactivate_user(Admin& ali)

{
	//texturesandfonts();
	half h1;
	admin_reactivate_user_set(h1);
	///////////////////////////////////////////
	bool isUsernameInputActive = false;
	string username; // Variables to store entered username and password
	sf::Text enteredUsername;
	enteredUsername.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredUsername.setCharacterSize(18);
	enteredUsername.setPosition(580, 465);
	/////////////////////////////////////
	bool notExist = false;
	Text exist;
	exist.setCharacterSize(25);
	exist.setFillColor(Color::Red);
	exist.setFont(britanicFont);
	exist.setPosition(500, 700);
	exist.setString("Username does not exist");
	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_2.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;

				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

			}
			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {

				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);

				if (reactivate_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					reactivate_user.setScale(0.044f, 0.044f); // Scale up
				else
					reactivate_user.setScale(0.04f, 0.04f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(26); // Scale up
				else
					h1.text4.setCharacterSize(24);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_2.setScale(0.1, 0.1);
				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
					if (!System::search_user(username)) {
						exist.setString("Username does not exist");
						exist.setFillColor(Color::Red);
						notExist = true;
					}
					else if(!System::getUser(username)->suspended)
					{
						exist.setString("This User is not Suspended");
						exist.setFillColor(Color::Red);
						notExist = true;
					}
					else {
						notExist = true;
						exist.setString("Reactivated Successfully");
						exist.setFillColor(Color::Green);
						ali.reactivated(username);
						username = "";
						enteredUsername.setString(username);

					}
				}

				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_3.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_3.setScale(0.1, 0.1);




				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(25); // Scale up
				else
					h1.text11.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				else
					h1.button_1.setScale(0.11, 0.1);

			}
			if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return Home();
			}
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		admin_reactivate_user_draw(h1);
		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);
		window.draw(person);
		if (notExist)
		{
			window.draw(exist);
		}
		window.draw(enteredUsername);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void admin_reactivate_user_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 380);

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	reactivate_user.setTexture(reactivate_user_texture);
	reactivate_user.setScale(0.04, 0.04);
	reactivate_user.setPosition(550, 230);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Reactivate");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("User");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text4.setString("Username of the user");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(340, 467);
	h1.text4.setFillColor(sf::Color::White);



	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.1, 0.1);
	h1.textfiled_2.setPosition(575, 460);



	h1.text11.setString("Reactivate User");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(535, 615);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 610);

}
void admin_reactivate_user_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);
	window.draw(reactivate_user);

	window.draw(wallet_icon);
	window.draw(back);

	window.draw(h1.textfiled_2);
	window.draw(h1.button_1);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text4);
	/*window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);*/

	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/

}

void admin_remove_user(Admin& ali)

{
	//texturesandfonts();
	half h1;
	admin_remove_user_set(h1);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis
	////////////////////////////////////////////////
	bool isUsernameInputActive = false;
	string username; // Variables to store entered username and password
	sf::Text enteredUsername;
	enteredUsername.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredUsername.setCharacterSize(18);
	enteredUsername.setPosition(580, 465);
	/////////////////////////////////////
	bool notExist = false;
	Text exist;
	exist.setCharacterSize(25);
	exist.setFillColor(Color::Red);
	exist.setFont(britanicFont);
	exist.setPosition(500, 700);
	exist.setString("Username does not exist");
	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_2.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					
				}

			}
			if (event.type == sf::Event::TextEntered) {
				if (isUsernameInputActive) {
					if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
						username.pop_back();
					}
					else if (event.text.unicode < 128) {
						username += static_cast<char>(event.text.unicode);
					}
					enteredUsername.setString(username);
				}

			}
			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {

				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);

				if (remove_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					remove_user.setScale(0.044f, 0.044f); // Scale up
				else
					remove_user.setScale(0.04f, 0.04f);

				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(26); // Scale up
				else
					h1.text4.setCharacterSize(24);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_2.setScale(0.1, 0.1);

				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_3.setScale(0.1, 0.11); // Scale up
				else
					h1.textfiled_3.setScale(0.1, 0.1);




				if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text11.setCharacterSize(25); // Scale up
				else
					h1.text11.setCharacterSize(24);

				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.button_1.setScale(0.111, 0.11); // Scale up
				if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{
					if (!System::search_user(username)) {
						exist.setString("Username does not exist");
						exist.setFillColor(Color::Red);
						notExist = true;
					}
					else {
						notExist = true;
						exist.setString("Deleted Successfully");
						exist.setFillColor(Color::Green);
						System::allUsers.erase(username);
						username = "";
						enteredUsername.setString(username);

					}
				}
				else
					h1.button_1.setScale(0.11, 0.1);

			}
			if (logout.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return Home();
			}
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin(ali);
			}

		}

		// Handle mouse interaction with buttons

		// Clear the window
		window.clear();

		// Draw other sprites
		admin_remove_user_draw(h1);
		// Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
			profile_edit.setPosition(950, 80);
			//h1.text3.setPosition(950, 180);
		}



		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);
		window.draw(person);
		if(notExist)
		{
			window.draw(exist);
		}
		window.draw(enteredUsername);
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/
	}
}
void admin_remove_user_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 380);

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	remove_user.setTexture(remove_user_texture);
	remove_user.setScale(0.04, 0.04);
	remove_user.setPosition(550, 230);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Remove");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("User");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text4.setString("Username of the user");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(340, 467);
	h1.text4.setFillColor(sf::Color::White);



	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.1, 0.1);
	h1.textfiled_2.setPosition(575, 460);



	h1.text11.setString("Remove User");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(540, 615);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 610);

}
void admin_remove_user_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(user_icon);
	window.draw(remove_user);

	window.draw(wallet_icon);
	window.draw(back);

	window.draw(h1.textfiled_2);
	window.draw(h1.button_1);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text4);
	/*window.draw(h1.text5);
	window.draw(h1.text6);
	window.draw(h1.text7);
	window.draw(h1.text8);*/

	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/

}

void admin_add_user(Admin& ali)

{
	//texturesandfonts();
	half h1;
	admin_add_user_set(h1);
	////////////////////////////////
	bool isUsernameInputActive = false;
	bool isPasswordInputActive = false;
	bool isBalanceInputActive = false;
	string username, password; // Variables to store entered username and password
	string balance;
	sf::Text enteredUsername, enteredPassword, enteredBalance;
	enteredUsername.setFont(rokebFint);
	enteredPassword.setFont(rokebFint);
	enteredBalance.setFont(rokebFint);
	enteredUsername.setFillColor(Color::Black);
	enteredPassword.setFillColor(Color::Black);
	enteredBalance.setFillColor(Color::Black);
	enteredUsername.setCharacterSize(18);
	enteredPassword.setCharacterSize(18);
	enteredBalance.setCharacterSize(18);
	enteredUsername.setPosition(162, 463);
	enteredPassword.setPosition(548, 463);
	enteredBalance.setPosition(908, 463);
	//////////////////////////////////////
	Text alreadyExist,missingText;
	alreadyExist.setFont(britanicFont);
	alreadyExist.setFillColor(Color::Red);
	alreadyExist.setCharacterSize(22);
	alreadyExist.setPosition(535,650);
	
	bool exist=false;
	bool missing = false;
	missingText.setFont(britanicFont);
		missingText.setFillColor(Color::Red);
		
		missingText.setCharacterSize(30);
		missingText.setPosition(530,650);
	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;

	// Calculate the distance to move for the y-axis transitions

	// Calculate the time needed for the y-axis animations based on the speed
	// 

	// Create a clock to measure time
	sf::Clock clock;

	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));
			if (event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(window);

				// Check if mouse clicked on username input field
				if (h1.textfiled_1.getGlobalBounds().contains(Vector2f(mousePosition))) {
					isUsernameInputActive = true;
					isPasswordInputActive = false;
					isBalanceInputActive = false;
				}

				// Check if mouse clicked on password input field
				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isPasswordInputActive = true;
					isBalanceInputActive = false;
				}
				if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition))) {
					isUsernameInputActive = false;
					isPasswordInputActive = false;
					isBalanceInputActive = true;

				}
			}
				if (event.type == sf::Event::TextEntered) {
					if (isUsernameInputActive) {
						if (event.text.unicode == '\b' && !username.empty()) { // Backspacek
							username.pop_back();
						}
						else if (event.text.unicode < 128) {
							username += static_cast<char>(event.text.unicode);
						}
						enteredUsername.setString(username);
					}

					if (isPasswordInputActive) {
						if (event.text.unicode == '\b' && !password.empty()) { // Backspace
							password.pop_back();
						}
						else if (event.text.unicode < 128) {
							password += static_cast<char>(event.text.unicode);
						}
						enteredPassword.setString(std::string(password.size(), '*'));
					}
					if (isBalanceInputActive) {
						if (event.text.unicode == '\b' && !balance.empty()) { // Backspace
							balance.pop_back();
						}
						else if (event.text.unicode < 128 && (isdigit(static_cast<char>(event.text.unicode)) || event.text.unicode == '.')) {
							// Allow digits and a single decimal point
							if (event.text.unicode == '.' && balance.find('.') != std::string::npos) {
								// Allow only one decimal point
								
								
							}
							else
							balance += static_cast<char>(event.text.unicode);
						}
						enteredBalance.setString(balance);
					}
				}
				// Check if mouse is over specific sprites and adjust scale accordingly
				if (true) {

					if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						admin_icon.setScale(0.22f, 0.22f); // Scale up
					else
						admin_icon.setScale(0.2f, 0.2f);

					if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						back.setScale(0.165, 0.165); // Scale up
					else
						back.setScale(0.15, 0.15);

					if (add_user.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						add_user.setScale(0.044f, 0.044f); // Scale up
					else
						add_user.setScale(0.04f, 0.04f);

					if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text1.setCharacterSize(43); // Scale up
					else
						h1.text1.setCharacterSize(40);

					if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text2.setCharacterSize(43); // Scale up
					else
						h1.text2.setCharacterSize(40);

					if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text3.setCharacterSize(26); // Scale up
					else
						h1.text3.setCharacterSize(24);

					if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text4.setCharacterSize(26); // Scale up
					else
						h1.text4.setCharacterSize(24);

					if (h1.text5.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text5.setCharacterSize(26); // Scale up
					else
						h1.text5.setCharacterSize(24);

					if (h1.text6.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text6.setCharacterSize(26); // Scale up
					else
						h1.text6.setCharacterSize(24);

					if (h1.textfiled_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_1.setScale(0.0935, 0.11); // Scale up
					else
						h1.textfiled_1.setScale(0.085, 0.1);

					if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_2.setScale(0.0935, 0.11); // Scale up
					else
						h1.textfiled_2.setScale(0.085, 0.1);

					if (h1.textfiled_3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_3.setScale(0.0715, 0.11); // Scale up
					else
						h1.textfiled_3.setScale(0.065, 0.1);




					if (h1.text11.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text11.setCharacterSize(25); // Scale up
					else
						h1.text11.setCharacterSize(24);

					if (h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.button_1.setScale(0.111, 0.11); // Scale up
					if(h1.button_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)) &&event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
					{
						if(username.empty() ||password.empty()||balance.empty())
						{
							missingText.setFillColor(Color::Red);
							missingText.setString("please fill all data");
							missing = true;
							exist = false;
						}
						else if (System::allUsers.find(username) != System::allUsers.end())
						{

							exist = true;
							alreadyExist.setString("Username Already exist please Try again");
							alreadyExist.setFillColor(Color::Red);
						}
						else {
							if(missing)
							{
								missingText.setFillColor(Color::Green);
								missingText.setString("Added successfully");
							}
							if(exist)
							{
								alreadyExist.setString("Added successfully");
								alreadyExist.setFillColor(Color::Green);
							}
							System::Register(username, password, stod(balance));
							username = "";
							password = "";
							balance = "";
							enteredPassword.setString(std::string(password.size(), '*'));
							enteredUsername.setString(username);
							enteredBalance.setString(balance);
							
						}
					}
					else
						h1.button_1.setScale(0.11, 0.1);

				}

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{
					window.clear();
					return admin(ali);
				}

		}

			// Handle mouse interaction with buttons

			// Clear the window
			window.clear();

			// Draw other sprites
			admin_add_user_draw(h1);
			// Calculate the new position of the sprites based on elapsed time for x-axis transition
			if (clock.getElapsedTime().asSeconds() < animationTimeX)
			{
				float elapsedTimeX = clock.getElapsedTime().asSeconds();
				float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
				h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
				h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
				admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
				profile_edit.setPosition(950 - newXPosition, 80);
				//h1.text3.setPosition(950 - newXPosition, 180);
			}
			else
			{
				// Animation for x-axis transition is complete, set the final position of the sprites
				h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
				h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
				admin_icon.setPosition(finalXPosition + 50, 80); // Adjust position of wallet_icon
				profile_edit.setPosition(950, 80);
				//h1.text3.setPosition(950, 180);
			}



			// Draw the texts, wallet_icon, buttons
			window.draw(h1.text1);
			window.draw(h1.text2);
			window.draw(admin_icon);
			window.draw(person);
		    if(exist)
		    {
		 	  window.draw(alreadyExist);
			}
			else if (missing)
				window.draw(missingText);
			window.draw(enteredUsername);
			window.draw(enteredPassword);
			window.draw(enteredBalance);
			// Display the window
			window.display();

			// Check if both animations are complete
			/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
				break;*/
	}
}
void admin_add_user_set(half& h1)
{
	background.setTexture(background_texture);
	background.setScale(1.5, 1.5);

	h1.frame_background.setTexture(background_frame_texture);
	h1.frame_background.setScale(0.47, 0.47);
	h1.frame_background.setPosition(30, 380);

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	add_user.setTexture(add_user_texture);
	add_user.setScale(0.04, 0.04);
	add_user.setPosition(570, 230);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(50, 700);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Add");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("User");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text3.setString("Username");
	h1.text3.setFont(berlinSansFont);
	h1.text3.setCharacterSize(24);
	h1.text3.setPosition(40, 467);
	h1.text3.setFillColor(sf::Color::White);

	h1.text4.setString("Password");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(24);
	h1.text4.setPosition(420, 467);
	h1.text4.setFillColor(sf::Color::White);

	h1.text5.setString("Balance");
	h1.text5.setFont(berlinSansFont);
	h1.text5.setCharacterSize(24);
	h1.text5.setPosition(800, 467);

	h1.textfiled_1.setTexture(text_field_texture);
	h1.textfiled_1.setScale(0.085, 0.1);
	h1.textfiled_1.setPosition(155, 460);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.085, 0.1);
	h1.textfiled_2.setPosition(540, 460);

	h1.textfiled_3.setTexture(text_field_texture);
	h1.textfiled_3.setScale(0.065, 0.1);
	h1.textfiled_3.setPosition(900, 460);


	h1.text11.setString("Add User");
	h1.text11.setFont(berlinSansFont);
	h1.text11.setCharacterSize(24);
	h1.text11.setPosition(570, 615);
	h1.text11.setFillColor(sf::Color::White);

	h1.button_1.setTexture(button_texture);
	h1.button_1.setScale(0.11, 0.1);
	h1.button_1.setPosition(480, 610);

}
void admin_add_user_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	window.draw(admin_icon);
	window.draw(add_user);

	window.draw(back);

	window.draw(h1.textfiled_1);
	window.draw(h1.textfiled_2);
	window.draw(h1.textfiled_3);

	window.draw(h1.button_1);

	window.draw(h1.text1);
	window.draw(h1.text2);
	window.draw(h1.text3);
	window.draw(h1.text4);
	window.draw(h1.text5);

	window.draw(h1.text11);

	/*window.draw(send);
	window.draw(request);
	window.draw(message);
	window.draw(logout);
	window.draw(transiction_history);*/

}

void admin_all_transactions(Admin& ali)

{
	half h1;
	h1.textfiled_arr_1 = new Sprite[System::allTransactions.size()];
	h1.textfiled_arr_2 = new Sprite[System::allTransactions.size()];
	h1.textfiled_arr_3 = new Sprite[System::allTransactions.size()];
	h1.textfiled_arr_4 = new Sprite[System::allTransactions.size()];

	h1.frame_background_arr = new Sprite[System::allTransactions.size()];
	h1.button_1_arr = new Sprite[System::allTransactions.size()];
	h1.button_2_arr = new Sprite[System::allTransactions.size()];
	h1.text_arr_1 = new Text[System::allTransactions.size()];
	h1.text_arr_2 = new Text[System::allTransactions.size()];
	h1.text_arr_3 = new Text[System::allTransactions.size()];
	h1.text_arr_4 = new Text[System::allTransactions.size()];
	h1.text_arr_5 = new Text[System::allTransactions.size()];
	h1.text_arr_6 = new Text[System::allTransactions.size()];
	h1.text_arr_7 = new Text[System::allTransactions.size()];
	h1.text_arr_8 = new Text[System::allTransactions.size()];

	//texturesandfonts();
//size_of_arr = System::allTransactions.size();
	admin_all_transactions_set(h1, ali);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800.0f; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;
	//////////////////////////////////////////////////////////////////////////////////////////

	float initialPosition2 = -1200;

	// Define the speed of the animation for x-axis transition
	float animationSpeedX2 = 1500.0f; // pixels per second


	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX2 = finalXPosition - initialPosition2;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX2 = std::abs(distanceToMoveX2) / animationSpeedX2;

	// Create a clock to measure time
	sf::Clock clock;
	sf::View view(sf::FloatRect(0, 0, window.getSize().x, window.getSize().y));
	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {


				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);

				if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					transiction_history.setScale(0.22f, 0.22f); // Scale up
				else
					transiction_history.setScale(0.2f, 0.2f);

				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);



				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);



				for (int i = 0; i < System::allTransactions.size(); i++)
				{

					if (h1.textfiled_arr_1[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_1[i].setScale(0.1, 0.088); // Scale up
					else
						h1.textfiled_arr_1[i].setScale(0.1, 0.08);


					if (h1.textfiled_arr_2[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_2[i].setScale(0.08, 0.088); // Scale up
					else
						h1.textfiled_arr_2[i].setScale(0.08, 0.08);

					if (h1.textfiled_arr_3[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_3[i].setScale(0.1, 0.088); // Scale up
					else
						h1.textfiled_arr_3[i].setScale(0.1, 0.08);

					if (h1.textfiled_arr_4[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_4[i].setScale(0.08, 0.088); // Scale up
					else
						h1.textfiled_arr_4[i].setScale(0.08, 0.08);

					if (h1.text_arr_1[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_1[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_1[i].setCharacterSize(20);

					if (h1.text_arr_2[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_2[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_2[i].setCharacterSize(20);

					if (h1.frame_background_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.frame_background_arr[i].setScale(0.47, 0.38);// Scale up
					else
						h1.frame_background_arr[i].setScale(0.47, 0.35);

					if (h1.button_1_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.button_1_arr[i].setScale(0.1155, 0.1155);
					else
						h1.button_1_arr[i].setScale(0.105, 0.105);

					if (h1.button_2_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.button_2_arr[i].setScale(0.088, 0.088);
					else
						h1.button_2_arr[i].setScale(0.08, 0.08);

					if (h1.text_arr_3[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_3[i].setCharacterSize(26);// Scale up
					else
						h1.text_arr_3[i].setCharacterSize(24);

					if (h1.text_arr_4[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_4[i].setCharacterSize(24);// Scale up
					else
						h1.text_arr_4[i].setCharacterSize(22);

					if (h1.text_arr_5[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_5[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_5[i].setCharacterSize(20);

					if (h1.text_arr_6[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_6[i].setCharacterSize(26);// Scale up
					else
						h1.text_arr_6[i].setCharacterSize(24);

					if (h1.text_arr_7[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_7[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_7[i].setCharacterSize(20);

					if (h1.text_arr_8[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_8[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_8[i].setCharacterSize(20);

				}

				//}

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{
					window.clear();
					return admin(ali);
				}
				if (event.type == sf::Event::MouseWheelScrolled && event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel) {
					// Adjust the view when scrolling vertically
					if (view.getCenter().y - window.getSize().y / 2 > -0.1)
					{
						view.move(0, -event.mouseWheelScroll.delta * 30); // Adjust the scrolling speed here
						window.setView(view);
					}
					else
					{
						view.move(0, 2); // Adjust the scrolling speed here
						window.setView(view);
					}
				}
			}
			if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
			{
				window.clear();
				return admin(ali);
			}

		}
		window.clear();

		admin_all_transactions_draw(h1);

		//Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			//profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
			back.setPosition(1050 - newXPosition, 240);
			transiction_history.setPosition(550 - newXPosition, 230);

		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(finalXPosition + 50, 80);
			back.setPosition(1050, 240);
			transiction_history.setPosition(550, 230);

		}
		if (clock.getElapsedTime().asSeconds() < animationTimeX2)
		{
			float elapsedTimeX2 = clock.getElapsedTime().asSeconds();
			float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));

			back.setPosition(1050 - newXPosition2, 240);
			transiction_history.setPosition(550 - newXPosition2, 230);

		}
		else
		{

			back.setPosition(1050, 240);
			transiction_history.setPosition(550, 230);

		}

		if (System::allTransactions.empty())
		{
			if (clock.getElapsedTime().asSeconds() < animationTimeX2)
			{
				float elapsedTimeX2 = clock.getElapsedTime().asSeconds();
				float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));
				h1.text10.setPosition(newXPosition2 + 400, 450);

			}
			else
			{
				h1.text10.setPosition(400, 450);

			}
		}
		// Define the delay between the movement of each element (in seconds)
		float movementDelay = 0.2f; // Adjust this value as needed

		// Inside the loop over the elements
		float totalAnimationTime = System::allTransactions.size() * movementDelay + animationTimeX2;

		// Inside the loop over the elements
		for (int i = 0; i < System::allTransactions.size(); i++)
		{
			// Calculate the delay for this element based on its index
			float elementDelay = i * movementDelay;

			// Check if enough time has passed for this element to start moving
			if (clock.getElapsedTime().asSeconds() >= elementDelay)
			{
				// Calculate the elapsed time for this element
				float elapsedTimeX2 = clock.getElapsedTime().asSeconds() - elementDelay;

				// Calculate the position based on the elapsed time and animation parameters
				float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));
				newXPosition2 = std::min(newXPosition2, finalXPosition); // Ensure position doesn't overshoot the final position

				// Set the positions of the elements
				h1.frame_background_arr[i].setPosition(newXPosition2 + 30, 360 + i * 160);
				h1.textfiled_arr_1[i].setPosition(newXPosition2 + 300, 385 + i * 160);
				h1.textfiled_arr_2[i].setPosition(newXPosition2 + 850, 385 + i * 160);
				h1.textfiled_arr_3[i].setPosition(newXPosition2 + 300, 443 + i * 160);
				h1.textfiled_arr_4[i].setPosition(newXPosition2 + 850, 443 + i * 160);

				h1.text_arr_1[i].setPosition(newXPosition2 + 87, 392 + i * 160);
				h1.text_arr_2[i].setPosition(newXPosition2 + 750, 392 + i * 160);
				h1.text_arr_3[i].setPosition(newXPosition2 + 315, 385 + i * 160);
				h1.text_arr_4[i].setPosition(newXPosition2 + 865, 388 + i * 160);
				h1.text_arr_5[i].setPosition(newXPosition2 + 78, 450 + i * 160);
				h1.text_arr_6[i].setPosition(newXPosition2 + 315, 443 + i * 160);
				h1.text_arr_7[i].setPosition(newXPosition2 + 750, 450 + i * 160);
				h1.text_arr_8[i].setPosition(newXPosition2 + 865, 446 + i * 160);

			}
			else
			{
				// If not enough time has passed, keep the element at its initial position
				h1.frame_background_arr[i].setPosition(initialPosition2 + 30, 360 + i * 160);
				h1.textfiled_arr_1[i].setPosition(initialPosition2 + 300, 385 + i * 160);
				h1.textfiled_arr_2[i].setPosition(initialPosition2 + 850, 385 + i * 160);
				h1.textfiled_arr_3[i].setPosition(initialPosition2 + 300, 443 + i * 160);
				h1.textfiled_arr_4[i].setPosition(initialPosition2 + 850, 443 + i * 160);




				h1.text_arr_1[i].setPosition(initialPosition2 + 87, 392 + i * 160);
				h1.text_arr_2[i].setPosition(initialPosition2 + 750, 392 + i * 160);
				h1.text_arr_3[i].setPosition(initialPosition2 + 315, 385 + i * 160);
				h1.text_arr_4[i].setPosition(initialPosition2 + 865, 388 + i * 160);
				h1.text_arr_5[i].setPosition(initialPosition2 + 87, 450 + i * 160);
				h1.text_arr_6[i].setPosition(initialPosition2 + 315, 443 + i * 160);
				h1.text_arr_7[i].setPosition(initialPosition2 + 750, 450 + i * 160);
				h1.text_arr_8[i].setPosition(initialPosition2 + 865, 446 + i * 160);


			}
		}




		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);
		window.draw(transiction_history);
		window.draw(back);
		if (System::allTransactions.empty())
		{
			window.draw(h1.text10);
		}

		for (int i = 0; i < System::allTransactions.size(); i++)
		{
			window.draw(h1.frame_background_arr[i]);
			window.draw(h1.textfiled_arr_1[i]);
			window.draw(h1.textfiled_arr_2[i]);
			window.draw(h1.textfiled_arr_3[i]);
			window.draw(h1.textfiled_arr_4[i]);

			window.draw(h1.text_arr_1[i]);
			window.draw(h1.text_arr_2[i]);
			window.draw(h1.text_arr_3[i]);
			window.draw(h1.text_arr_4[i]);
			window.draw(h1.text_arr_5[i]);
			window.draw(h1.text_arr_6[i]);
			window.draw(h1.text_arr_7[i]);
			window.draw(h1.text_arr_8[i]);

		}
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/


	}
}
void admin_all_transactions_set(half& h1, Admin& ali)
{

	background.setTexture(background_texture);
	background.setScale(1.5, 3);
	background.setPosition(0, -500);

	auto it = System::allTransactions.rbegin();
	for (int i = 0; i < System::allTransactions.size(); i++)
	{

		h1.frame_background_arr[i].setTexture(background_frame_texture);
		h1.frame_background_arr[i].setScale(0.47, 0.35);
		h1.frame_background_arr[i].setPosition(30, 360 + i * 160);

		h1.textfiled_arr_3[i].setTexture(text_field_texture);
		h1.textfiled_arr_3[i].setScale(0.1, 0.08);
		h1.textfiled_arr_3[i].setPosition(300, 443 + i * 160);

		h1.textfiled_arr_1[i].setTexture(text_field_texture);
		h1.textfiled_arr_1[i].setScale(0.1, 0.08);
		h1.textfiled_arr_1[i].setPosition(300, 385 + i * 160);

		h1.textfiled_arr_2[i].setTexture(text_field_texture);
		h1.textfiled_arr_2[i].setScale(0.08, 0.08);
		h1.textfiled_arr_2[i].setPosition(850, 385 + i * 160);

		h1.textfiled_arr_4[i].setTexture(text_field_texture);
		h1.textfiled_arr_4[i].setScale(0.08, 0.08);
		h1.textfiled_arr_4[i].setPosition(850, 443 + i * 160);



		h1.text_arr_1[i].setString("Sender Username");
		h1.text_arr_1[i].setFont(berlinSansFont);
		h1.text_arr_1[i].setCharacterSize(20);
		h1.text_arr_1[i].setPosition(87, 392 + i * 160);
		h1.text_arr_1[i].setFillColor(sf::Color::White);

		h1.text_arr_5[i].setString("Recipient Username");
		h1.text_arr_5[i].setFont(berlinSansFont);
		h1.text_arr_5[i].setCharacterSize(20);
		h1.text_arr_5[i].setPosition(87, 450 + i * 160);
		h1.text_arr_5[i].setFillColor(sf::Color::White);

		h1.text_arr_2[i].setString("Amount");
		h1.text_arr_2[i].setFont(berlinSansFont);
		h1.text_arr_2[i].setCharacterSize(20);
		h1.text_arr_2[i].setPosition(750, 392 + i * 160);
		h1.text_arr_2[i].setFillColor(sf::Color::White);

		h1.text_arr_7[i].setString("Date");
		h1.text_arr_7[i].setFont(berlinSansFont);
		h1.text_arr_7[i].setCharacterSize(20);
		h1.text_arr_7[i].setPosition(750, 450 + i * 160);
		h1.text_arr_7[i].setFillColor(sf::Color::White);

		h1.text_arr_3[i].setString(it->sender);
		h1.text_arr_3[i].setFont(berlinSansFont);
		h1.text_arr_3[i].setCharacterSize(24);
		h1.text_arr_3[i].setPosition(315, 385 + i * 160);
		h1.text_arr_3[i].setFillColor(sf::Color::Black);

		h1.text_arr_6[i].setString(it->reciever);
		h1.text_arr_6[i].setFont(berlinSansFont);
		h1.text_arr_6[i].setCharacterSize(24);
		h1.text_arr_6[i].setPosition(315, 443 + i * 160);
		h1.text_arr_6[i].setFillColor(sf::Color::Black);

		stringstream stream2;
		stream2 << fixed << setprecision(2) << it->amount;
		h1.text_arr_4[i].setString(stream2.str() + " $");
		h1.text_arr_4[i].setFont(berlinSansFont);
		h1.text_arr_4[i].setCharacterSize(22);
		h1.text_arr_4[i].setPosition(865, 388 + i * 160);
		h1.text_arr_4[i].setFillColor(sf::Color::Black);

		string d = (to_string(it->Date.day) + '/' + to_string(it->Date.month) + '/' + to_string(it->Date.year) + "   " + to_string(it->Date.hour) + ':' + to_string(it->Date.min));
		h1.text_arr_8[i].setString(d);
		h1.text_arr_8[i].setFont(berlinSansFont);
		h1.text_arr_8[i].setCharacterSize(20);
		h1.text_arr_8[i].setPosition(865, 446 + i * 160);
		h1.text_arr_8[i].setFillColor(sf::Color::Black);

		++it;
	}

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	transiction_history.setTexture(transiction_history_texture);
	transiction_history.setScale(0.2, 0.2);
	transiction_history.setPosition(550, 230);


	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(1050, 240);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Display");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("Transactions");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);
	if (System::allTransactions.empty())
	{
		h1.text10.setString("There is no Transactions\n       to be displayed");
		h1.text10.setFont(britanicFont);
		h1.text10.setCharacterSize(35);
		h1.text10.setPosition(400, 450);
		h1.text10.setFillColor(Color::Blue);
	}
}
void admin_all_transactions_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	//window.draw(admin_icon);


	//window.draw(h1.textfiled_2);
	//window.draw(h1.textfiled_3);

	//window.draw(h1.text1);
	//window.draw(h1.text2);
	//window.draw(h1.text3);
	//window.draw(h1.text4);
	///*window.draw(h1.text5);
	//window.draw(h1.text6);
	//window.draw(h1.text7);
	//window.draw(h1.text8);*/



}

void admin_all_users(Admin& ali)

{
	half h1;
	h1.textfiled_arr_1 = new Sprite[System::allUsers.size()];
	h1.textfiled_arr_2 = new Sprite[System::allUsers.size()];
	h1.textfiled_arr_3 = new Sprite[System::allUsers.size()];
	h1.frame_background_arr = new Sprite[System::allUsers.size()];
	h1.button_1_arr = new Sprite[System::allUsers.size()];
	h1.button_2_arr = new Sprite[System::allUsers.size()];
	h1.text_arr_1 = new Text[System::allUsers.size()];
	h1.text_arr_2 = new Text[System::allUsers.size()];
	h1.text_arr_3 = new Text[System::allUsers.size()];
	h1.text_arr_4 = new Text[System::allUsers.size()];
	h1.text_arr_5 = new Text[System::allUsers.size()];
	h1.text_arr_6 = new Text[System::allUsers.size()];
	//texturesandfonts();
//size_of_arr = System::allTransactions.size();
	admin_all_users_set(h1);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;
	//////////////////////////////////////////////////////////////////////////////////////////

	float initialPosition2 = -1200;

	// Define the speed of the animation for x-axis transition
	float animationSpeedX2 = 1500; // pixels per second


	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX2 = finalXPosition - initialPosition2;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX2 = std::abs(distanceToMoveX2) / animationSpeedX2;

	// Create a clock to measure time
	sf::Clock clock;
	sf::View view(sf::FloatRect(0, 0, window.getSize().x, window.getSize().y));
	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {


				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);

				if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					transiction_history.setScale(0.22f, 0.22f); // Scale up
				else
					transiction_history.setScale(0.2f, 0.2f);

				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);



				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(26); // Scale up
				else
					h1.text3.setCharacterSize(24);



				for (int i = 0; i < System::allUsers.size(); i++)
				{

					if (h1.textfiled_arr_1[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_1[i].setScale(0.1, 0.088); // Scale up
					else
						h1.textfiled_arr_1[i].setScale(0.1, 0.08);


					if (h1.textfiled_arr_2[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_2[i].setScale(0.08, 0.088); // Scale up
					else
						h1.textfiled_arr_2[i].setScale(0.08, 0.08);

					if (h1.text_arr_1[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_1[i].setCharacterSize(25);// Scale up
					else
						h1.text_arr_1[i].setCharacterSize(23);

					if (h1.text_arr_2[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_2[i].setCharacterSize(25);// Scale up
					else
						h1.text_arr_2[i].setCharacterSize(23);

					if (h1.frame_background_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.frame_background_arr[i].setScale(0.47, 0.38);// Scale up
					else
						h1.frame_background_arr[i].setScale(0.47, 0.35);

					if (h1.button_1_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.button_1_arr[i].setScale(0.1205, 0.11);
					else
						h1.button_1_arr[i].setScale(0.12, 0.1);

					if (h1.button_2_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.button_2_arr[i].setScale(0.088, 0.088);
					else
						h1.button_2_arr[i].setScale(0.08, 0.08);

					if (h1.text_arr_3[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_3[i].setCharacterSize(26);// Scale up
					else
						h1.text_arr_3[i].setCharacterSize(24);

					if (h1.text_arr_4[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_4[i].setCharacterSize(24);// Scale up
					else
						h1.text_arr_4[i].setCharacterSize(22);

					if (h1.text_arr_5[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_5[i].setCharacterSize(27);// Scale up
					else
						h1.text_arr_5[i].setCharacterSize(25);

					if (h1.text_arr_6[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_6[i].setCharacterSize(23);// Scale up
					else
						h1.text_arr_6[i].setCharacterSize(22);
				}

				

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{
					window.clear();
					return admin(ali);
				}
				if (event.type == sf::Event::MouseWheelScrolled && event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel) {
					// Adjust the view when scrolling vertically
					if (view.getCenter().y - window.getSize().y / 2 > -0.1)
					{
						view.move(0, -event.mouseWheelScroll.delta * 30); // Adjust the scrolling speed here
						window.setView(view);
					}
					else
					{
						view.move(0, 2); // Adjust the scrolling speed here
						window.setView(view);
					}
				}
			}
			
			auto it = System::allUsers.begin();
			for (int i = 0; i < System::allUsers.size(); i++)
			{
				if (h1.button_1_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{
					window.clear();
					return admin_User_transactions(ali, it->second);

				}
				it++;
			}


		}
		window.clear();

		admin_all_users_draw(h1);

		//Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			//profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
			back.setPosition(1050 - newXPosition, 240);

		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(finalXPosition + 50, 80);
			back.setPosition(1050, 240);

		}
		if (clock.getElapsedTime().asSeconds() < animationTimeX2)
		{
			float elapsedTimeX2 = clock.getElapsedTime().asSeconds();
			float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));

			back.setPosition(1050 - newXPosition2, 240);
			user_history.setPosition(550 - newXPosition2, 230);

		}
		else
		{

			back.setPosition(1050, 240);
			user_history.setPosition(550, 230);

		}

		if (System::allUsers.empty())
		{
			if (clock.getElapsedTime().asSeconds() < animationTimeX2)
			{
				float elapsedTimeX2 = clock.getElapsedTime().asSeconds();
				float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));
				h1.text10.setPosition(newXPosition2 + 400, 450);

			}
			else
			{
				h1.text10.setPosition(400, 450);

			}
		}

		float movementDelay = 0.2f;


		float totalAnimationTime = System::allUsers.size() * movementDelay + animationTimeX2;


		for (int i = 0; i < System::allUsers.size(); i++)
		{
			// Calculate the delay for this element based on its index
			float elementDelay = i * movementDelay;

			// Check if enough time has passed for this element to start moving
			if (clock.getElapsedTime().asSeconds() >= elementDelay)
			{
				// Calculate the elapsed time for this element
				float elapsedTimeX2 = clock.getElapsedTime().asSeconds() - elementDelay;

				// Calculate the position based on the elapsed time and animation parameters
				float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));
				newXPosition2 = std::min(newXPosition2, finalXPosition); // Ensure position doesn't overshoot the final position

				// Set the positions of the elements
				h1.frame_background_arr[i].setPosition(newXPosition2 + 30, 360 + i * 160);
				h1.textfiled_arr_1[i].setPosition(newXPosition2 + 225, 385 + i * 160);
				h1.textfiled_arr_2[i].setPosition(newXPosition2 + 225, 450 + i * 160);

				h1.text_arr_1[i].setPosition(newXPosition2 + 87, 392 + i * 160);
				h1.text_arr_2[i].setPosition(newXPosition2 + 87, 450 + i * 160);
				h1.button_1_arr[i].setPosition(newXPosition2 + 720, 415 + i * 160);
				h1.text_arr_3[i].setPosition(newXPosition2 + 240, 385 + i * 160);
				h1.text_arr_4[i].setPosition(newXPosition2 + 240, 450 + i * 160);
				h1.text_arr_5[i].setPosition(newXPosition2 + 1020, 370 + i * 160);
				h1.text_arr_6[i].setPosition(newXPosition2 + 740, 417 + i * 160);
			}
			else
			{
				// If not enough time has passed, keep the element at its initial position
				h1.frame_background_arr[i].setPosition(initialPosition2 + 30, 360 + i * 160);
				h1.textfiled_arr_1[i].setPosition(initialPosition2 + 225, 385 + i * 160);
				h1.textfiled_arr_2[i].setPosition(initialPosition2 + 225, 450 + i * 160);

				h1.text_arr_1[i].setPosition(initialPosition2 + 87, 392 + i * 160);
				h1.text_arr_2[i].setPosition(initialPosition2 + 87, 450 + i * 160);
				h1.button_1_arr[i].setPosition(initialPosition2 + 720, 415 + i * 160);
				h1.text_arr_3[i].setPosition(initialPosition2 + 315, 385 + i * 160);
				h1.text_arr_4[i].setPosition(initialPosition2 + 240, 450 + i * 160);
				h1.text_arr_5[i].setPosition(initialPosition2 + 1020, 370 + i * 160);
				h1.text_arr_6[i].setPosition(initialPosition2 + 740, 417 + i * 160);
			}
		}




		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);
		window.draw(user_history);
		window.draw(back);
		if (System::allUsers.empty())
		{
			window.draw(h1.text10);
		}

		for (int i = 0; i < System::allUsers.size(); i++)
		{
			window.draw(h1.frame_background_arr[i]);
			window.draw(h1.textfiled_arr_1[i]);
			window.draw(h1.textfiled_arr_2[i]);
			window.draw(h1.button_1_arr[i]);
			window.draw(h1.text_arr_1[i]);
			window.draw(h1.text_arr_2[i]);
			window.draw(h1.text_arr_3[i]);
			window.draw(h1.text_arr_4[i]);
			window.draw(h1.text_arr_5[i]);
			window.draw(h1.text_arr_6[i]);

		}
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/


	}
}
void admin_all_users_set(half& h1)
{

	background.setTexture(background_texture);
	background.setScale(1.5, 3);
	background.setPosition(0, -500);

	auto it = System::allUsers.begin();
	for (int i = 0; i < System::allUsers.size(); i++)
	{

		h1.frame_background_arr[i].setTexture(background_frame_texture);
		h1.frame_background_arr[i].setScale(0.47, 0.35);
		h1.frame_background_arr[i].setPosition(30, 360 + i * 160);

		h1.button_1_arr[i].setTexture(button_texture);
		h1.button_1_arr[i].setScale(0.08, 0.08);
		h1.button_1_arr[i].setPosition(450, 480 + i * 160);

		h1.textfiled_arr_1[i].setTexture(text_field_texture);
		h1.textfiled_arr_1[i].setScale(0.1, 0.08);
		h1.textfiled_arr_1[i].setPosition(275, 385 + i * 160);

		h1.textfiled_arr_2[i].setTexture(text_field_texture);
		h1.textfiled_arr_2[i].setScale(0.08, 0.08);
		h1.textfiled_arr_2[i].setPosition(850, 385 + i * 160);

		h1.text_arr_5[i].setString("# " + to_string(i + 1));
		h1.text_arr_5[i].setFont(berlinSansFont);
		h1.text_arr_5[i].setCharacterSize(25);
		h1.text_arr_5[i].setPosition(550, 380 + i * 160);
		h1.text_arr_5[i].setFillColor(sf::Color::White);

		h1.text_arr_6[i].setString("Transictions of " + it->first);
		h1.text_arr_6[i].setFont(berlinSansFont);
		h1.text_arr_6[i].setCharacterSize(22);
		h1.text_arr_6[i].setPosition(530, 465 + i * 160);
		h1.text_arr_6[i].setFillColor(sf::Color::White);

		h1.text_arr_1[i].setString("Username");
		h1.text_arr_1[i].setFont(berlinSansFont);
		h1.text_arr_1[i].setCharacterSize(23);
		h1.text_arr_1[i].setPosition(87, 392 + i * 160);
		h1.text_arr_1[i].setFillColor(sf::Color::White);

		h1.text_arr_2[i].setString("Balance");
		h1.text_arr_2[i].setFont(berlinSansFont);
		h1.text_arr_2[i].setCharacterSize(23);
		h1.text_arr_2[i].setPosition(750, 392 + i * 160);
		h1.text_arr_2[i].setFillColor(sf::Color::White);


		h1.text_arr_3[i].setString(it->first);
		h1.text_arr_3[i].setFont(berlinSansFont);
		h1.text_arr_3[i].setCharacterSize(24);
		h1.text_arr_3[i].setPosition(315, 385 + i * 160);
		h1.text_arr_3[i].setFillColor(sf::Color::Black);


		stringstream stream2;
		stream2 << fixed << setprecision(2) << it->second.balance;
		h1.text_arr_4[i].setString(stream2.str() + " $");
		h1.text_arr_4[i].setFont(berlinSansFont);
		h1.text_arr_4[i].setCharacterSize(22);
		h1.text_arr_4[i].setPosition(865, 385 + i * 160);
		h1.text_arr_4[i].setFillColor(sf::Color::Black);
		++it;
	}

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	user_history.setTexture(user_history_texture);
	user_history.setScale(0.2, 0.2);
	user_history.setPosition(550, 80);


	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(1050, 240);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Display");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("Transactions");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);
	if (System::allUsers.empty())
	{
		h1.text10.setString("There is no Users\nto be displayed");
		h1.text10.setFont(britanicFont);
		h1.text10.setCharacterSize(35);
		h1.text10.setPosition(400, 450);
		h1.text10.setFillColor(Color::Blue);
	}
}
void admin_all_users_draw(half& h1)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	//window.draw(admin_icon);


	//window.draw(h1.textfiled_2);
	//window.draw(h1.textfiled_3);

	//window.draw(h1.text1);
	//window.draw(h1.text2);
	//window.draw(h1.text3);
	//window.draw(h1.text4);
	///*window.draw(h1.text5);
	//window.draw(h1.text6);
	//window.draw(h1.text7);
	//window.draw(h1.text8);*/



}

void admin_User_transactions(Admin& ali, User& omar)

{
	half h1;
	h1.textfiled_arr_1 = new Sprite[omar.History.size()];
	h1.textfiled_arr_2 = new Sprite[omar.History.size()];
	h1.textfiled_arr_3 = new Sprite[omar.History.size()];
	h1.textfiled_arr_4 = new Sprite[omar.History.size()];

	h1.frame_background_arr = new Sprite[omar.History.size()];
	h1.button_1_arr = new Sprite[omar.History.size()];
	h1.button_2_arr = new Sprite[omar.History.size()];
	h1.text_arr_1 = new Text[omar.History.size()];
	h1.text_arr_2 = new Text[omar.History.size()];
	h1.text_arr_3 = new Text[omar.History.size()];
	h1.text_arr_4 = new Text[omar.History.size()];
	h1.text_arr_5 = new Text[omar.History.size()];
	h1.text_arr_6 = new Text[omar.History.size()];
	h1.text_arr_7 = new Text[omar.History.size()];
	h1.text_arr_8 = new Text[omar.History.size()];

	//texturesandfonts();
//size_of_arr = omar.History.size();
	admin_User_transactions_set(h1, ali, omar);

	// Get the initial position of the wallet_icon, half_background, and other elements
	sf::Vector2f initialPosition = admin_icon.getPosition();
	float initialYPosition = 800; // Initial position below the window
	float finalXPosition = 0; // Final position on the x-axis

	// Define the speed of the animation for x-axis transition
	float animationSpeedX = 800.0f; // pixels per second

	// Define the speed of the animation for y-axis transition
	float animationSpeedY = 400.0f; // pixels per second

	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX = finalXPosition - initialPosition.x;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX = std::abs(distanceToMoveX) / animationSpeedX;
	//////////////////////////////////////////////////////////////////////////////////////////

	float initialPosition2 = -1200;

	// Define the speed of the animation for x-axis transition
	float animationSpeedX2 = 1500.0f; // pixels per second


	// Calculate the distance to move for the x-axis transition
	float distanceToMoveX2 = finalXPosition - initialPosition2;

	// Calculate the time needed for the x-axis animation based on the speed
	float animationTimeX2 = std::abs(distanceToMoveX2) / animationSpeedX2;

	// Create a clock to measure time
	sf::Clock clock;
	sf::View view(sf::FloatRect(0, 0, window.getSize().x, window.getSize().y));
	
	
	// Event loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			sf::Vector2f mousePosition = window.mapPixelToCoords(sf::Mouse::getPosition(window));

			// Check if mouse is over specific sprites and adjust scale accordingly
			if (true) {


				if (balance.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					balance.setScale(0.165f, 0.165f); // Scale up
				else
					balance.setScale(0.15f, 0.15f);

				if (transiction_history.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					transiction_history.setScale(0.22f, 0.22f); // Scale up
				else
					transiction_history.setScale(0.2f, 0.2f);

				if (admin_icon.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					admin_icon.setScale(0.22f, 0.22f); // Scale up
				else
					admin_icon.setScale(0.2f, 0.2f);

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					back.setScale(0.165, 0.165); // Scale up
				else
					back.setScale(0.15, 0.15);



				if (h1.text1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text1.setCharacterSize(43); // Scale up
				else
					h1.text1.setCharacterSize(40);

				if (h1.text2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text2.setCharacterSize(43); // Scale up
				else
					h1.text2.setCharacterSize(40);

				if (h1.text3.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text3.setCharacterSize(32); // Scale up
				else
					h1.text3.setCharacterSize(30);

				if (h1.text4.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text4.setCharacterSize(28); // Scale up
				else
					h1.text4.setCharacterSize(26);

				if (h1.text5.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text5.setCharacterSize(28); // Scale up
				else
					h1.text5.setCharacterSize(26);

				if (h1.text6.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.text6.setCharacterSize(28); // Scale up
				else
					h1.text6.setCharacterSize(26);

				if (h1.textfiled_1.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_1.setScale(0.1, 0.088); // Scale up
				else
					h1.textfiled_1.setScale(0.1, 0.08);

				if (h1.textfiled_2.getGlobalBounds().contains(sf::Vector2f(mousePosition)))
					h1.textfiled_2.setScale(0.08, 0.088); // Scale up
				else
					h1.textfiled_2.setScale(0.08, 0.08);

				for (int i = 0; i < omar.History.size(); i++)
				{

					if (h1.textfiled_arr_1[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_1[i].setScale(0.1, 0.088); // Scale up
					else
						h1.textfiled_arr_1[i].setScale(0.1, 0.08);


					if (h1.textfiled_arr_2[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_2[i].setScale(0.08, 0.088); // Scale up
					else
						h1.textfiled_arr_2[i].setScale(0.08, 0.08);

					if (h1.textfiled_arr_3[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_3[i].setScale(0.1, 0.088); // Scale up
					else
						h1.textfiled_arr_3[i].setScale(0.1, 0.08);

					if (h1.textfiled_arr_4[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.textfiled_arr_4[i].setScale(0.08, 0.088); // Scale up
					else
						h1.textfiled_arr_4[i].setScale(0.08, 0.08);

					if (h1.text_arr_1[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_1[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_1[i].setCharacterSize(20);

					if (h1.text_arr_2[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_2[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_2[i].setCharacterSize(20);

					if (h1.frame_background_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.frame_background_arr[i].setScale(0.47, 0.38);// Scale up
					else
						h1.frame_background_arr[i].setScale(0.47, 0.35);

					if (h1.button_1_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.button_1_arr[i].setScale(0.1155, 0.1155);
					else
						h1.button_1_arr[i].setScale(0.105, 0.105);

					if (h1.button_2_arr[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.button_2_arr[i].setScale(0.088, 0.088);
					else
						h1.button_2_arr[i].setScale(0.08, 0.08);

					if (h1.text_arr_3[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_3[i].setCharacterSize(26);// Scale up
					else
						h1.text_arr_3[i].setCharacterSize(24);

					if (h1.text_arr_4[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_4[i].setCharacterSize(24);// Scale up
					else
						h1.text_arr_4[i].setCharacterSize(22);

					if (h1.text_arr_5[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_5[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_5[i].setCharacterSize(20);

					if (h1.text_arr_6[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_6[i].setCharacterSize(26);// Scale up
					else
						h1.text_arr_6[i].setCharacterSize(24);

					if (h1.text_arr_7[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_7[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_7[i].setCharacterSize(20);

					if (h1.text_arr_8[i].getGlobalBounds().contains(sf::Vector2f(mousePosition)))
						h1.text_arr_8[i].setCharacterSize(22);// Scale up
					else
						h1.text_arr_8[i].setCharacterSize(20);

				}

				//}

				if (back.getGlobalBounds().contains(sf::Vector2f(mousePosition)) && event.type == sf::Event::MouseButtonPressed && event.mouseButton.button == sf::Mouse::Left)
				{
					window.clear();
					return admin_all_users(ali);
				}
				if (event.type == sf::Event::MouseWheelScrolled && event.mouseWheelScroll.wheel == sf::Mouse::VerticalWheel) {
					// Adjust the view when scrolling vertically
					if (view.getCenter().y - window.getSize().y / 2 > -0.1)
					{
						view.move(0, -event.mouseWheelScroll.delta * 30); // Adjust the scrolling speed here
						window.setView(view);
					}
					else
					{
						view.move(0, 2); // Adjust the scrolling speed here
						window.setView(view);
					}
				}
			}

		}
		window.clear();

		admin_User_transactions_draw(h1, omar);

		//Calculate the new position of the sprites based on elapsed time for x-axis transition
		if (clock.getElapsedTime().asSeconds() < animationTimeX)
		{
			float elapsedTimeX = clock.getElapsedTime().asSeconds();
			float newXPosition = initialPosition.x + (distanceToMoveX * (elapsedTimeX / animationTimeX));
			h1.text1.setPosition(newXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(newXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(newXPosition + 50, 80); // Adjust position of wallet_icon
			//profile_edit.setPosition(950 - newXPosition, 80);
			//h1.text3.setPosition(950 - newXPosition, 180);
			back.setPosition(1050 - newXPosition, 240);


		}
		else
		{
			// Animation for x-axis transition is complete, set the final position of the sprites
			h1.text1.setPosition(finalXPosition + 165, 80); // Adjust position of text1
			h1.text2.setPosition(finalXPosition + 165, 130); // Adjust position of text2
			admin_icon.setPosition(finalXPosition + 50, 80);
			back.setPosition(1050, 240);


		}
		if (clock.getElapsedTime().asSeconds() < animationTimeX2)
		{
			float elapsedTimeX2 = clock.getElapsedTime().asSeconds();
			float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));

			back.setPosition(1050 - newXPosition2, 240);
			transiction_history.setPosition(550 - newXPosition2, 80);

		}
		else
		{

			back.setPosition(1050, 240);
			transiction_history.setPosition(550, 80);

		}

		if (omar.History.empty())
		{
			if (clock.getElapsedTime().asSeconds() < animationTimeX2)
			{
				float elapsedTimeX2 = clock.getElapsedTime().asSeconds();
				float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));
				h1.text10.setPosition(newXPosition2 + 400, 450);

			}
			else
			{
				h1.text10.setPosition(400, 450);

			}
		}
		// Define the delay between the movement of each element (in seconds)
		float movementDelay = 0.2f; // Adjust this value as needed

		// Inside the loop over the elements
		float totalAnimationTime = omar.History.size() * movementDelay + animationTimeX2;

		// Inside the loop over the elements
		for (int i = 0; i < omar.History.size(); i++)
		{
			// Calculate the delay for this element based on its index
			float elementDelay = i * movementDelay;

			// Check if enough time has passed for this element to start moving
			if (clock.getElapsedTime().asSeconds() >= elementDelay)
			{
				// Calculate the elapsed time for this element
				float elapsedTimeX2 = clock.getElapsedTime().asSeconds() - elementDelay;

				// Calculate the position based on the elapsed time and animation parameters
				float newXPosition2 = initialPosition2 + (distanceToMoveX2 * (elapsedTimeX2 / animationTimeX2));
				newXPosition2 = std::min(newXPosition2, finalXPosition); // Ensure position doesn't overshoot the final position

				// Set the positions of the elements
				h1.frame_background_arr[i].setPosition(newXPosition2 + 30, 360 + i * 160);
				h1.textfiled_arr_1[i].setPosition(newXPosition2 + 300, 385 + i * 160);
				h1.textfiled_arr_2[i].setPosition(newXPosition2 + 850, 385 + i * 160);
				h1.textfiled_arr_3[i].setPosition(newXPosition2 + 300, 443 + i * 160);
				h1.textfiled_arr_4[i].setPosition(newXPosition2 + 850, 443 + i * 160);

				h1.text_arr_1[i].setPosition(newXPosition2 + 87, 392 + i * 160);
				h1.text_arr_2[i].setPosition(newXPosition2 + 750, 392 + i * 160);
				h1.text_arr_3[i].setPosition(newXPosition2 + 315, 385 + i * 160);
				h1.text_arr_4[i].setPosition(newXPosition2 + 865, 388 + i * 160);
				h1.text_arr_5[i].setPosition(newXPosition2 + 78, 450 + i * 160);
				h1.text_arr_6[i].setPosition(newXPosition2 + 315, 443 + i * 160);
				h1.text_arr_7[i].setPosition(newXPosition2 + 750, 450 + i * 160);
				h1.text_arr_8[i].setPosition(newXPosition2 + 865, 446 + i * 160);

			}
			else
			{
				// If not enough time has passed, keep the element at its initial position
				h1.frame_background_arr[i].setPosition(initialPosition2 + 30, 360 + i * 160);
				h1.textfiled_arr_1[i].setPosition(initialPosition2 + 300, 385 + i * 160);
				h1.textfiled_arr_2[i].setPosition(initialPosition2 + 850, 385 + i * 160);
				h1.textfiled_arr_3[i].setPosition(initialPosition2 + 300, 443 + i * 160);
				h1.textfiled_arr_4[i].setPosition(initialPosition2 + 850, 443 + i * 160);




				h1.text_arr_1[i].setPosition(initialPosition2 + 87, 392 + i * 160);
				h1.text_arr_2[i].setPosition(initialPosition2 + 750, 392 + i * 160);
				h1.text_arr_3[i].setPosition(initialPosition2 + 315, 385 + i * 160);
				h1.text_arr_4[i].setPosition(initialPosition2 + 865, 388 + i * 160);
				h1.text_arr_5[i].setPosition(initialPosition2 + 87, 450 + i * 160);
				h1.text_arr_6[i].setPosition(initialPosition2 + 315, 443 + i * 160);
				h1.text_arr_7[i].setPosition(initialPosition2 + 750, 450 + i * 160);
				h1.text_arr_8[i].setPosition(initialPosition2 + 865, 446 + i * 160);


			}
		}




		// Draw the texts, wallet_icon, buttons
		window.draw(h1.text1);
		window.draw(h1.text2);
		window.draw(admin_icon);
		window.draw(transiction_history);
		window.draw(back);
		if (omar.History.empty())
		{
			window.draw(h1.text10);
		}

		for (int i = 0; i < omar.History.size(); i++)
		{
			window.draw(h1.frame_background_arr[i]);
			window.draw(h1.textfiled_arr_1[i]);
			window.draw(h1.textfiled_arr_2[i]);
			window.draw(h1.textfiled_arr_3[i]);
			window.draw(h1.textfiled_arr_4[i]);

			window.draw(h1.text_arr_1[i]);
			window.draw(h1.text_arr_2[i]);
			window.draw(h1.text_arr_3[i]);
			window.draw(h1.text_arr_4[i]);
			window.draw(h1.text_arr_5[i]);
			window.draw(h1.text_arr_6[i]);
			window.draw(h1.text_arr_7[i]);
			window.draw(h1.text_arr_8[i]);

		}
		// Display the window
		window.display();

		// Check if both animations are complete
		/*if (clock.getElapsedTime().asSeconds() >= animationTimeX && clock.getElapsedTime().asSeconds() >= animationTimeY)
			break;*/


	}
}
void admin_User_transactions_set(half& h1, Admin& ali, User& omar)
{

	background.setTexture(background_texture);
	background.setScale(1.5, 3);
	background.setPosition(0, -500);

	auto it = omar.History.rbegin();
	for (int i = 0; i < omar.History.size(); i++)
	{

		h1.frame_background_arr[i].setTexture(background_frame_texture);
		h1.frame_background_arr[i].setScale(0.47, 0.35);
		h1.frame_background_arr[i].setPosition(30, 360 + i * 160);

		h1.textfiled_arr_3[i].setTexture(text_field_texture);
		h1.textfiled_arr_3[i].setScale(0.1, 0.08);
		h1.textfiled_arr_3[i].setPosition(300, 443 + i * 160);

		h1.textfiled_arr_1[i].setTexture(text_field_texture);
		h1.textfiled_arr_1[i].setScale(0.1, 0.08);
		h1.textfiled_arr_1[i].setPosition(300, 385 + i * 160);

		h1.textfiled_arr_2[i].setTexture(text_field_texture);
		h1.textfiled_arr_2[i].setScale(0.08, 0.08);
		h1.textfiled_arr_2[i].setPosition(850, 385 + i * 160);

		h1.textfiled_arr_4[i].setTexture(text_field_texture);
		h1.textfiled_arr_4[i].setScale(0.08, 0.08);
		h1.textfiled_arr_4[i].setPosition(850, 443 + i * 160);



		h1.text_arr_1[i].setString("Sender Username");
		h1.text_arr_1[i].setFont(berlinSansFont);
		h1.text_arr_1[i].setCharacterSize(20);
		h1.text_arr_1[i].setPosition(87, 392 + i * 160);
		h1.text_arr_1[i].setFillColor(sf::Color::White);

		h1.text_arr_5[i].setString("Recipient Username");
		h1.text_arr_5[i].setFont(berlinSansFont);
		h1.text_arr_5[i].setCharacterSize(20);
		h1.text_arr_5[i].setPosition(87, 450 + i * 160);
		h1.text_arr_5[i].setFillColor(sf::Color::White);

		h1.text_arr_2[i].setString("Amount");
		h1.text_arr_2[i].setFont(berlinSansFont);
		h1.text_arr_2[i].setCharacterSize(20);
		h1.text_arr_2[i].setPosition(750, 392 + i * 160);
		h1.text_arr_2[i].setFillColor(sf::Color::White);

		h1.text_arr_7[i].setString("Date");
		h1.text_arr_7[i].setFont(berlinSansFont);
		h1.text_arr_7[i].setCharacterSize(20);
		h1.text_arr_7[i].setPosition(750, 450 + i * 160);
		h1.text_arr_7[i].setFillColor(sf::Color::White);

		h1.text_arr_3[i].setString(it->sender);
		h1.text_arr_3[i].setFont(berlinSansFont);
		h1.text_arr_3[i].setCharacterSize(24);
		h1.text_arr_3[i].setPosition(315, 385 + i * 160);
		h1.text_arr_3[i].setFillColor(sf::Color::Black);

		h1.text_arr_6[i].setString(it->reciever);
		h1.text_arr_6[i].setFont(berlinSansFont);
		h1.text_arr_6[i].setCharacterSize(24);
		h1.text_arr_6[i].setPosition(315, 443 + i * 160);
		h1.text_arr_6[i].setFillColor(sf::Color::Black);

		stringstream stream2;
		stream2 << fixed << setprecision(2) << it->amount;
		h1.text_arr_4[i].setString(stream2.str() + " $");
		h1.text_arr_4[i].setFont(berlinSansFont);
		h1.text_arr_4[i].setCharacterSize(22);
		h1.text_arr_4[i].setPosition(865, 388 + i * 160);
		h1.text_arr_4[i].setFillColor(sf::Color::Black);

		string d = (to_string(it->Date.day) + '/' + to_string(it->Date.month) + '/' + to_string(it->Date.year) + "   " + to_string(it->Date.hour) + ':' + to_string(it->Date.min));
		h1.text_arr_8[i].setString(d);
		h1.text_arr_8[i].setFont(berlinSansFont);
		h1.text_arr_8[i].setCharacterSize(20);
		h1.text_arr_8[i].setPosition(865, 446 + i * 160);
		h1.text_arr_8[i].setFillColor(sf::Color::Black);
		if (it->sender == omar.UserName)
		{
			h1.text_arr_3[i].setFillColor(sf::Color::Blue);
		}
		else if (it->reciever == omar.UserName)
		{
			h1.text_arr_6[i].setFillColor(sf::Color::Blue);
		}
		++it;
	}

	admin_icon.setTexture(admin_icon_texture);
	admin_icon.setScale(0.2, 0.2);
	admin_icon.setPosition(-500, 80);

	transiction_history.setTexture(transiction_history_texture);
	transiction_history.setScale(0.2, 0.2);
	transiction_history.setPosition(550, 80);


	balance.setTexture(balance_texture);
	balance.setScale(0.15, 0.15);
	balance.setPosition(500, 60);

	back.setTexture(back_texture);
	back.setScale(0.15, 0.15);
	back.setPosition(1050, 240);

	h1.half_background.setTexture(background_frame_texture);
	h1.half_background.setPosition(0, 0);
	h1.half_background.setScale(0.6, 0.6);
	h1.half_background.setPosition(-5, 0);

	h1.text1.setString("Display");
	h1.text1.setCharacterSize(40);
	h1.text1.setPosition(265, 80);
	h1.text1.setFont(britanicFont);

	h1.text2.setString("Transactions");
	h1.text2.setFont(britanicFont);
	h1.text2.setCharacterSize(40);
	h1.text2.setPosition(265, 130);

	h1.text3.setString("Username");
	h1.text3.setCharacterSize(30);
	h1.text3.setPosition(50, 250);
	h1.text3.setFont(berlinSansFont);
	h1.text3.setFillColor(sf::Color::Black);

	h1.text4.setString("Balance");
	h1.text4.setFont(berlinSansFont);
	h1.text4.setCharacterSize(30);
	h1.text4.setPosition(50, 300);
	h1.text4.setFillColor(sf::Color::Black);

	h1.text5.setString(omar.UserName);
	h1.text5.setCharacterSize(26);
	h1.text5.setPosition(215, 250);
	h1.text5.setFont(berlinSansFont);
	h1.text5.setFillColor(sf::Color::Black);

	stringstream stream3;
	stream3 << fixed << setprecision(2) << omar.balance;
	h1.text6.setString(stream3.str() + " $");
	h1.text6.setFont(berlinSansFont);
	h1.text6.setCharacterSize(26);
	h1.text6.setPosition(215, 300);
	h1.text6.setFillColor(sf::Color::Black);

	h1.textfiled_1.setTexture(text_field_texture);
	h1.textfiled_1.setScale(0.1, 0.08);
	h1.textfiled_1.setPosition(200, 250);

	h1.textfiled_2.setTexture(text_field_texture);
	h1.textfiled_2.setScale(0.08, 0.08);
	h1.textfiled_2.setPosition(200, 300);

	if (omar.History.empty())
	{
		h1.text10.setString("There is no Transactions\n       to be displayed");
		h1.text10.setFont(britanicFont);
		h1.text10.setCharacterSize(35);
		h1.text10.setPosition(400, 450);
		h1.text10.setFillColor(Color::Blue);
	}
}
void admin_User_transactions_draw(half& h1, User& omar)
{
	window.draw(background);
	window.draw(h1.half_background);
	window.draw(h1.frame_background);
	//window.draw(admin_icon);


	//window.draw(h1.textfiled_2);
	//window.draw(h1.textfiled_3);
	window.draw(h1.textfiled_1);
	window.draw(h1.textfiled_2);

	//window.draw(h1.text1);
	//window.draw(h1.text2);
	window.draw(h1.text3);
	window.draw(h1.text4);
	window.draw(h1.text5);
	window.draw(h1.text6);
	/*//window.draw(h1.text7);
	//window.draw(h1.text8);*/



}