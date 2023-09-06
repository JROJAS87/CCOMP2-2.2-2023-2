// (Maximal Heart Rate Calculator) Write a program that requests the user to enter their age 
// and then displays the suggested MHR values using each of these equations. As a conclusion, 
// suggest the range of values that the user should consider by displaying the smallest and largest 
// MHR values calculated. Test your pro­gram by entering severa! ages that are a few decades apart. 


#include <iostream>

using namespace std;

int main() {
    int edad;

    cout << "Maximal Heart Rate Calculator" << endl;
    cout << "Ingresa tu edad: ";
    cin >> edad;

    int fcm1 = 220 - edad;
    int fcm2 = 208 - 0.7 * edad;
    int fcm3 = 211 - 0.64 * edad;

    cout << "Valores de FCM sugeridos:" << endl;
    cout << "1. FCM = " << fcm1 << " latidos por minuto" << endl;
    cout << "2. FCM = " << fcm2 << " latidos por minuto" << endl;
    cout << "3. FCM = " << fcm3 << " latidos por minuto" << endl;

    int min_fcm = fcm1;
    int max_fcm = fcm1;

    if (fcm2 < min_fcm) {
        min_fcm = fcm2;
    }
    if (fcm2 > max_fcm) {
        max_fcm = fcm2;
    }

    if (fcm3 < min_fcm) {
        min_fcm = fcm3;
    }
    if (fcm3 > max_fcm) {
        max_fcm = fcm3;
    }

    cout << "Rango de valores sugeridos: Entre " << min_fcm << " y " << max_fcm << " latidos por minuto" << endl;

    return 0;
}
