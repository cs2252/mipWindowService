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
 * @brief A file Containing the SensitivityTypesRulePackage class.
 * 
 * @file sensitivity_types_rules_package.h
 */
#ifndef API_MIP_UPE_SENSITIVITY_TYPES_RULE_PACKAGE_H_
#define API_MIP_UPE_SENSITIVITY_TYPES_RULE_PACKAGE_H_

#include <string>

#include "mip/common_types.h"
#include "mip/mip_namespace.h"

MIP_NAMESPACE_BEGIN
class SensitivityTypesRulePackage {
public:
  /**
   * @brief Get the Rule Package Id
   * 
   * @return the Rule Package Id
   */
  virtual const std::string& GetRulePackageId() const = 0;
  /**
   * @brief Get the Rule Package
   * 
   * @return the Rule Package
   */
  virtual const std::string& GetRulePackage() const = 0;
  /** @cond DOXYGEN_HIDE */
  virtual ~SensitivityTypesRulePackage() { }
protected:
  SensitivityTypesRulePackage() { }
  /** @endcond */
private:
  std::string mTest;
};

MIP_NAMESPACE_END

#endif //API_MIP_UPE_SENSITIVITY_TYPES_RULE_PACKAGE_H_