#include "employee.h"
#include <string.h>

void employee::init()
{
    id = 0;
    strcpy(name, " ");
    strcpy(position, "employee");
    worked_hour = 0.0;
}


void employee:: read()
{
    cout << "ID: " << endl;
    cin >> id;
    cout << "Ner: " << endl;
    cin >> name;
    cout << "Alban tushaal: " << endl;
    cin >> position;
}


void employee::print()
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Position: " << position << endl;
    cout << "Worked hour: " << worked_hour << endl;
}

float employee::calculate_dir_sal()
{
    return worked_hour * 6000;
}


float employee::calculate_sal()
{
    float salary = worked_hour * 10000;
    if (strcmp(position, "Director") == 0)
        return salary + calculate_dir_sal();
    return salary;
}

bool employee::add_hour(float hour)
{
    if(hour > 0 && hour < 24)
    {
        worked_hour += hour;
        return true;
    }

    return false;
}




