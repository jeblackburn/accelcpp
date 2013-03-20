#include <algorithm>
#include <vector>
#include <ios>
#include <iomanip>
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::cin;
using std::vector;

int main() {
    double midterm, final;
    cout << "Enter your midterm grade:" << endl;
    cin >> midterm;
    cout << "Enter your final grade:" << endl;
    cin >> final;

    vector<double> homeworkGrades;
    double grade;
    cout << "Enter homework grades.  When done, type a non-numeric value and <enter>" << endl;
    while (cin >> grade) {
        homeworkGrades.push_back(grade);    
    }
    sort(homeworkGrades.begin(), homeworkGrades.end());
    
    cout << "midterm: " << midterm << endl;
    cout << "final: " << final << endl;
    if (homeworkGrades.empty()) {
        cout << "No homework?  Your students must love you." << endl;
        cout << "Final grade: " << (2 * final + midterm) / 3 << endl;
        return 0;
    } else { 
        size_t hwCount = homeworkGrades.size();
        double medianHw = homeworkGrades[hwCount / 2];
        cout << "homework: " << medianHw << endl;
        cout << "Final grade: " << (0.4 * midterm) + (0.4 * final) + (0.2 * medianHw) << endl;
    }

    return 0;
}

