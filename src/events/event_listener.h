//
// Created by ryfax on 8/27/21.
//

#ifndef STUPIDLEARNING_EVENT_LISTENER_H
#define STUPIDLEARNING_EVENT_LISTENER_H

#include <sleepy_discord/sleepy_discord.h>

using namespace SleepyDiscord;

namespace StupidLearning {
    class EventListener {
    public:
        virtual void onReady(Ready readyData);
        virtual void onResumed();
        virtual void onDeleteServer(UnavailableServer server);
        virtual void onEditServer(Server server);
        virtual void onBan(Snowflake<Server> serverID, User user);
        virtual void onUnban(Snowflake<Server> serverID, User user);
        virtual void onMember(Snowflake<Server> serverID, ServerMember member);
        virtual void onRemoveMember(Snowflake<Server> serverID, User user);
        virtual void onEditMember(Snowflake<Server> serverID, User user, std::vector<Snowflake<Role>> roles, std::string nick);
        virtual void onRole(Snowflake<Server> serverID, Role role);
        virtual void onDeleteRole(Snowflake<Server> serverID, Snowflake<Role> roleID);
        virtual void onEditRole(Snowflake<Server> serverID, Role role);
        virtual void onEditEmojis(Snowflake<Server> serverID, std::vector<Emoji> emojis);
        virtual void onMemberChunk(ServerMembersChunk memberChunk);
        virtual void onDeleteChannel(Channel channel);
        virtual void onEditChannel(Channel channel);
        virtual void onPinMessage(Snowflake<Channel> channelID, std::string lastPinTimestamp);
        virtual void onPresenceUpdate(PresenceUpdate presenseUpdate);
        virtual void onEditUser(User user);
        virtual void onEditUserSettings(const json::Value& jsonMessage);
        virtual void onEditVoiceState(VoiceState& state);
        virtual void onTyping(Snowflake<Channel> channelID, Snowflake<User> userID, time_t timestamp);
        virtual void onDeleteMessages(Snowflake<Channel> channelID, std::vector<Snowflake<Message>> messages) {}
        virtual void onEditMessage(MessageRevisions revisioins) {}
        virtual void onEditVoiceServer(VoiceServerUpdate& update ) {}
        virtual void onReaction(Snowflake<User> userID, Snowflake<Channel> channelID, Snowflake<Message> messageID, Emoji emoji) {}
        virtual void onDeleteReaction(Snowflake<User> userID, Snowflake<Channel> channelID, Snowflake<Message> messageID, Emoji emoji) {}
        virtual void onDeleteAllReaction(Snowflake<Server> serverID, Snowflake<Channel> channelID, Snowflake<Message> messageID) {}
        virtual void onMessage(Message message) {}
        virtual void onServer(Server server) {}
        virtual void onChannel(Channel channel) {}
        virtual void onDispatch(const json::Value& jsonMessage) {}
        virtual void onUnknownEvent(std::string name, const json::Value& data) {}
    };
}

#endif //STUPIDLEARNING_EVENT_LISTENER_H
