#pragma once

#ifdef BS_PLATFORM_WINDOWS
	#ifdef BS_BUILD_DLL
		#define BOSS_API __declspec(dllexport)
	#else 
		#define	BOSS_API __declspec(dllimport)
	#endif
#else
	#error Boss only supports Windows!
#endif
