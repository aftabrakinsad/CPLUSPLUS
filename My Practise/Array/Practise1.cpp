/*#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
    cout << cars[0] <<endl;
    cout << cars[1] <<endl;
    cout << cars[2] <<endl;
    cout << cars[3] <<endl;
    //return 0;
}*/

/*#include<iostream>

using namespace std;

int main()
{
    double num[10] = { 7.6 , 8.6 , 9.6 , 10.6 , 11.6 , 12.6 , 13.6 , 14.6 , 15.6 , 16.6};
    cout << num[0] <<endl;
    cout << num[9] << endl;
    
}*/

/*#include<iostream>
using namespace std;

int main()
{
    string cars[5] = {"BMW", "FORD", "GTR", "LAMBORGHINI", "PORSCHE"};

    cout << cars[0]+", "+cars[1]<<endl;

    return 0;
}*/

/*#include<iostream>
using namespace std;

int main()
{
    string cars[5]= {"BMW", "FORD", "GTR", "LAMBORGHINI", "PORSCHE"};

    for (int i = 0; i < 5; i++)
    {
        cout<<i<<": "<<cars[i]<<endl;
    }
    return 0;
}*/

//Multi-Dimensional Arrays
/*#include<iostream>
using namespace std;

int main()
{
    string cars[2][3] = 
    {
        {"BMW", "FORD", "GTR"},
        {"LAMBORGHINI", "PORSCHE", "AUDI"}
    };

    cout<<cars[1][0]<<endl;

    return 0;
}*/

// Multi-Dimensional Arrays with for loop
#include<iostream>
using namespace std;

int main()
{
    string cars[2][3] = 
    {
        {"BMW", "FORD", "GTR"},
        {"LAMBORGHINI", "PORSCHE", "AUDI"}
    };

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<cars[i][j]<<", ";
        }
    }
    
    return 0;
}