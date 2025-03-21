﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift-serverless/model/ServerlessTrack.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListTracksResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListTracksResult();
    AWS_REDSHIFTSERVERLESS_API ListTracksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListTracksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListTracksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTracksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTracksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The returned tracks.</p>
     */
    inline const Aws::Vector<ServerlessTrack>& GetTracks() const{ return m_tracks; }
    inline void SetTracks(const Aws::Vector<ServerlessTrack>& value) { m_tracks = value; }
    inline void SetTracks(Aws::Vector<ServerlessTrack>&& value) { m_tracks = std::move(value); }
    inline ListTracksResult& WithTracks(const Aws::Vector<ServerlessTrack>& value) { SetTracks(value); return *this;}
    inline ListTracksResult& WithTracks(Aws::Vector<ServerlessTrack>&& value) { SetTracks(std::move(value)); return *this;}
    inline ListTracksResult& AddTracks(const ServerlessTrack& value) { m_tracks.push_back(value); return *this; }
    inline ListTracksResult& AddTracks(ServerlessTrack&& value) { m_tracks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListTracksResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListTracksResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListTracksResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ServerlessTrack> m_tracks;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
