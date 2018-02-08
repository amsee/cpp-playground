// import library (2)
#include <iostream>
#include <cstring>
using namespace std;

// declare class
class Candy
{
    private:
        char candy_type[40];
        int candy_price;
    public:
    // get class information
        void get() const
    {
        // user ouput
            cout << "This is a " << candy_type << "type of candy." << endl;
            cout << "It costs " << candy_price << "." << endl;
    }
        void set(const char *ct, int cp) const // locate address for strings only
    {
        // copy strings
        strcpy(candy_type, ct);
        candy_price = cp;
    }
};
int main()
{
    // initiate class
    Candy *candies = nullptr;
    // define variable
    int count = 0;
    // user output
    cout << "How many candies can you eat?: " << endl;
    // user input
    cin >> count;
    // create an array
    candies = new Candy[count];
    // return int
    return 0;
}
