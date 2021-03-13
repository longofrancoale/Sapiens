#pragma once

#ifdef SP_PLATFORM_WINDOWS
#ifdef SP_BUILD_DLL
#define SAPIENS_API __declspec(dllexport)
#else
#define SAPIENS_API __declspec(dllimport)
#endif // SP_BUILD_DLL
#else
#error Sapiens Only Supports Windows
#endif 
