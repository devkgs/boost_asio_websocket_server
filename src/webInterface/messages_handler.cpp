#include "messages_handler.h"
#include <iostream>

messages_handler::messages_handler(void) {

}

void messages_handler::handle_message(const std::string msg_str, std::string &ret){
    std::cout << "event receive "<<msg_str<<std::endl;
    if(msg_str.compare("get_bat_voltage")){
        ret = "bat_voltage:123";
    }else if (msg_str.compare("get_status")){
        ret = "status:ok";
    }
    else{
        ret = "unknown command";
    }
}

