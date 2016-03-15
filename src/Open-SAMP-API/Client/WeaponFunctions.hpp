#pragma once
#include "Client.hpp"

namespace Client
{
	namespace WeaponFunctions
	{
		EXPORT int GetPlayerWeaponSlot();
		EXPORT int GetPlayerWeaponId(int dwWeapSlot);
		EXPORT int GetPlayerWeaponName(int dwWeapSlot, char* &_szWeapName, int max_len);
		EXPORT int GetPlayerWeaponClip(int dwWeapSlot);
		EXPORT int GetPlayerWeaponTotalClip(int dwWeapSlot);
		EXPORT int GetPlayerWeaponState();
	}
}