//Program to calculate grade of a student in grade 10 having computer opt math as optional subjects
#include <iostream>

using namespace std;

int main()
{
    double scth, scpr, mth, mpr, ength, engpr, nepth, neppr, socth, socpr, comth, compr, opth, oppr;
    cout << "Enter marks in Science(Theory, Practical): ";
    cin >> scth >> scpr;
    cout << "Enter marks in Maths(Theory, Practical): ";
    cin >> mth >> mpr;
    cout << "Enter marks in English(Theory, Practical): ";
    cin >> ength >> engpr;
    cout << "Enter marks in Nepali(Theory, Practical): ";
    cin >> nepth >> neppr;
    cout << "Enter marks in Social Science(Theory, Practical): ";
    cin >> socth >> socpr;
    cout << "Enter marks in Optional Math(Theory, Practical): ";
    cin >> opth >> oppr;
    cout << "Enter marks in Computer Science(Theory, Practical): ";
    cin >> comth >> compr;
    double total = scth + scpr + mth + mpr + ength + engpr + nepth + neppr + socth + socpr + comth + compr + opth + oppr;
    double percent = total / 7;

    // For Theory:
    scth = 4 - (0.4 * (int)((75 - scth) / 7.51));
    mth = 4 - (0.4 * (int)((75 - mth) / 7.51));
    ength = 4 - (0.4 * (int)((75 - ength) / 7.51));
    nepth = 4 - (0.4 * (int)((75 - nepth) / 7.51));
    socth = 4 - (0.4 * (int)((75 - socth) / 7.51));
    opth = 4 - (0.4 * (int)((75 - opth) / 7.51));
    comth = 4 - (0.4 * (int)((50 - comth) / 5.1));

    cout << "\nGrades of Theory Subjects \n Science, Math, English, Nepali, Social, Opt Math, Computer: " << scth << " " << mth << " " << ength << " " << nepth << " " << socth << " " << opth << " " << comth << " " << endl;

    // For practical
    scpr = 4 - (0.4 * (int)((25 - scpr) / 2.51));
    mpr = 4 - (0.4 * (int)((25 - mpr) / 2.5));
    engpr = 4 - (0.4 * (int)((25 - engpr) / 2.5));
    neppr = 4 - (0.4 * (int)((25 - neppr) / 2.5));
    socpr = 4 - (0.4 * (int)((25 - socpr) / 2.5));
    oppr = 4 - (0.4 * (int)((25 - oppr) / 2.5));
    compr = 4 - (0.4 * (int)((50 - compr) / 5.1));

    cout << "\nGrades of Practical Subjects\n Science, Math, English, Nepali, Social, Opt Math, Computer: " << scpr << " " << mpr << " " << engpr << " " << neppr << " " << socpr << " " << oppr << " " << compr << " " << endl;

    double summuation = (scth * 3.75 + scpr * 1.25) + (mth * 3.75 + mpr * 1.25) + (ength * 3.75 + engpr * 1.25) + (nepth * 3.75 + nepth * 1.25) + (socth * 3 + socpr * 1) + (comth * 2 + compr * 2) + (opth * 3 + oppr * 1);
    double cr = 32;
    double gpa = summuation / cr;

    cout << "\nYour Total Marks: " << total << endl;
    cout << "Your percentage: " << percent << endl;
    cout << "Your GPA: " << gpa << endl;
    return 0;
}