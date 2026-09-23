

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string food_name;
    char code;
    int quantity;
    double price;
    char member;
    string yeno;


    cout << "Enter the food name: ";
    getline(cin, food_name);

    cout << "Enter the item code: ";
    cin >> code;

    cout << "How many fruits: ";
    cin >> quantity;

    cout << "What is the price: ";
    cin >> price;

    cout << "Are you a member(y/n): ";
    cin >> member;




    cout << right << setw(9) << food_name << endl;
    cout << right << setw(7) << code << endl;
    cout << right << setw(7) << quantity << endl;
    cout << right << setw(9) << setprecision(2) << fixed << price << endl;
    cout << right << setw(7) << member << endl;

    

}

