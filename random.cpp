#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main()
{
    int i = 0, los, odp;

    srand(time(NULL));

    //for (int j = 0; j < 20; j++)
        los = rand() % 1000 + 1;
       // cout << los << endl;

        do
        {
            cout << "Zgadnij liczbe 1 -1000:";
            cin >> odp;
            i++;
            cout << "To twoja " << i << " proba" << endl;
            if (odp < los)
            {
                cout << "liczba jest za mala " << endl;
            }
            else if (odp > los)
            {
                cout << "podana liczba jest za duza" << endl;
            }
        } while (los != odp);
        cout << "wygrales za "<<i <<" razem"<< endl;
    return 0;
}
