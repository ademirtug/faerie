// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#ifndef PCH_H
#define PCH_H

// TODO: add headers that you want to pre-compile here
// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#ifdef WIN32
#define WIN32_LEAN_AND_MEAN		// Exclude rarely-used stuff from Windows headers
#endif

#include <map>
#include <set>
#include <string>
#include <vector>

#include <regex>
#include <functional>
#include <mutex>
using namespace std;


// TODO: reference additional headers your program requires here

#include "base64.h"
#include "Encryptor.h"

#include "EmailAddress.h"
#include "Email.h"

#include "SimpleContext.h"
#include "SmtpContext.h"

#include "PopMessage.h"
#include "MessageList.h"

#include "IRequestHandler.h"
#include "PopRequestHandler.h"
#include "SmtpRequestHandler.h"

#include "Server.h"
#include "SmtpServer.h"
#include "PopServer.h"

#endif //PCH_H
