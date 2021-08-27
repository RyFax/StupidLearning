//
// Created by ryfax on 8/27/21.
//

#ifndef STUPIDLEARNING_COMMANDS_MANAGER_H
#define STUPIDLEARNING_COMMANDS_MANAGER_H

#include "../events/event_listener.h";

using namespace StupidLearning;
using namespace std;

namespace StupidLearning {
    class CommandsManager : public EventListener {

    private:
        const string PREFIX = "!";

        void onMessage(Message message) override;

    };
}

#endif //STUPIDLEARNING_COMMANDS_MANAGER_H
