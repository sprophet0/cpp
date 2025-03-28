#include <iostream>
#include <string>
using namespace std;

int main()
{
    int sayi;
    cout << "sayi gir\n";
    cin >> sayi;

    string one [] = { "", "bir", "iki", "uc", "dort",
                     "bes", "alti" , "yedi", "sekiz", "dokuz" };
    string two [] = {"", "on", "yirmi", "otuz", "kirk", "elli",
                     "altmis", "yetmis", "seksen", "doksan"};
    string three[] = {"", "yuz", "iki yuz", "uc yuz", "dort yuz", "bes yuz", 
                        "alti yuz", "yedi yuz", "sekiz yuz", "dokuz yuz"};
    int one1 = sayi % 10;
    int ten = sayi / 10;
    int hundred = (sayi/10) % 10;
    cout << three[hundred];
    cout << " ";
    cout << two[ten];
    cout << " ";
    cout << one[one1];
    
    return 0;
}