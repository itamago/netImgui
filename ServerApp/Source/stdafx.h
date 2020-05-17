// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

// Few warnings we want disabled for the Server code
#if defined(__clang__)
	#pragma clang diagnostic ignored "-Wc++98-compat-pedantic"
	#pragma clang diagnostic ignored "-Wmissing-prototypes"
#endif
#ifdef _MSC_VER
	#pragma warning (disable: 4464)	// warning C4464: relative include path contains '..'
	#pragma warning (disable: 4774)	// warning C4774 : xxx : format string expected in argument yyy is not a string literal
	#pragma warning (disable: 5045)	// warning C5045 : Compiler will insert Spectre mitigation for memory load if / Qspectre switch specified
#endif

#include "../targetver.h"
#define OEMRESOURCE
#define WIN32_LEAN_AND_MEAN			// Exclude rarely-used stuff from Windows headers
// Windows Header Files
#include <Windows.h>
