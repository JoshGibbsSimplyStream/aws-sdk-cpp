﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/ProjectProfileSummary.h>
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
namespace DataZone
{
namespace Model
{
  class ListProjectProfilesResult
  {
  public:
    AWS_DATAZONE_API ListProjectProfilesResult();
    AWS_DATAZONE_API ListProjectProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API ListProjectProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The results of the ListProjectProfiles action.</p>
     */
    inline const Aws::Vector<ProjectProfileSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<ProjectProfileSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<ProjectProfileSummary>&& value) { m_items = std::move(value); }
    inline ListProjectProfilesResult& WithItems(const Aws::Vector<ProjectProfileSummary>& value) { SetItems(value); return *this;}
    inline ListProjectProfilesResult& WithItems(Aws::Vector<ProjectProfileSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListProjectProfilesResult& AddItems(const ProjectProfileSummary& value) { m_items.push_back(value); return *this; }
    inline ListProjectProfilesResult& AddItems(ProjectProfileSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When the number of project profiles is greater than the default value for the
     * MaxResults parameter, or if you explicitly specify a value for MaxResults that
     * is less than the number of project profiles, the response includes a pagination
     * token named NextToken. You can specify this NextToken value in a subsequent call
     * to ListProjectProfiles to list the next set of project profiles.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListProjectProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListProjectProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListProjectProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListProjectProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListProjectProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListProjectProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ProjectProfileSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
