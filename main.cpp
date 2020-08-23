#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;



string displayList(vector<string>);

int main() {

    string userChoice;
    vector<string> mainMenuOptions(5);// = {"Add an account","Remove an account","Update Balances","View Balances","Exit"};
    mainMenuOptions[0] = "Update Account Balances";
    mainMenuOptions[1] = "Add an Account";
    mainMenuOptions[2] = "Remove an Account";
    mainMenuOptions[3] = "Display Balances";
    mainMenuOptions[4] = "Exit";


    cout << "What option would you like to choose?" << endl;
    userChoice = displayList(mainMenuOptions);
    std::cout << "User chose " + userChoice;

    return 0;
}

string displayList(vector<string> listToDisplay){
    int num = 1;

    for (auto item : listToDisplay) {
        std::cout << to_string(num) + ") " + item << "\n";
        num += 1;
    }

    int userChoice;

    cin >> userChoice;

    return listToDisplay.at(userChoice-1);

}

