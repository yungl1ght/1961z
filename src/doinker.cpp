#include "main.h"

bool out = false;

void doinkerControl(){
    if(master.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_L1)){
        out = !out;
    }
    doinker.set_value(out);
}