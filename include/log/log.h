#ifndef __LOG_LOG_H
#define __LOG_LOG_H 1

#include <iostream>

#define ERROR(data) {std::cout << "[#] " << data << std::endl;}
#define WARN(data) {std::cout << "[!] " << data << std::endl;}
#define INFO(data) {std::cout << "[*] " << data << std::endl;}

#ifndef __FUNCTION_NAME__
#ifdef WIN32
#define __FUNCTION_NAME__   __FUNCTION__
#else
#define __FUNCTION_NAME__   __func__
#endif
#endif

#ifdef __DEBUG__
#define DEBUG(data) {std::cout << "[" __FILE__ "][" << __FUNCTION_NAME__ << "] " << data << std::endl;}
#else
#define DEBUG(data)
#endif

#ifdef __DEBUG1__
#define DEBUG1(data) DEBUG(data)
#else
#define DEBUG1(data)
#endif

#ifdef __DEBUG2__
#define DEBUG2(data) DEBUG(data)
#else
#define DEBUG2(data)
#endif

#ifdef __DEBUG3__
#define DEBUG3(data) DEBUG(data)
#else
#define DEBUG3(data)
#endif

#ifdef __DEBUG4__
#define DEBUG4(data) DEBUG(data)
#else
#define DEBUG4(data)
#endif


#endif
