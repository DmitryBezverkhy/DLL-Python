#pragma once

#include <stdio.h>

#ifdef DLLPASTFUNCTION_EXPORT 
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

extern "C" DLL_API void window_print(const LPCSTR str);

extern "C" DLL_API void sum_int(int, int);
extern "C" DLL_API void sum_double(double, double);
extern "C" DLL_API void sum_char(char*, char*);
