﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-influxdb/model/DbClusterSummary.h>
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
namespace TimestreamInfluxDB
{
namespace Model
{
  class ListDbClustersResult
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API ListDbClustersResult();
    AWS_TIMESTREAMINFLUXDB_API ListDbClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TIMESTREAMINFLUXDB_API ListDbClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Timestream for InfluxDB cluster summaries.</p>
     */
    inline const Aws::Vector<DbClusterSummary>& GetItems() const{ return m_items; }
    inline void SetItems(const Aws::Vector<DbClusterSummary>& value) { m_items = value; }
    inline void SetItems(Aws::Vector<DbClusterSummary>&& value) { m_items = std::move(value); }
    inline ListDbClustersResult& WithItems(const Aws::Vector<DbClusterSummary>& value) { SetItems(value); return *this;}
    inline ListDbClustersResult& WithItems(Aws::Vector<DbClusterSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline ListDbClustersResult& AddItems(const DbClusterSummary& value) { m_items.push_back(value); return *this; }
    inline ListDbClustersResult& AddItems(DbClusterSummary&& value) { m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token from a previous call of the operation. When this value is provided, the
     * service returns results from where the previous response left off.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListDbClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListDbClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListDbClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListDbClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListDbClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListDbClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<DbClusterSummary> m_items;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
