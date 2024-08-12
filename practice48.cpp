#include <iostream>
#include <utility> // For  pair
#include <iostream>
#include <tuple> // For  tuple
using namespace std;
int main() {
    // Creating a pair
    pair<string, int> person1("Alice", 30);

    // Accessing elements of the pair
    cout << "Name: " << person1.first <<endl;
    cout << "Age: " << person1.second <<endl;

    // Modifying elements of the pair
    person1.first = "Bob";
    person1.second = 25;

    // Displaying modified pair
     cout << "Updated Name: " << person1.first <<  endl;
     cout << "Updated Age: " << person1.second <<  endl;

    // Using  make_pair to create a pair
    auto anotherPerson1 =  make_pair("Charlie", 40);

    // Displaying the new pair
     cout << "Another Name: " << anotherPerson1.first <<  endl;
     cout << "Another Age: " << anotherPerson1.second <<  endl;

// Creating a tuple
     tuple< string, int, double> person2("Alice", 30, 5.5);

    // Accessing elements of the tuple
     cout << "Name: " <<  get<0>( person2) <<  endl;
     cout << "Age: " <<  get<1>( person2) <<  endl;
     cout << "Height: " << get<2>( person2) <<  endl;

    // Modifying elements of the tuple
     get<0>( person2) = "Bob";
     get<1>( person2) = 25;
     get<2>( person2) = 6.0;

    // Displaying modified tuple
     cout << "Updated Name: " <<  get<0>( person2) <<  endl;
     cout << "Updated Age: " <<  get<1>( person2) <<  endl;
     cout << "Updated Height: " <<  get<2>( person2) <<  endl;

    // Using  make_tuple to create a tuple
    auto anotherperson2 =  make_tuple("Charlie", 40, 5.8);

    // Displaying the new tuple
     cout << "Another Name: " <<  get<0>(anotherperson2) <<  endl;
     cout << "Another Age: " <<  get<1>(anotherperson2) <<  endl;
     cout << "Another Height: " <<  get<2>(anotherperson2) <<  endl;

    return 0;
}
