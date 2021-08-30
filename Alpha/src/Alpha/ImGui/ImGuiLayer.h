#pragma once
#include "Alpha/Layer.h"

namespace Alpha
{
    class DECLSPEC ImGuiLayer : public Layer
    {
    public:
        ImGuiLayer();
        ~ImGuiLayer();

        void OnAttach();
        void OnDetach();
        void OnUpdate();
        void OnEvent(Event &event);

    private:
        float m_Time = 0.0f;
    };

} // namespace Alpha