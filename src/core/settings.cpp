#include <iostream>
#include <fstream>
#include "settings.h"

StupidLearning::Settings::Settings(std::string dataFolder) {
    std::ifstream tokenFile(dataFolder + "/token");
    getline(tokenFile, TOKEN);
    tokenFile.close();
}

std::string StupidLearning::Settings::getToken() {
    return TOKEN;
}

