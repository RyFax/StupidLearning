#include "client.h"

void StupidLearning::Client::onReady(Ready ready) {
    for(auto &listener : listeners) listener->onReady(ready);
}

void StupidLearning::Client::onMessage(Message message) {
    for(auto &listener : listeners) listener->onMessage(message);
}

void StupidLearning::Client::addListener(EventListener* listener) {
    listeners.emplace_back(listener);
}
