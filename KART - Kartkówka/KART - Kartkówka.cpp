/* Andrulewicz Artur
KART - Kartk�wka
2018-07-27
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int liczba;
        int mod=5;
        cin>>liczba;
        int zera=0;
        // Przy kolejnej pot�dze 5, liczba zer zwi�ksza si� o 1
        //od 1-24, liczba zer zwi�ksza si� co 5
        //przy 25 zwi�ksza si� jeszcze o 1 dodatkowo (20! lub 24! da nam 4 zera na ko�cu, 25! da nam 6 zer)
        //przy 125 zwi�kszas si� jeszcze o 2, bo zwi�ksza si� o 1 ze wzgl�du na kolejn� wielokrotno�� 5 oraz
        // o 1 ze wzgl�du na pierwsz� wielokrotno�� 125 (kolejnej pot�gi 5)
        while(liczba>=mod)
        {
            zera+=liczba/mod;
            mod*=5;
        }
        cout<<zera<<endl;
    }
    return 0;
}
