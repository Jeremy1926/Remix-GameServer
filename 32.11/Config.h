#pragma once

constexpr auto bProd = false;
inline auto Port = 7777;
inline std::wstring GameserverIP;
inline std::string Region = "EU";
inline std::wstring Playlist = L"/BRPlaylists/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo";
inline bool bInit = false;
inline bool bReady = false;
inline bool bEnableZones = true;
inline bool bEvent = false;
inline easywsclient::WebSocket* gsSocket = nullptr;
    // L"/QuailPlaylist/Playlist/Playlist_Quail.Playlist_Quail
    // L"/BlastBerry/Playlists/Playlist_SunflowerSolo.Playlist_SunflowerSolo
    // L"/BlastBerry/Playlists/Playlist_PunchBerrySolo.Playlist_PunchBerrySolo
    // L"/Rumble/Playlists/Playlist_Respawn_24.Playlist_Respawn_24
// L"/QuailPlaylist/Playlist/Playlist_Quail.Playlist_Quail
// /BRPlaylists/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo