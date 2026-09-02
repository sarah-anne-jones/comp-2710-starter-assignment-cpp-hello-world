#include <iostream>
#include "starter.h"

using namespace std;

int main()
{
	// Create a few Starter_Object objects
    Starter_Object object1;
    Starter_Object object2;

    // Add values to object1
    object1.val1(10);
    object1.val2(20);

    // Add values to object2
    object2.val1(30);
    object2.val2(40);

    // Print all values to validate the code
    cout << "Object 1:" << endl;
    cout << "val1 = " << object1.val1() << endl;
    cout << "val2 = " << object1.val2() << endl;

    cout << endl;

    cout << "Object 2:" << endl;
    cout << "val1 = " << object2.val1() << endl;
    cout << "val2 = " << object2.val2() << endl;

    return 0;
}
