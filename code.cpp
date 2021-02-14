#include <iostream>
#include <cmath>
struct polar
{
    double distance;
    double angle;
};
struct rect
{
    double x;
    double y;
};

// Prototypy
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "Podaj x i y: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Podaj nastepne liczby lub q, aby wyjsc: ";
    }
    cout << "Koniec\n";
    return 0;
}

// Zamiana współrzędnych prostokątnych na biegunowe
void rect_to_polar(const rect * pxy, polar * pda)
{
    using namespace std;
    pda->distance =
        sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}

// pokazuje współrzędne biegunowe, radiany przelicza na stopnie
void show_polar(const polar * pda)
{
    using namespace std;
    const double rad_to_deg = 57.29577951;

    cout << "Odleglosc = " << pda->distance << endl;
    cout << "Kat = " << pda->angle * rad_to_deg << " stopni\n";
}
