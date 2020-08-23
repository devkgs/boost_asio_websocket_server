#ifndef SIMPLE_WEBSOCKET_SERVER_MESSAGES_HANDLER_H
#define SIMPLE_WEBSOCKET_SERVER_MESSAGES_HANDLER_H

#include <string>

class messages_handler {

public:
    virtual void handle_message(const std::string msg_str, std::string &ret);


};


#endif //SIMPLE_WEBSOCKET_SERVER_MESSAGES_HANDLER_H
