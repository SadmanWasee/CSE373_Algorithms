#include<iostream>
#include<string.h>
#include<cstdlib>

using namespace std;

int main(void)
{

    string number;


    cout << "Enter a number: ";
    cin >> number;




    int digit = 0;

    int oddsum = 0 ;

    int evensum = 0;

    for(int i=0; i<number.length();i++)
    {


        if((i+1)%2==0)
        {
            evensum = evensum + (int)number[i]-48;
        }
        else
        {
            oddsum = oddsum + (int)number[i]-48;
        }
    }


    int difference = abs(evensum-oddsum);

    if(difference%11==0)
    {
        cout << number << " is divisible by 11 !";
    }
    else
    {
        cout << number << " is not divisible by 11";
    }
}
