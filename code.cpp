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
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "Podaj x i y: ";
    while (cin >> rplace.x >> rplace.y)
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Podaj nastepne liczby lub q, aby wyjsc: ";
    }
    cout << "Koniec\n";
    return 0;
}

// Zamiana współrzędnych prostokątnych na biegunowe
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;
    answer.distance =
        sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

// pokazuje współrzędne biegunowe, radiany przelicza na stopnie
void show_polar(polar dapos)
{
    using namespace std;
    const double rad_to_deg = 57.29577951;

    cout << "Odleglosc = " << dapos.distance << endl;
    cout << "Kat = " << dapos.angle * rad_to_deg << " stopni\n";
}
