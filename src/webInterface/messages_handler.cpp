#include "messages_handler.h"
#include <iostream>

void handle_message(const std::string msg_str, std::string &ret){
    std::cout << "event receive "<<msg_str<<std::endl;
    ret = "fuck you form C++";
}