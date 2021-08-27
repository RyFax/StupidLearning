#include <sleepy_discord/sleepy_discord.h>

#include "settings.h"
#include "client.h"

#include "../commands/commands_manager.h"

using namespace std;
using namespace StupidLearning;

int main() {
    Settings settings("../data");

    Client bot(settings.getToken(), USER_CONTROLED_THREADS);
    bot.addListener(new CommandsManager());
    bot.run();

    return 0;
}
