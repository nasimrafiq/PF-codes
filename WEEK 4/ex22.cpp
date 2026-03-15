#include <iostream>
using namespace std;
main()
 {
    string type;
    cin >> type;

    if (type == "Square") {
        double s;
        cin >> s;
        cout << s * s << endl;
    } 
    else if (type == "Rectangle") {
        double l, w;
        cin >> l >> w;
        cout << l * w << endl;
    } 
    else if (type == "Circle") {
        double r;
        cin >> r;
        double M_PI;
       
        cout << M_PI * r * r << endl;
    } 
    else if (type == "Triangle") {
        double b, h;
        cin >> b >> h;
        cout << 0.5 * b * h << endl;
    } 
    else {
        cout << "Invalid shape type." << endl;
    }

    return 0;
}