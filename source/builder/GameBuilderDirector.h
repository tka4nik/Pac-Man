#pragma once

#include "IGameBuilder.h"
#include "../state/GameState.h"

#include <memory>
#include <string>

class IStateManager;

class GameBuilderDirector {
public:
    GameBuilderDirector(std::unique_ptr<IGameBuilder>&& ptr_builder, const std::string& window_title, float dynamic_objects_ratio);
    std::unique_ptr<GameState> build(IStateManager& state_manager);
private:
    float m_dynamic_objects_ratio;
    std::string m_window_title;
    std::unique_ptr<IGameBuilder> m_ptr_builder;
};


