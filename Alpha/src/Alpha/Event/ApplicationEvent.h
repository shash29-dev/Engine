#pragma once

#include "Event.h"

namespace Alpha
{
    class DECLSPEC WindowResizeEvent : public Event
    {
    private:
        unsigned int m_Width, m_Height;

    public:
        WindowResizeEvent(unsigned int width, unsigned int height) : m_Width(width), m_Height(height) {}
        inline unsigned int GetWidth() const { return m_Width; }
        inline unsigned int GetHeight() const { return m_Height; }

        std::string ToString() const override
        {
            std::stringstream ss;
            ss << "WindowResizeEvent: " << m_Width << ", " << m_Height;
            return ss.str();
        }
        EVENT_CLASS_TYPE(WindowResize)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };

    class DECLSPEC WindowCloseEvent : public Event
    {
    public:
        WindowCloseEvent() {}
        EVENT_CLASS_TYPE(WindowClose)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };

    class DECLSPEC AppTickEvent : public Event
    {
    public:
        AppTickEvent() {}
        EVENT_CLASS_TYPE(AppTick)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };

    class DECLSPEC AppUpdateEvent : public Event
    {
    public:
        AppUpdateEvent() {}
        EVENT_CLASS_TYPE(AppUpdate)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };

    class DECLSPEC AppRenderEvent : public Event
    {
    public:
        AppRenderEvent() {}
        EVENT_CLASS_TYPE(AppRender)
        EVENT_CLASS_CATEGORY(EventCategoryApplication)
    };

}