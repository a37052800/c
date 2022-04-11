#pragma once

#define DLLEXPORT __declspec(dllexport)

#include <windows.h>

extern "C" DLLEXPORT BOOL RegisterHook(HMODULE);