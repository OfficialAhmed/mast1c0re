#pragma once

#if (defined(PS4) && PS4) || (defined(PS5) && PS5)
#include <types.hpp>
namespace PS
{
    namespace Sce
    {
        int32_t PadSetLightBar(int32_t handle, int32_t* colour);
    }
}
#endif