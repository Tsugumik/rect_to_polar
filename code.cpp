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

// Prototypes
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
    using namespace std;
    rect rplace;
    polar pplace;
    cout << "Enter x and y: ";
    while (cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);
        show_polar(&pplace);
        cout << "Enter the next numbers or q to exit: ";
    }
    cout << "End\n";
    return 0;
}

// Converting rectangular coordinates to polar
void rect_to_polar(const rect * pxy, polar * pda)
{
    using namespace std;
    pda->distance =
        sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}

// Shows polar coordinates, converts radians to degrees
void show_polar(const polar * pda)
{
    using namespace std;
    const double rad_to_deg = 57.29577951;

    cout << "Distance = " << pda->distance << endl;
    cout << "Angle = " << pda->angle * rad_to_deg << " degree\n";
}
