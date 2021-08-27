#ifndef STUPIDLEARNING_CLIENT_H
#define STUPIDLEARNING_CLIENT_H

#include <sleepy_discord/sleepy_discord.h>
#include "../events/event_listener.h"

using namespace SleepyDiscord;



namespace StupidLearning {
    class Client : public DiscordClient {

    using DiscordClient::DiscordClient;

    private:
        std::vector<std::unique_ptr<EventListener>> listeners;

        void onMessage(Message message) override;
        void onReady(Ready readyData) override;

    public:
        void addListener(EventListener* listener);

    };
}



#endif //STUPIDLEARNING_CLIENT_H
