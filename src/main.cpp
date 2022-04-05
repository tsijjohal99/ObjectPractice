#include "../include/window.h"
#include <iostream>

int main() {

    window::window BedroomWindow(2, true, "dirty", true, "blue");

    BedroomWindow.open();
    BedroomWindow.lookOut();

    return 0;
    
}