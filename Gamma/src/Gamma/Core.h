#pragma once

#ifdef GM_PLATFORM_WINDOWS
	#ifdef GM_BUILD_DLL
		#define GM_API __declspec(dllexport)
	#else
		#define GM_API __declspec(dllimport)
	#endif
#endif
