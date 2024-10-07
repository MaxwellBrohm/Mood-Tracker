//Name: Maxwell Brohm
//Program Name: Mood Tracker
//Date: 10/7/24
//Extra: Secret 6th option if the user enters anything higher than 5

#include <iostream>
using namespace std;
int main()
{
    int resp = 0;
    cout << "How is your day today?\n1.Amazing!!\n2.Good!\n3.Okay\n4.Bad\n5.Horrible\n\n";
    cin >> resp;
    switch (resp) {
    case 1:
        cout << "Thats awesome!! Go share that positivity with others!!";
        break;
    case 2:
        cout << "Thats good! hopfully it becomes great!";
        break;
    case 3:
        cout << "Thats ok! Im sure tomorrow will be better!";
        break;
    case 4:
        cout << "Its ok, im sure your day will get better!";
        break;
    case 5:
        cout << "Whats wrong? Want to talk about it?";
        break;
    default:
        if (resp > 5)
            cout << "Dang, its really that bad? Please talk to a trusted person about your situation.";
        break;
    }
}
