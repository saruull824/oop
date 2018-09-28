#include <iostream>
using namespace std;

class employee
{
public:

    int id;
    char name[20];
    char position[10];
    float worked_hour;

public:
    void init();
    void print();
    void read();
    float calculate_sal();
    float calculate_dir_sal();
    bool add_hour(float hour);


};
