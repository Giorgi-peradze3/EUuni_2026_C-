#include <iostream>
#include <string>
#include <sstream>
using namespace std; 



// task 1
//class Pizza {
//private:
//    
//    string topping;
//    int diameter;
//    double price;
//
//public:
//    
//    Pizza(string topping, int diameter, double price) 
//        : topping(topping), diameter(diameter), price(price) {}
//
//    
//    string getTopping() const { 
//        return topping; 
//    }
//    void setTopping(string newTopping) { 
//        topping = newTopping; 
//    }
//
//    int getDiameter() const { 
//        return diameter; 
//    }
//    void setDiameter(int newDiameter) { 
//        diameter = newDiameter; 
//    }
//
//    double getPrice() const { 
//        return price; 
//    }
//    void setPrice(double newPrice) { 
//        price = newPrice; 
//    }
//
//    
//    string toString() const {
//        return "pizza [topping: '" + topping + 
//               "', diameter: " + to_string(diameter) + " inch" +
//               ", price: " + to_string(price) + " gel]";
//    }
//};
//
//int main() {
//    
//    Pizza myPizza("diablo", 12, 22.50);
//
//   
//    cout << myPizza.toString() << endl;
//
//   
//    myPizza.setDiameter(14);
//    myPizza.setPrice(26.00);
//
//   
//    cout << "new diameter: " << myPizza.getDiameter() << " inch" << endl;
//    cout << "new price: " << myPizza.getPrice() << " gel" << endl;
//
//    return 0;
//}


// task 2

//class Taxpayer {
//private:
//    
//    string ssn;          
//    double grossIncome;   
//    double taxOwed;       
//
//    
//    void calculateTax() {
//        if (grossIncome < 30000.0) {
//            taxOwed = grossIncome * 0.15; 
//        } else {
//            taxOwed = grossIncome * 0.28; 
//        }
//    }
//
//public:
//    
//    Taxpayer(string ssn, double grossIncome) {
//        this->ssn = ssn;
//        this->grossIncome = grossIncome;
//        calculateTax(); 
//    }
//
//    
//    string getSsn() const {
//        return ssn;
//    }
//    void setSsn(string newSsn) {
//        ssn = newSsn;
//    }
//
//    
//    double getGrossIncome() const {
//        return grossIncome;
//    }
//    void setGrossIncome(double newIncome) {
//        grossIncome = newIncome;
//        calculateTax(); 
//    }
//
//    
//    double getTaxOwed() const {
//        return taxOwed;
//    }
//
//   
//    string toString() const {
//        stringstream ss;
//        ss << "Taxpayer [ssn: " << ssn 
//           << ", Gross Income: " << grossIncome 
//           << ", Tax Owed: " << taxOwed << "]";
//        return ss.str();
//    }
//};
//
//int main() {
//    
//    Taxpayer person1("1", 25000.0);
//    cout << person1.toString() << endl; 
//    
//
//    
//    Taxpayer person2("2", 40000.0);
//    cout << person2.toString() << endl;
//    
//    person1.setGrossIncome(50000.0); 
//    cout << "updated data:" << endl;
//    cout << "new gross income: " << person1.getGrossIncome() << endl;
//    cout << "new tax owed: " << person1.getTaxOwed() << endl;
//
//    return 0;
//}


// task 3


class Employee {
private:
    
    string firstName;
    string lastName;
    double salary;
    string position;
    string department;

public:
    
    Employee(string firstName, string lastName, double salary, string position, string department) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->salary = salary;
        this->position = position;
        this->department = department;
    }

    
    string getFirstName() const { return firstName; }
    void setFirstName(string newFirstName) { firstName = newFirstName; }

    string getLastName() const { return lastName; }
    void setLastName(string newLastName) { lastName = newLastName; }

    double getSalary() const { return salary; }
    void setSalary(double newSalary) { salary = newSalary; }

    string getPosition() const { return position; }
    void setPosition(string newPosition) { position = newPosition; }

    string getDepartment() const { return department; }
    void setDepartment(string newDepartment) { department = newDepartment; }
    
    void increaseSalary(double percentage) {
        if (percentage > 0) {
            salary += salary * (percentage / 100.0);
        }
    }

    
    void print() const {
        cout << "Employee Information:" << endl;
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Position: " << position << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    
    Employee emp("gio", "andronikashvili", 3000.0, "cybersecurity", "IT");
    
    emp.print();
    emp.increaseSalary(10);
    emp.print();

    emp.setPosition("Senior Developer");
    emp.setSalary(4500.0); 
    
    cout << "Updated Position: " << emp.getPosition() << endl;
    cout << "Updated Salary: " << emp.getSalary() << endl;

    return 0;
}

