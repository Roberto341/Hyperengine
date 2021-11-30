#pragma once
#include "vulkan_types.inl"

void vulkan_command_buffer_allocate(vulkan_context* context, VkCommandPool pool, b8 is_primary, vulkan_command_buffer* out_command_buffer);

void vulkan_command_buffer_free(vulkan_context* context, VkCommandPool pool, vulkan_command_buffer* command_buffer);

void vulkan_command_buffer_begin(vulkan_command_buffer* command_buffer, b8 is_single_use, b8 is_renderpass_continue, b8 is_simultaneous_use);

