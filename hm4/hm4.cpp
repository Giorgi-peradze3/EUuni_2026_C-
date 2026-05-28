#include <iostream>
#include <string>
#include <fstream>
using namespace std;


// task 1
//int main() {
//    string input;
//    cout << "enter text: ";
//    getline(cin, input);
//
//    string result = ""; 
//
//    for (size_t i = 0; i < input.length(); i++) {
//        char ch = input[i]; 
//
//        if (ch == ' ' || ch == '.' || ch == ',' || ch == '!' || ch == '?' || ch == ';') {
//            continue;
//        }
//
//        if (result.find(ch) == string::npos) {
//            result += ch;
//        }
//    }
//
//    cout << "special symbols: ";
//    for (size_t i = 0; i < result.length(); i++) {
//        cout << result[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}


// task 2



//int main() {
//    string input;
//    cout << "enter text: ";
//    getline(cin, input);
//
//    string checked = ""; 
//
//    for (size_t i = 0; i < input.length(); i++) {
//        char ch = input[i];
//
//        if (ch == ' ' || ch == '.' || ch == ',' || ch == '!' || ch == '?' || ch == ';') {
//            continue;
//        }
//
//        
//        if (checked.find(ch) != string::npos) {
//            continue; 
//        }
//
//       
//        int count = 0;
//        for (size_t j = 0; j < input.length(); j++) {
//            if (input[j] == ch) {
//                count++;
//            }
//        }
//
//        
//        cout << ch << " : " << count << endl;
//        checked += ch; 
//    }
//
//    return 0;
//}


// task 3


int main() {
    string name;
    string best_student = "";
    double max_average = -1;

    ofstream file("results.txt"); 

    while (true) {
        cout << "Enter name (or '!' to stop): ";
        cin >> name; 

        if (name == "!") {
            break; 
        }

        double g1, g2, g3;
        cout << "Enter 3 grades: ";
        cin >> g1 >> g2 >> g3; 

        double average = (g1 + g2 + g3) / 3.0; 

        file << name << " - Average: " << average << endl;

        
        if (average > max_average) {
            max_average = average;
            best_student = name;
        }
    }

    
    file << "Best student: " << best_student << " (" << max_average << ")" << endl;

    file.close(); 
    cout << "Done! Check results.txt" << endl;

    return 0;
}







