#pragma once

#include "Alpha/Core.h"
#include "Alpha/Event/Event.h"
#include "alpch.h"
namespace Alpha
{
    class DECLSPEC Layer
    {
    public:
        Layer(const std::string &name = "Layer");
        virtual ~Layer();
        virtual void OnAttach() {}
        virtual void OnDetach() {}
        virtual void OnUpdate() {}
        virtual void OnEvent(Event &event) {}
        inline const std::string &GetName() const { return m_DebugName; }

    private:
        std::string m_DebugName;
    };
}