#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{  string number;
    cin >> number;
    int count{0}, countFinal{0};

    for (int i = 0; i < number.length(); i++)
    {
        if (number[i] == 52 || number[i] == 55)
        {
            count ++;
        }
        else {
            continue;
        }
        

    }

    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    
    

}