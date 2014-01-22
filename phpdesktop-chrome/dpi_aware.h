// Copyright (c) 2012-2014 PHP Desktop Authors. All rights reserved.
// License: New BSD License.
// Website: http://code.google.com/p/phpdesktop/

#pragma once

#include "defines.h"
#include "include/cef_app.h"
#include "cef/util.h"

void SetBrowserDpiSettings(CefRefPtr<CefBrowser> cefBrowser);
void GetDpiAwareWindowSize(int* width, int* height);