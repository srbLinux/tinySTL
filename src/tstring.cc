#include "../include/tstring.h"

#include <string.h>
#include <stdlib.h>

using namespace tiny;

String::String(char ch) {
    this->_M_len = 8;
    this->_M_data = new char[8];
    this->_M_data[0] = ch;
}