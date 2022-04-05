#include "../include/window.h"
#include <iostream>

namespace window {

    void window::open() {
        if (doesOpen) {
            std::cout << "<window opens>" << std::endl;
        } else {
            std::cout << "<window doesnt open>" << std::endl;
        }
    }

    void window::close() {
        std::cout << "<window closes>" << std::endl;
    }

    void window::clean() {
        std::cout << "<window gets cleaned>" << std::endl;
    }

    void window::smash() {
         std::cout << "<window gets smashed>" << std::endl;
    }

    void window::lookOut() {
        std::cout << "<window gets looked out of>" << std::endl;
    }
}