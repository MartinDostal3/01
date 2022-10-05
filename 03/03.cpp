// 03.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
using namespace std;


int main()
{
    srand((unsigned)time(NULL));
    char volba;
    cout << "\nF = For, W = While, D = DO While, K=Konec: ";
    cin >> volba;
    while (volba != 'K')
    {
        switch (volba)
        {
        case 'F':
        {
            cout << "Je zbytecny nepotrebujeme, i nepotrebujeme, protoze cisla zadavame samy";
        }
        break;
        case 'W':
        {
            int x;
            int soucin = 1;
            int pocet = 0;
            int soucet = 0;
            double prumer;
            cout << " Zadavej nenulova cisla, 0 znamena konec: \n";
            cin >> x;
            while (x != 0)
            {
                soucin *= x;
                if (x % 2 == 0)
                {
                    soucet += x;
                    ++pocet;
                }
                cin >> x;
            }
            cout << "Soucin je " << soucin << endl;
            if (pocet > 0)
            {
                prumer = (double)soucet / pocet;
                cout << "Prumer je: " << prumer << endl;
            }
            else
            {
                cout << "Zadne sude cislo" << endl;
            }
        }
        break;
        case 'D':
        {
            int x;
            int soucin = 1;
            int pocet = 0;
            int soucet = 0;
            double prumer;
            cout << " Zadavej nenulova cisla, 0 znamena konec: \n";
            cin >> x;
            if (x > 0)
            {
                do
                {
                    soucin *= x;
                    if (x % 2 == 0)
                    {
                        soucet += x;
                        ++pocet;
                    }
                    cin >> x;
                } while (x != 0);
                cout << "Soucin je " << soucin << endl;
                if (pocet > 0)
                {
                    prumer = (double)soucet / pocet;
                    cout << "Prumer je: " << prumer << endl;
                }
                else
                {
                    cout << "Zadne sude cislo" << endl;
                }
            }
            else cout << "zadne prvky v posloupnosti" << endl;
           
        }
        break;
        default:
        {
            cout << "Nevybrana moznost";
        }
        break;
        }
        cout << "\n F = For, W = While, D = DO While, K=Konec: ";
        cin >> volba;
    }
}

