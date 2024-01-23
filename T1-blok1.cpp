#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    //zadanie1
    srand(time(NULL));
    int tab[10] = {};
    int n;
    int proby = 2;
    cout << "Podaj liczbe naturalna n, nie wieksza niz 5: " << endl;
    cin >> n;
    while (n > 5 || n < 0)
    {
        cout << "Podaj liczbe naturalna n, nie wieksza niz 5: " << endl;
        cin >> n;

    }
    for (int i = 0; i < n; i++)
    {
        cout << "Podaj liczbe parzysta, naturalna i mniejsza od 100: " << endl;
        cin >> tab[i];
        while (tab[i] > 100 || tab[i] % 2 != 0 || tab[i] < 0)
        {
            proby--;
            cout << "Liczba pozostalych prob wynosi: " << proby + 1 << endl;
            cout << "Podaj liczbe parzysta, naturalna i mniejsza od 100: " << endl;
            cin >> tab[i];
            if (proby == 0)
            {
                proby = 2;
                cout << "Przekroczono liczbe prob dla danego elementu!" << endl;
                tab[i] = 0;
                continue;
            }
        }
    }
    cout << endl;
    cout << "Po wykonaniu kodu z etapu 1, tablica bedzie wygladac tak: " << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << tab[i] << ",";
    }
    cout << endl;
    cout << endl;
    cout <<"Po wykonaniu kodu z etapu 2, tablica bedzie wygladac tak: " << endl;
    //zadanie2

    for (int i = 0; i < 10; i++)
    {
        if (tab[i] == 0)
        {
            tab[i] = rand() % 100 + 1;
            while (tab[i] % 2 != 0||tab[i]<10)
            {
                tab[i] = rand() % 100 + 1;
            }
        }
        cout<< tab[i]<<",";
    }
    cout << endl;
    cout << endl;
    cout << "Po wykonaniu kodu z etapu 3, tablica bedzie wygladac tak: " << endl;

    //zadanie3

      int*  start = &tab[0];
      int*  koniec = &tab[9];

    while (start < koniec)
    {
        int temp = *start;
        *start = *koniec;
        *koniec = temp;
        start++;
        koniec--;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << tab[i] << ",";
    }
    cout << endl;
}
