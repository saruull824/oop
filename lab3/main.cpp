#include "employee.h"

int main()
{
    employee emp;
    emp.init();
    emp.read();

    float hour;
    cout << "Ajillasan tsagiig ni oruul: " << endl;
    cin >> hour;
    emp.add_hour(hour);
    cout << emp.calculate_sal() << endl;
    emp.print();
    return 0;
}
