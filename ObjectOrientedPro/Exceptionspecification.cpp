//(Restricted Exception Handling)
// Specifying exceptions -> restrict the function to throw only certain types
#include <iostream>
using namespace std;

// Function restricted to throw only int and double exceptions
void handler(int x) throw(int, double)
{
    if (x == 0)
        throw 'a';       // character exception (NOT allowed)

    if (x == 1)
        throw x;         // int exception (allowed)

    if (x == 2)
        throw 1.0;       // double exception (allowed)

    if (x == 3)
        throw "hello";   // const char* exception (NOT allowed)
}

int main()
{
    try
    {
        handler(1);
    }
    catch (char a)
    {
        cout << "Caught a character exception" << endl;
    }
    catch (int a)
    {
        cout << "Caught an integer exception" << endl;
    }
    catch (double a)
    {
        cout << "Caught a double exception" << endl;
    }
    catch (const char* a)
    {
        cout << "Caught a string exception" << endl;
    }

    return 0;
}