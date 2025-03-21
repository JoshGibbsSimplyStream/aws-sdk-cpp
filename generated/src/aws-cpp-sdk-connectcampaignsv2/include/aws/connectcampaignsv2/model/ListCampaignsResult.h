﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/connectcampaignsv2/model/CampaignSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ConnectCampaignsV2
{
namespace Model
{
  /**
   * <p>The response for ListCampaigns API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/ListCampaignsResponse">AWS
   * API Reference</a></p>
   */
  class ListCampaignsResult
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API ListCampaignsResult();
    AWS_CONNECTCAMPAIGNSV2_API ListCampaignsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECTCAMPAIGNSV2_API ListCampaignsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListCampaignsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListCampaignsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListCampaignsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<CampaignSummary>& GetCampaignSummaryList() const{ return m_campaignSummaryList; }
    inline void SetCampaignSummaryList(const Aws::Vector<CampaignSummary>& value) { m_campaignSummaryList = value; }
    inline void SetCampaignSummaryList(Aws::Vector<CampaignSummary>&& value) { m_campaignSummaryList = std::move(value); }
    inline ListCampaignsResult& WithCampaignSummaryList(const Aws::Vector<CampaignSummary>& value) { SetCampaignSummaryList(value); return *this;}
    inline ListCampaignsResult& WithCampaignSummaryList(Aws::Vector<CampaignSummary>&& value) { SetCampaignSummaryList(std::move(value)); return *this;}
    inline ListCampaignsResult& AddCampaignSummaryList(const CampaignSummary& value) { m_campaignSummaryList.push_back(value); return *this; }
    inline ListCampaignsResult& AddCampaignSummaryList(CampaignSummary&& value) { m_campaignSummaryList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListCampaignsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListCampaignsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListCampaignsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<CampaignSummary> m_campaignSummaryList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
