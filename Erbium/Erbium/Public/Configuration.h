#pragma once

struct FConfiguration
{
    static inline auto Playlist = L"Playlist_ShowdownAlt_Solo";
    static inline auto MaxTickRate = 30; // max storm dmg
    static inline auto bLateGame = true;
    static inline auto LateGameZone = 3; // lategame starting zone
    static inline auto bLateGameLongZone = true; // zone doesnt close for a long time if u want infinite respawns lategame
    static inline auto bEnableCheats = true;
    static inline auto SiphonAmount = 50; // choose ur siphon for kill right here! 0 is disable
    static inline auto bInfiniteMats = false;
    static inline auto bInfiniteAmmo = false;
    static inline auto bForceRespawns = true; // build your client with this too!/this is for respawns
    static inline auto bJoinInProgress = false; // tbh idk if it works never checked
    static inline auto bAutoRestart = false; // restart backend when match finished
    static inline auto bKeepInventory = false; // keep inventory
    static inline auto Port = 7777; // keep this the same if ur using nexa or other backends!
    static inline constexpr auto bEnableIris = true; 
    static inline constexpr auto bGUI = true;
    static inline constexpr auto bCustomCrashReporter = true;
    static inline constexpr auto bUseStdoutLog = false;
    static inline constexpr auto WebhookURL = ""; // fill in if you want status to send to a webhook
};
