/* Current Convertor Project By Rishabh Singh */
/* Currency rates are taken on 29-June-2024 */
/* Source of the conversion rates: https://wise.com/in/currency-converter */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << endl << setw(80) << "****  WELCOME TO CURRENCY CONVERTER  ****" << endl << endl;
    cout << "The currencies available to convert are : Rupee, Dollar, Euro, Ruble, Pound and Yen " << endl;

    string curreny_1;
    cout << "What currency would you like to convert?" << endl;
    cin >> curreny_1;

    string curreny_2;
    cout << "In which currency would you like to convert this ? " << endl;
    cin >> curreny_2;

    double amount_1;
    cout << "How much money would you like to convert? " << endl;
    cin >> amount_1;

    double amount_2;

    cout << endl;

    if (curreny_1 == "Rupee")
    {
        if (curreny_2 == "Rupee")
        {
            amount_2 = amount_1 * 1;
            cout << "Result :- " << amount_1 << " Rupees is equal to " << amount_2 << " Rupees" << endl;
        }
        else if (curreny_2 == "Dollar")
        {
            amount_2 = amount_1 * 0.01200;
            cout << "Result :- " << amount_1 << " Ruppes is equal to " << amount_2 << " Dollars" << endl;
        }
        else if (curreny_2 == "Euro")
        {
            amount_2 = amount_1 * 0.01120;
            cout << "Result :- " << amount_1 << " Ruppes is equal to " << amount_2 << " Euros" << endl;
        }
        else if (curreny_2 == "Ruble")
        {
            amount_2 = amount_1 * 1.029;
            cout << "Result :- " << amount_1 << " Ruppes is equal to " << amount_2 << " Rubles" << endl;
        }
        else if (curreny_2 == "Pound")
        {
            amount_2 = amount_1 * 0.009487;
            cout << "Result :- " << amount_1 << " Ruppes is equal to " << amount_2 << " Pounds" << endl;
        }
        else if (curreny_2 == "Yen")
        {
            amount_2 = amount_1 * 1.930;
            cout << "Result :- " << amount_1 << " Ruppes is equal to " << amount_2 << " Yens" << endl;
        }
        else
        {
            cout << endl << " *********  INVALID  INPUT (Check the Spellings)  *********  " << endl;
        }
    }
    else if (curreny_1 == "Dollar")
    {
        if (curreny_2 == "Rupee")
        {
            amount_2 = amount_1 * 83.36;
            cout << "Result :- " << amount_1 << " Dollors is equal to " << amount_2 << " Rupees" << endl;
        }
        else if (curreny_2 == "Dollar")
        {
            amount_2 = amount_1 * 1;
            cout << "Result :- " << amount_1 << " Dollors is equal to " << amount_2 << " Dollors" << endl;
        }
        else if (curreny_2 == "Euro")
        {
            amount_2 = amount_1 * 0.9334;
            cout << "Result :- " << amount_1 << " Dollors is equal to " << amount_2 << " Euros" << endl;
        }
        else if (curreny_2 == "Ruble")
        {
            amount_2 = amount_1 * 85.77;
            cout << "Result :- " << amount_1 << " Dollors is equal to " << amount_2 << " Rubles" << endl;
        }
        else if (curreny_2 == "Pound")
        {
            amount_2 = amount_1 * 0.7908;
            cout << "Result :- " << amount_1 << " Dollors is equal to " << amount_2 << " Pounds" << endl;
        }
        else if (curreny_2 == "Yen")
        {
            amount_2 = amount_1 * 160.9;
            cout << "Result :- " << amount_1 << " Dollors is equal to " << amount_2 << "Yens" << endl;
        }
        else
        {
            cout << endl << " *********  INVALID  INPUT (Check the Spellings)  *********  " << endl;
        }
    }
    else if (curreny_1 == "Euro")
    {
        if (curreny_2 == "Rupee")
        {
            amount_2 = amount_1 * 89.31;
            cout << "Result :- " << amount_1 << " Euors is equal to " << amount_2 << " Rupees" << endl;
        }
        else if (curreny_2 == "Dollar")
        {
            amount_2 = amount_1 * 1.071;
            cout << "Result :- " << amount_1 << " Euors is equal to " << amount_2 << " Dollars" << endl;
        }
        else if (curreny_2 == "Euro")
        {
            amount_2 = amount_1 * 1;
            cout << "Result :- " << amount_1 << " Euors is equal to " << amount_2 << " Euros" << endl;
        }
        else if (curreny_2 == "Ruble")
        {
            amount_2 = amount_1 * 91.89;
            cout << "Result :- " << amount_1 << " Euors is equal to " << amount_2 << " Rubles" << endl;
        }
        else if (curreny_2 == "Pound")
        {
            amount_2 = amount_1 * 0.8473;
            cout << "Result :- " << amount_1 << " Euors is equal to " << amount_2 << " Pounds" << endl;
        }
        else if (curreny_2 == "Yen")
        {
            amount_2 = amount_1 * 172.4;
            cout << "Result :- " << amount_1 << " Euors is equal to " << amount_2 << " Yens" << endl;
        }
        else
        {
            cout << endl << " *********  INVALID  INPUT (Check the Spellings)  *********  " << endl;
        }
    }
    else if (curreny_1 == "Ruble")
    {
        if (curreny_2 == "Rupee")
        {
            amount_2 = amount_1 * 0.9720;
            cout << "Result :- " << amount_1 << " Rubles is equal to " << amount_2 << " Rupees" << endl;
        }
        else if (curreny_2 == "Dollar")
        {
            amount_2 = amount_1 * 0.01166;
            cout << "Result :- " << amount_1 << " Rubles is equal to " << amount_2 << " Dollars" << endl;
        }
        else if (curreny_2 == "Euro")
        {
            amount_2 = amount_1 * 0.01088;
            cout << "Result :- " << amount_1 << " Rubles is equal to " << amount_2 << " Euros" << endl;
        }
        else if (curreny_2 == "Ruble")
        {
            amount_2 = amount_1 * 1;
            cout << "Result :- " << amount_1 << " Rubles is equal to " << amount_2 << " Rubles" << endl;
        }
        else if (curreny_2 == "Pound")
        {
            amount_2 = amount_1 * 0.009221;
            cout << "Result :- " << amount_1 << " Rubles is equal to " << amount_2 << "Pounds" << endl;
        }
        else if (curreny_2 == "Yen")
        {
            amount_2 = amount_1 * 1.876;
            cout << "Result :- " << amount_1 << " Rubles is equal to " << amount_2 << " Yens" << endl;
        }
        else
        {
            cout << endl << " *********  INVALID  INPUT (Check the Spellings)  *********  " << endl;
        }
    }
    else if (curreny_1 == "Pound")
    {
        if (curreny_2 == "Rupee")
        {
            amount_2 = amount_1 * 105.4;
            cout << "Result :- " << amount_1 << " Pounds is equal to " << amount_2 << " Rupees" << endl;
        }
        else if (curreny_2 == "Dollar")
        {
            amount_2 = amount_1 * 1.265;
            cout << "Result :- " << amount_1 << " Pounds is equal to " << amount_2 << " Dollars" << endl;
        }
        else if (curreny_2 == "Euro")
        {
            amount_2 = amount_1 * 1.180;
            cout << "Result :- " << amount_1 << " Pounds is equal to " << amount_2 << " Euros" << endl;
        }
        else if (curreny_2 == "Ruble")
        {
            amount_2 = amount_1 * 108.5;
            cout << "Result :- " << amount_1 << " Pounds is equal to " << amount_2 << " Rubles" << endl;
        }
        else if (curreny_2 == "Pound")
        {
            amount_2 = amount_1 * 1;
            cout << "Result :- " << amount_1 << " Pounds is equal to " << amount_2 << " Pounds" << endl;
        }
        else if (curreny_2 == "Yen")
        {
            amount_2 = amount_1 * 203.4;
            cout << "Result :- " << amount_1 << " Pounds is equal to " << amount_2 << " Yens" << endl;
        }
        else
        {
            cout << endl << " *********  INVALID  INPUT (Check the Spellings)  *********  " << endl;
        }
    }
    else if (curreny_1 == "Yen")
    {
        if (curreny_2 == "Rupee")
        {
            amount_2 = amount_1 * 0.5182;
            cout << "Result :- " << amount_1 << "Yens is equal to " << amount_2 << " Rupees" << endl;
        }
        else if (curreny_2 == "Dollar")
        {
            amount_2 = amount_1 * 0.006216;
            cout << "Result :- " << amount_1 << " Yens is equal to " << amount_2 << " Dollars" << endl;
        }
        else if (curreny_2 == "Euro")
        {
            amount_2 = amount_1 * 0.005802;
            cout << "Result :- " << amount_1 << " Yens is equal to " << amount_2 << " Euros" << endl;
        }
        else if (curreny_2 == "Ruble")
        {
            amount_2 = amount_1 * 0.5331;
            cout << "Result :- " << amount_1 << " Yens is equal to " << amount_2 << " Rubles" << endl;
        }
        else if (curreny_2 == "Pound")
        {
            amount_2 = amount_1 * 0.004916;
            cout << "Result :- " << amount_1 << " Yens is equal to " << amount_2 << " Pounds" << endl;
        }
        else if (curreny_2 == "Yen")
        {
            amount_2 = amount_1 * 1;
            cout << "Result :- " << amount_1 << " Yens is equal to " << amount_2 << " Yens" << endl;
        }
        else
        {
            cout << endl << " *********  INVALID  INPUT (Check the Spellings)  *********  " << endl;
        }
    }
    else
    {
        cout << endl << " *********  INVALID  INPUT (Check the Spellings)  *********  " << endl;
    }

    cout << endl << "  ------THANK YOU FOR USING THIS CURRENCY CALCULATER------  " << endl;

    return 0;
}