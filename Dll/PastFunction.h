//В файле указана структура функций, необходимая для работы с .dll
#pragma once

#include <stdio.h>

#ifdef DLLPASTFUNCTION_EXPORT 
#define DLLPASTFUNCTION_API __declspec(dllexport)
#else
#define DLLPASTFUNCTION_API __declspec(dllimport)
#endif

extern "C" DLLPASTFUNCTION_API void FunctionPrint1();
extern "C" DLLPASTFUNCTION_API void FunctionPrint2();
extern "C" DLLPASTFUNCTION_API void FunctionPrint3();