#include <iostream>
#include <string>

using namespace std;

int main() {
    double commercial_rate = 7.5263;
    double residential_rate = 8.3550;
    double high_voltage_rate = 6.3610;
	double total_kWh_per_day;

	
    string Fname, Lname, Acc, type;
    
    
	cout << "***Electric Bill Calculator***" << endl;
	cout << "---Client Information" << endl;
    cout << "Enter Fname: ";
    cin >> Fname;
    cout << "Enter Lname: ";
    cin >> Lname;
    cout << "Enter Account #: ";
    cin >> Acc;
    cout << "---Readings" << endl;
    
    
    
    cout << "Enter customer type (commercial/residential/high voltage): ";
    cin >> type;

    cout << "Enter total kWh used per day: ";
    cin >> total_kWh_per_day;

    double rate;
    
    if (type == "commercial") {
        rate = commercial_rate;
    }
    else if (type == "residential") {
        rate = residential_rate;
    }
    else if (type == "high voltage") {
        rate = high_voltage_rate;
    }
    
    double total_kWh_per_month = total_kWh_per_day * 30;  
    double total_bill = total_kWh_per_month * rate;
    
    cout << "Dear " << Fname << ", your monthly bill is " << total_bill << " under the " << type << " rate." <<endl;
	cout << "Thank you!";
    return 0;
}

