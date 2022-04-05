#pragma once
#include <iostream>

//namespace window {
    class window {
        private:
            int noOfPlanes;
            bool doesOpen;
            std::string cleanliness;
            bool tinted;
            std::string colour;

        public:
            window(int planes, bool open, std::string clean, bool tint, std::string col) {
                noOfPlanes = planes;
                doesOpen = open;
                cleanliness = clean;
                tinted = tint;
                colour = col;
            }
            void open();
            void close();
            void clean();
            void smash();
            void lookOut();
    };
//}