#include <iostream>
using namespace std;

int main(void)
{

char selection;
float num1, num2;

do {
cout << endl;
cout << endl;
cout<<"\n Kalkulator";

cout<<"\n===============";

cout<<"\n 1. Dodawanie";

cout<<"\n 2. Odejmowanie";

cout<<"\n 3. Mnozenie";

cout<<"\n 4. Dzielenie";

cout<<"\n 0. Wyjdz";

cout << endl;
cout << endl;

cout<<"\n Podaj wybor i nacisnij Enter: ";

// Wpisz wartosc

cin>>selection;


switch(selection)
{


case '1' :{

    cout<<"\n Wprowadz a\n:";

    cin>>num1;

    cout<<"\n Wprowadz b:\n";

    cin>>num2;

    cout<<"\n Wynik dodawania: \n"<< num1 + num2;

}
break;


case '2' :{

    cout<<"\n Wprowadz a\n:";

    cin>>num1;

    cout<<"\n Wprowadz b:\n";

    cin>>num2;

    cout<<"\n Wynik odejmowania: \n"<< num1 - num2;

}
break;


case '3' :{

    cout<<"\n Wprowadz a\n:";

    cin>>num1;

    cout<<"\n Wprowadz b:\n";

    cin>>num2;

    cout<<"\n Wynik mnozenia: \n"<< num1 * num2;

}
break;


case '4' :{

    cout<<"\n Wprowadz a\n:";

    cin>>num1;

    cout<<"\n Wprowadz b:\n";

    cin>>num2;

if (num2 == 0)
{
    cout<<"\n Blad! Dzielenie przez 0 niedozwolone. Podaj inna liczbe:";
    cin>>num2;
}


    cout<<"\n Wynik dzielenia: \n"<< num1 / num2;


}
break;


case '0' :{cout<<"\n Do Widzenia!\n";

    return 0;
}

// Inne wybory

default : cout<<"\n Blad! Wybor nieprawidlowy";

}       // zamkniecie switch
}       // zamkniecie do
while(selection != 0);      // petla oprocz opcji 0

return 0;
}
