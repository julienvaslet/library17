#ifndef __LOG_LOG_H
#define __LOG_LOG_H 1

#include <iostream>

#define ERROR(data) std::cout << "[#] " << data << std::endl;
#define WARN(data) std::cout << "[!] " << data << std::endl;
#define INFO(data) std::cout << "[*] " << data << std::endl;

#ifdef __DEBUG__
#define DEBUG(data) std::cout << "[-] " << data << std::endl;
#else
#define DEBUG(data)
#endif

#ifdef __DEBUG1__
#define DEBUG1(data) std::cout << "[-] " << data << std::endl;
#else
#define DEBUG1(data)
#endif

#ifdef __DEBUG2__
#define DEBUG2(data) std::cout << "[-] " << data << std::endl;
#else
#define DEBUG2(data)
#endif

#ifdef __DEBUG3__
#define DEBUG3(data) std::cout << "[-] " << data << std::endl;
#else
#define DEBUG3(data)
#endif

#ifdef __DEBUG4__
#define DEBUG4(data) std::cout << "[-] " << data << std::endl;
#else
#define DEBUG4(data)
#endif


#endif
