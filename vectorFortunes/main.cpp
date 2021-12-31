// Abel Anand
#include <iostream>
#include <vector>
#include <unistd.h>
#include <time.h>
using namespace std;

void fortune(vector <string> &v, int fortune) {
    cout << v.at(fortune - 1);
}

int main(int argc, const char * argv[]) {
    vector<string> fortunes;
    fortunes.push_back("You will stop breathing when you die :O\n");
    fortunes.push_back("You will have a lot of money if ur parents are rich :O\n");
    fortunes.push_back("Your parents will give you money if you do chores :O\n");
    fortunes.push_back("A dubious friend may be an enemy in camouflage :O\n");
    fortunes.push_back("If you are not dead, then you are alive\n");
    fortunes.push_back("To truly find yourself, you must play hide and seek alone :O\n");
    fortunes.push_back("Your parents are paying your friends:(\n");
    fortunes.push_back("The early bird gets the worm, but the second mouse gets the cheese\n");
    fortunes.push_back("Help im being held priso...You will recieve money\n");
    fortunes.push_back("Step on a crack, break ur moms back :(\n");
    fortunes.push_back("The fortune you seek is in another cookie\n");
    fortunes.push_back("A conclusion is simply the place where you got tired of thinking\n");
    fortunes.push_back("He who laughs at himself never runs out of things to laugh at\n");
    fortunes.push_back("He who throws dirt is losing ground\n");
    fortunes.push_back("Never forget a friend. Especially if he owes you\n");
    fortunes.push_back("Change is inevitable, except for vending machines\n");
    fortunes.push_back("You will be hungry again in one hour\n");
    fortunes.push_back("Do not mistake temptation for opportunity\n");
    fortunes.push_back("It wll never be tomorrow\n");
    fortunes.push_back("");
    srand(time(0));
    int choice;
    bool quit = false;
    
    
    while (!quit) {
        int i = (rand()%20) + 1;
        cout << "Fortune?\nyes(1)    no(2)\n";
    cin >> choice;
        switch (choice) {
            case 1:
                fortune(fortunes, i);
                sleep(3);
                break;
            case 2:
                cout << "Cool\nBye\n";
                quit = true;
                break;
            default:
                cout << "read bozo";
                break;
        }
    }
}
