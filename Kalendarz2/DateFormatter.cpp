//
// Created by Damian on 15.10.2017.
//

#include "DateFormatter.h"


string German::format(Cal date) {
    int y = date.getYear();
    int m = date.getMonth();
    int d = date.getDay();

    char s[11];
    sprintf(s, "%02d.%02d.%04d\n", d, m, y);

    string to_print(s);

    return to_print;
}


string Computer::format(Cal date) {
    int y = date.getYear();
    int m = date.getMonth();
    int d = date.getDay();

    char s[11];
    sprintf(s, "%04d-%02d-%02d\n", y, m, d);

    string to_print(s);

    return to_print;
}