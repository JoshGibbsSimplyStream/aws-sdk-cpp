﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/CreateComputeQuotaResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateComputeQuotaResult::CreateComputeQuotaResult()
{
}

CreateComputeQuotaResult::CreateComputeQuotaResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateComputeQuotaResult& CreateComputeQuotaResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ComputeQuotaArn"))
  {
    m_computeQuotaArn = jsonValue.GetString("ComputeQuotaArn");

  }

  if(jsonValue.ValueExists("ComputeQuotaId"))
  {
    m_computeQuotaId = jsonValue.GetString("ComputeQuotaId");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
