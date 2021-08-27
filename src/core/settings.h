#ifndef STUPIDLEARNING_SETTINGS_H
#define STUPIDLEARNING_SETTINGS_H

#include <string>

namespace StupidLearning {
    class Settings {
    private:
        std::string TOKEN;

    public:
        explicit Settings(std::string dataFolder);

        std::string getToken();
    };
}


#endif //STUPIDLEARNING_SETTINGS_H
