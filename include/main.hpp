#pragma once

#include <regex>

#include "paper2_scotland2/shared/logger.hpp"

#define BLACKLIST std::regex("tombstone_..")

static inline constexpr auto logger = Paper::ConstLoggerContext(MOD_ID);
static inline modloader::ModInfo modInfo{MOD_ID, VERSION, 0};

#define PLAYERDATAKEEPER_EXPORT __attribute__((visibility("default")))
#ifdef __cplusplus
#define PLAYERDATAKEEPER_EXPORT_FUNC extern "C" PLAYERDATAKEEPER_EXPORT
#else
#define PLAYERDATAKEEPER_EXPORT_FUNC PLAYERDATAKEEPER_EXPORT
#endif
