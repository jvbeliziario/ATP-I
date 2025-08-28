#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    n1 = 1369;
    n2 = 2442;
    n3 = 4356;
    
while (n1 != 1 || n2 != 1 || n3 != 1){
    if (n1 % 2 == 0)
    {
        n1 = n1 / 2;
    }
    else if (n2 % 2 == 0)
    {
        n2 = n2 / 2;
    }
    else
    {
        n3 = n3 / 2;
    }
    cout << n1 << ", " << n2 << ", " << n3 << endl;
    if (n1 % 3 == 0)
    {
        n1 = n1 / 3;
    }
    else if (n2 % 3 == 0)
    {
        n2 = n2 / 3;
    }
    else
    {
        n3 = n3 / 3;
    }
    cout << n1 << ", " << n2 << ", " << n3 << endl;
    if (n1 % 11 == 0)
    {
        n1 = n1 / 11;
    }
    else if (n2 % 11 == 0)
    {
        n2 = n2 / 11;
    }
    else
    {
        n3 = n3 / 11;
    }
    cout << n1 << ", " << n2 << ", " << n3 << endl; 
    if (n1 % 37 == 0)
    {
        n1 = n1 / 37;
    }
    else if (n2 % 37 == 0)
    {
        n2 = n2 / 37;
    }
    else
    {
        n3 = n3 / 37;
    }
    cout << n1 << ", " << n2 << ", " << n3 << endl;
    
}
    

    return 0;
}
