#pragma once

#ifndef EXPORT
#define EXPORT __declspec(dllexport)
#else
#define IMPORT __declspec(dllimport)
#endif
