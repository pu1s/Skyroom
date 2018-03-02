/*

This file is part of Skyrom Project

MIT License

Copyright(c) 2018 Alexander Gorin

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files(the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

#define SKYROOM_EXPORT

#if defined _WIN32 || defined __CYGWIN__
#ifdef SKYROOM_EXPORT
#if defined __GNUC__
#define SKYROOM_API __attribute__  ((dllexport))
#else
#define SKYROOM_API __declspec(dllexport)
#endif //__GNUC__
#else
#if defined __GNUC__
#define SKYROOM_API __attribute__  ((dllimport))
#else
#define SKYROOM_API __declspec(dllimport)
#endif //__GNUC__
#endif
#endif //defined _WIN32 || defined __CYGWIN__
