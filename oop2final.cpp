#include <iostream>
#include <string>
using namespace std;

class student {
    string name, dob, address, tele, driving, bloodgroup;
    static int count;

public:
    student() : name(""), dob(""), address(""), tele(""), driving(""), bloodgroup("") {
        count++;
    }

    ~student() {
        cout << "student destructor called\n";
    }

    student(string n, string d, string a, string t, string drv, string bg)
        : name(n), dob(d), address(a), tele(t), driving(drv), bloodgroup(bg) {
        count++;
    }

    student(const student &stud)
        : name(stud.name), dob(stud.dob), address(stud.address),
          tele(stud.tele), driving(stud.driving), bloodgroup(stud.bloodgroup) {
        count++;
    }

    static void counter() {
        cout << "Total count is " << count << endl;
    }

    inline void getstudent() {
        cout << "\nEnter name: ";
        getline(cin, name);
        cout << "Enter Date of birth in DD/MM/YYYY: ";
        getline(cin, dob);
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter telephone number: ";
        getline(cin, tele);
        cout << "Enter driving license: ";
        getline(cin, driving);
        cout << "Enter blood group: ";
        getline(cin, bloodgroup);
    }

    friend class college;
};

class college {
    int roll;
    char division;
    string classname;

public:
    college() : roll(0), division(' '), classname("") {}

    college(int r, char div, string cn) : roll(r), division(div), classname(cn) {}

    ~college() {
        cout << "college destructor called\n";
    }

    inline void getcollege() {
        cout << "\nEnter your roll no: ";
        cin >> roll;
        cin.ignore(); // To consume any newline left in the input stream
        cout << "Enter your division: ";
        cin >> division;
        cin.ignore(); // To consume any newline left in the input stream
        cout << "Enter your classname is: ";
        getline(cin, classname);
    }

    void displaydata(const student &stud) {
        cout << "\nPrinting the data of student:";
        cout << "\nYour name is " << stud.name;
        cout << "\nDate of birth is " << stud.dob;
        cout << "\nYour address is " << stud.address;
        cout << "\nYour telephone number is " << stud.tele;
        cout << "\nDriving license number is " << stud.driving;
        cout << "\nBlood group is " << stud.bloodgroup;
        cout << "\nYour roll no is " << roll;
        cout << "\nYour class name is " << classname;
        cout << "\nYour division is " << division << endl;
    }
};

int student::count = 0;

int main() {
    student s0("Amit Mandlik", "16/12/2004", "Akole", "8007195215", "12345678", "A+");
    college c0(2205, 'B', "SE Computer");

    s0.counter();

    c0.displaydata(s0);

    int n = 0;

    cout << "\nEnter total no of students: ";
    cin >> n;
    cin.ignore(); // Consume newline left in the stream after reading integer

    // Use vector or unique_ptr array for automatic memory management.
    student *s = new student[n];
    college *c = new college[n];

    for (int i = 0; i < n; i++) {
        cout << "\nNew student\n";
        s[i].getstudent();
        c[i].getcollege();
        c[i].displaydata(s[i]);
    }

    delete[] s; // Delete dynamically allocated students
    delete[] c; // Delete dynamically allocated colleges

    return 0;
}
