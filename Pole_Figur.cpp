// Pole_Figur.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

using namespace std;

void initMenuBox();
void menuDecision(int);
double poleKwadratu(double);
double poleKola(double);
double poleProstokata(double, double);
double poleTrojkata(double, double);

const double pi = 3.14;

int main()
{
    string kont = "Tak";
    int wybor;
    string cos;

    cout << "------------------------" << endl;
    cout << "|-Obliczanie Pol Figur-|" << endl;
    cout << "|----Jego wysokosci----|" << endl;
    cout << "|--Wikora Chabowskiego-|" << endl;
    cout << "------------------------" << endl;
    cout << endl << "(Przywitaj sie, dziadzie)" << endl;

    cin >> cos;
    
    
    do {

        system("cls"); //clear screen
        initMenuBox();

        while (!(cin >> wybor)) {

            cin.clear(); 
            cin.ignore(1024, '\n');

        }

        menuDecision(wybor);

        do {

            cout << "Czy chcesz kontynuowac program? (Tak/Nie)" << endl;
            cin >> kont;

        } while (kont != "Tak" && kont != "TAK" && kont != "tak" && kont != "Nie" && kont != "NIE" && kont != "nie");

    } while (kont == "Tak" || kont == "tak" || kont == "TAK");
}

void initMenuBox() 
{

    cout << "Wybierz opcje: " << endl;
    cout << "1. Pole Kwadratu" << endl;
    cout << "2. Pole Kola" << endl;
    cout << "3. Pole Prostokatu" << endl;
    cout << "4. Pole Trojkata" << endl;

}

void menuDecision(int wybor) {

    double a, b;

    switch (wybor) {

        case 1: 
            
            cout << "Bok mierzy...   ";  
            cin >> a; poleKwadratu(a); 
            break;

        case 2: 
            
            cout << "Promien twojego kola mierzy...   ";
            cin >> a; 
            poleKola(a); 
            break;

        case 3: 
            
            cout << "Prostokat w pionie ma...    ";
            cin >> a; 
            cout << "A w poziomie...   ";
            cin >> b; 
            poleProstokata(a, b); 
            break;

        case 4: 
            
            cout << "Baza twojego trojkata mierzy...    ";
            cin >> a; 
            cout << "A jego wysokosc to...    ";
            cin >> b; 
            poleTrojkata(a, b); 
            break;

        default: cout << "Wybrales zly numer, ko-ko-kolegooo" << endl; 

    }
}

double poleKwadratu(double a) {

    double wynik = a * a;

    cout << "Pole kwadratu o bokach mierzacych " << a << " wynosi " << wynik << endl;
    
    return wynik;
}

double poleKola(double a) {

    double wynik = pi * (a * a);

    cout << "Pole kola o promieniu mierzacym " << a << " wynosi " << wynik << endl;

    return wynik;
}

double poleProstokata(double a, double b) {

    double wynik = a * b;

    cout << "Pole prostokata o bokach mierzacych " << a << " oraz " << b << " wynosi " << wynik << endl;

    return wynik;
}

double poleTrojkata(double a, double b) {

    double wynik = 0.5 * a * b;

    cout << "Pole trojkata o podstawie mierzacej " << a << " oraz o wysokosci " << b << " wynosi " << wynik << endl;

    return wynik;
}

