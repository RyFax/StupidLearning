#include "commands_manager.h"

void CommandsManager::onMessage(Message message) {
    string content = message.content;

    if(content.rfind(PREFIX, 0) == 0) {

    }
}
