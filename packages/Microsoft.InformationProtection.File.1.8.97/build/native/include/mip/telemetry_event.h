/*
 *
 * Copyright (c) Microsoft Corporation.
 * All rights reserved.
 *
 * This code is licensed under the MIT License.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files(the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions :
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */
/**
 * @brief A file containing the Event class which describes a single telemetry event
 * 
 * @file telemetry_event.h
 */

#ifndef API_MIP_TELEMETRY_EVENT_H_
#define API_MIP_TELEMETRY_EVENT_H_
#include <map>
#include <unordered_set>

#include "mip/event.h"
#include "mip/mip_namespace.h"

MIP_NAMESPACE_BEGIN

/**
 * @brief A single telemetry event
 */
class TelemetryEvent : public Event{
public:

  /** @cond DOXYGEN_HIDE */
  virtual ~TelemetryEvent() {}
protected:
  TelemetryEvent(){}
   /** @endcond */

};

MIP_NAMESPACE_END
#endif // API_MIP_TELEMETRY_EVENT_H_

