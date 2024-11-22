#include <iostream>
#include <map>
#include <iomanip>
#include <ctime>
#include <cctype>

using namespace std;

void displayBillBook(const map<string, pair<double, tm>>& billBook) {
    cout << "----- Bill Book -----" << endl;
    if (billBook.empty()) {
        cout << "No records found." << endl;
    } else {
        cout << "Item\t\tAmount\t\tDate" << endl;
        cout << "---------------------------------" << endl;
        for (const auto& record : billBook) {
            cout << setw(15) << left << record.first << "\t" << record.second.first << "\t" << asctime(&record.second.second);
        }
    }
    cout << endl;
}

int main() {
    string programName = "Salman's Expense Tracker";
    cout << "Welcome to " << programName << "!" << endl << endl;
    map<string, pair<double, tm>> billBook;
    int choice;

    do {
        cout << "Menu:" << endl;
        cout << "1. Enter Expense" << endl;
        cout << "2. Display Bill Book" << endl;
        cout << "3. Display Expenses for a Certain Date" << endl;
        cout << "4. Display All Expenses in Order" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1: {
                string itemName;
                double amount;
                cout << "Enter the name of the item: ";
                cin.ignore();
                getline(cin, itemName);

                bool contDigits = false;
                for (char c : itemName) {
                    if (std::isdigit(c)) {
                        contDigits = true;
                        break;
                    }
                }
                if (contDigits) {
                    cout << "Invalid input. Names can't contain numbers." << endl;
                    exit(1);
                }

                cout << "Enter the amount spent: ";
                cin >> amount;

                time_t currentTime = time(0);
                tm* now = localtime(&currentTime);

                billBook[itemName] = make_pair(amount, *now);
                cout << "Expense added successfully!" << endl << endl;
                break;
            }
            case 2:
                displayBillBook(billBook);
                break;
            case 3: {
                cout << "Enter the date (YYYY-MM-DD): ";
                string dateString;
                cin.ignore();
                getline(cin, dateString);

                struct tm searchTime;
                strptime(dateString.c_str(), "%Y-%m-%d", &searchTime);

                cout << endl << "Expenses for " << dateString << ":" << endl;
                bool found = false;
                for (const auto& record : billBook) {
                    if (record.second.second.tm_year == searchTime.tm_year &&
                        record.second.second.tm_mon == searchTime.tm_mon &&
                        record.second.second.tm_mday == searchTime.tm_mday) {
                        cout << setw(15) << left << record.first << "\t" << record.second.first << endl;
                        found = true;
                    }
                }

                if (!found) {
                    cout << "No expenses found for the specified date." << endl;
                }

                cout << endl;
                break;
            }
            case 4:
                displayBillBook(billBook);
                break;
            case 5:
                cout << "Thank you for using " << programName << "!" << endl;
                cout << "Remember, wise spending leads to a prosperous future." << endl;
                break;
            default:
                cout << "Invalid choice. Please  again." << endl << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}

