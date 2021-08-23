#pragma once

#include "Core.h"

namespace Alpha
{
    class DECLSPEC Application
    {
    public:
        Application();
        virtual ~Application();

        void Run();
    };

    Application *CreateApplication();
}