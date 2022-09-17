#include <iostream>
using namespace std;

int main()
{
    int input[10], output[10], count, i;

    cout << "Enter number of elements: "  << endl;

    cin >> count;

    cout << "Enter " << count << " numbers" <<endl;

    for(i = 0; i < count; i++)
    {
                cin >> input[i];
    }

    for(i = 0; i < count; i++)
    {
               output[i] = input[count-i-1];
    }

    cout << "Reversed Array" << endl;
    for(i = 0; i < count; i++)  
    {
        cout << output[i] << " " << endl;
    }

    return 0;
}