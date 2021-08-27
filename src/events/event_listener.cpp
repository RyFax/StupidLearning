#include "event_listener.h"

void StupidLearning::EventListener::onReady(Ready readyData) {}
void StupidLearning::EventListener::onResumed() {}
void StupidLearning::EventListener::onDeleteServer(UnavailableServer server) {}
void StupidLearning::EventListener::onEditServer(Server server) {}
void StupidLearning::EventListener::onBan(Snowflake<Server> serverID, User user) {}
void StupidLearning::EventListener::onUnban(Snowflake<Server> serverID, User user) {}
void StupidLearning::EventListener::onMember(Snowflake<Server> serverID, ServerMember member) {}
void StupidLearning::EventListener::onRemoveMember(Snowflake<Server> serverID, User user) {}
void StupidLearning::EventListener::onEditMember(Snowflake<Server> serverID, User user, std::vector<Snowflake<Role>> roles, std::string nick) {}
void StupidLearning::EventListener::onRole(Snowflake<Server> serverID, Role role) {}
void StupidLearning::EventListener::onDeleteRole(Snowflake<Server> serverID, Snowflake<Role> roleID) {}
void StupidLearning::EventListener::onEditRole(Snowflake<Server> serverID, Role role) {}
void StupidLearning::EventListener::onEditEmojis(Snowflake<Server> serverID, std::vector<Emoji> emojis) {}
void StupidLearning::EventListener::onMemberChunk(ServerMembersChunk memberChunk) {}
void StupidLearning::EventListener::onDeleteChannel(Channel channel) {}
void StupidLearning::EventListener::onEditChannel(Channel channel) {}
void StupidLearning::EventListener::onPinMessage(Snowflake<Channel> channelID, std::string lastPinTimestamp) {}
void StupidLearning::EventListener::onPresenceUpdate(PresenceUpdate presenseUpdate) {}
void StupidLearning::EventListener::onEditUser(User user) {}
void StupidLearning::EventListener::onEditUserSettings(const json::Value& jsonMessage) {}
void StupidLearning::EventListener::onEditVoiceState(VoiceState& state) {}
void StupidLearning::EventListener::onTyping(Snowflake<Channel> channelID, Snowflake<User> userID, time_t timestamp) {}
