#include <iostream>
#include <fstream>

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    cout << "Podaj imie: ";         cin>>imie;
    cout << "Podaj nazwisko: ";     cin>>nazwisko;
    cout << "Podaj nr telefonu: ";  cin>>nr_tel;

    ofstream File;
    File.open("makaron.txt",ios::out);

    File<<imie<<endl;
    File<<nazwisko<<endl;
    File<<nr_tel<<endl;

    File.close();

    return 0;
}
