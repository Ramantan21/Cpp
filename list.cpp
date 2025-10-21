#include <iostream>
#include <list>
#include <string>

using namespace std;


int main()
{
    // list<string> listname; //create a list

    list<string> cars = {"volvo","bmw","ford"};

    // for(string car : cars ){
    //     cout << car << endl;
    // }

    // cout << cars.front() << endl; // outputs Volvo
    // cout << cars.back() << endl; // outputs ford

    // cars.front() = "opel"; // changes the first idx of the list
    // cars.back() = "mercedes"; // changes the last idx of the list

    // for(string car : cars){
    //     cout << car << endl;
    // }

    cars.push_front("tesla");
    cars.push_back("ramantan");
    cout << cars.size() << endl;
    cars.pop_front(); // removes the first element
    cars.pop_back(); // removes the last element
    for(string car : cars){ // loop through the list
        cout << car << endl;
    }
    cout << cars.size() << endl;
    cout << cars.empty() << endl; // 1 if it's empty 0 if it's not


    return 0;
}