#include <iostream>

using namespace std;

class marksheet
{
private:
    char name[50], fa_name[50], mo_name[11], s_name[60], dob[10];
    int roll_number, class1;
    int hi_marks, eng_marks, san_marks, math_marks, sci_marks, so_sci_marks;

public:
    void take_user_input(void);
    void generate_marksheet(void);
};
// This member function will print marksheet
void marksheet::generate_marksheet()
{
    int grand_total;
    float presentage;
    grand_total = hi_marks + eng_marks + san_marks + math_marks + sci_marks + so_sci_marks;
    presentage = grand_total / 6;

    cout << "\n------------------------------------------------------------------------------------\n";
    cout << "|                  DR SHYAMA PRASAD MUKHERJEE UNIVERSITY CERTIFICATE EXAMINATION      |\n";
    cout << "|-----------------------------------------------------------------------------------\n";
    cout << "|Your name: " << name << endl;
    cout << "|Class: " << class1 << "th" << endl;
    cout << "|Roll Number: " << roll_number << endl;
    cout << "|Father name: " << fa_name << endl;
    cout << "|Mother name: " << mo_name << endl;
    cout << "|Date of birth: " << dob << endl;
    cout << "|School name: " << s_name << endl;
    cout << "|------------------------------------------------------------------------------------\n";
    cout << "|\tSUBJECTS      \tMAX MARKS\tMIN MARKS\tTHEORY MARKS\n";
    cout << "|------------------------------------------------------------------------------------\n";
    cout << "|\tHINDI         \t  100      \t   33       \t   " << hi_marks << endl;
    cout << "|\tENGLISH       \t  100      \t   33       \t   " << eng_marks << endl;
    cout << "|\tSANSKRIT      \t  100      \t   33       \t   " << san_marks << endl;
    cout << "|\tMATHEMATICs   \t  100      \t   33       \t   " << math_marks << endl;
    cout << "|\tSCIENCE       \t  100      \t   33       \t   " << sci_marks << endl;
    cout << "|\tSOCIAL SCIENCE\t  100      \t   33       \t   " << so_sci_marks << endl;
    cout << "|------------------------------------------------------------------------------------\n";
    cout << "|\t              \t  600    |    GRAND TOTAL\t    " << grand_total << endl;
    cout << "|------------------------------------------------------------------------------------\n";
    if (presentage >= 81 && presentage <= 100)
    {
        cout << "|RESULT : PASS IN FIRST DIVISION\n";
        cout << "|GRADE  : A+\n";
    }
    if (presentage >= 60 && presentage <= 80)
    {
        cout << "|RESULT : PASS IN FIRST DIVISION\n";
        cout << "|GRADE  : A\n";
    }
    else if (presentage >= 41 && presentage <= 59)
    {
        cout << "|RESULT : PASS IN SECOND DIVISION\n";
        cout << "|GRADE  : B\n";
    }
    else if (presentage >= 31 && presentage <= 40)
    {
        cout << "|RESULT : PASS IN THIRD DIVISION\n";
        cout << "|GRADE  : C\n";
    }
    else if (presentage >= 1 && presentage <= 30)
    {
        cout << "|RESULT : Fail\n";
        cout << "|GRADE  : D\n";
    }
    cout << "|------------------------------------------------------------------------------------\n\n";
}
void marksheet::take_user_input()
{
    char yesNo;
    cout << "Enter your name: ";
    cin.sync();
    cin.getline(name, 50);
    cout << "Enter father name: ";
    cin.sync();
    cin.getline(fa_name, 50);
    cout << "Enter mother name: ";
    cin.sync();
    cin.getline(mo_name, 11);
    cout << "Enter school name: ";
    cin.sync();
    cin.getline(s_name, 50);
    cout << "Enter date of birth name: ";
    cin.sync();
    cin.getline(dob, 10);
    cout << "Enter class: ";
    cin.sync();
    cin >> class1;
    cout << "Enter roll No.: ";
    cin.sync();
    cin >> roll_number;
    cout << "\n -: Enter subject marks :-\n";
repeate:
    cout << "Hindi marks: ";
    cin.sync();
    cin >> hi_marks;
    if (hi_marks > 100 || hi_marks < 1)
    {
        cout << "invalid marks enter valid marks\n";
        goto repeate;
    }
repeate1:
    cout << "English marks: ";
    cin.sync();
    cin >> eng_marks;
    if (eng_marks > 100 || eng_marks < 1)
    {
        cout << "invalid marks enter valid marks\n";
        goto repeate1;
    }
repeate2:
    cout << "Sanskrit marks: ";
    cin.sync();
    cin >> san_marks;
    if (san_marks > 100 || san_marks < 1)
    {
        cout << "invalid marks enter valid marks\n";
        goto repeate2;
    }
repeate3:
    cout << "Mathematics marks: ";
    cin.sync();
    cin >> math_marks;
    if (math_marks > 100 || math_marks < 1)
    {
        cout << "invalid marks enter valid marks\n";
        goto repeate3;
    }
repeate4:
    cout << "Science marks: ";
    cin.sync();
    cin >> sci_marks;
    if (sci_marks > 100 || sci_marks < 1)
    {
        cout << "invalid marks enter valid marks\n";
        goto repeate4;
    }
repeate5:
    cout << "Social science marks: ";
    cin.sync();
    cin >> so_sci_marks;
    if (so_sci_marks > 100 || so_sci_marks < 1)
    {
        cout << "invalid marks enter valid marks\n";
        goto repeate5;
    }
    cout << "\nDo you want to generate your marksheet then press 'Y' otherwise 'N': ";
    cin.sync();
    cin >> yesNo;
    if (yesNo == 'y' || yesNo == 'Y')
    {
        generate_marksheet();
    }
    else
    {
        exit(0);
    }
}
int main()
{
    marksheet m1;
    cout << "\n            -: WELCOME TO DSPMU RANCHI :-\n\n";
    cout << "If you want to generate your marsheet ";
    cout << "then you have to provide some information\n\n";
    m1.take_user_input();
    return 0;
}