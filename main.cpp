#include <iostream>
#include <cstdlib>
#include <ctime>
#include "swordGen.cpp"


using namespace std;

class Sword {
    public:
        string name;
        int damage;
        double atkTime;
        int cost;

};

int askUserForItems();

int main(){
    string fileName;
    string filePath;

    cout << "Hello and welcome to my random game item generator!" << endl;
    cout << "To get started please enter the file path for the file to be saved at:" << endl;
    getline(cin, filePath);
    cout << "Now enter the fileName: ";
    getline(cin, fileName);
    cout << "File will be saved at: " << filePath << " " << fileName << ".json";

    int index = 1;
    while (index <=5){
        cout << endl;
        index++;
    }

    askUserForItems();

    return 0;
}

int askUserForItems(){
    char yORn;

    cout << "Would you like to add swords to the item generation list? y/n" << endl;
    cin >> yORn;

    if (yORn == 'y'){
        yORn = ' ';
        cout << startGeneration();
    }
    else{
        yORn = ' ';
    }

    return 0;
}