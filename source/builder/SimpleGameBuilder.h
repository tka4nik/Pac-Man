#include "IGameBuilder.h"
#include "../state/GameState.h"


class SimpleGameBuilder : public IGameBuilder {
public:
    SimpleGameBuilder(float width, float height, float room_size) : m_height(height), m_width(width), m_room_size(room_size) {}

    void create_rooms() override;
    void set_rooms_sides() override;
    void create_context(float dynamic_objects_ratio) override;
    void create_state(IStateManager& state_manager, std::string window_title) override;
    void set_all_to_state() override;
    std::unique_ptr<GameState> get_game() override;
private:
    float m_width;
    float m_height;
    float m_room_size;
    std::vector<std::vector<std::unique_ptr<Room>>> m_rooms;
    GameContext m_context;
    std::unique_ptr<GameState> m_game_state;
};


