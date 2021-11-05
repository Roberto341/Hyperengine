#pragma once

#include "defines.h"
#include "core/asserts.h"
#include <vulkan/vulkan.h>

#define VK_CHECK(expr)             \
    {                               \
        HASSERT(expr == VK_SUCCESS);  \
    }

typedef struct vulkan_device{
    VkPhysicalDevice physical_device;
    VkDevice logical_device;
} vulkan_device;

typedef struct vulkan_context{
    VkInstance instance;
    VkAllocationCallbacks* allocator;

#if defined(_DEBUG)
    VkDebugUtilsMessengerEXT debug_messenger;
#endif
} vulkan_context;