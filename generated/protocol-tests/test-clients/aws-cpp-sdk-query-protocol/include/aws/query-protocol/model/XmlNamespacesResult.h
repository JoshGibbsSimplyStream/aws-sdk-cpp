﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/query-protocol/QueryProtocol_EXPORTS.h>
#include <aws/query-protocol/model/XmlNamespaceNested.h>
#include <aws/query-protocol/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace QueryProtocol
{
namespace Model
{
  class XmlNamespacesResult
  {
  public:
    AWS_QUERYPROTOCOL_API XmlNamespacesResult();
    AWS_QUERYPROTOCOL_API XmlNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_QUERYPROTOCOL_API XmlNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const XmlNamespaceNested& GetNested() const{ return m_nested; }
    inline void SetNested(const XmlNamespaceNested& value) { m_nested = value; }
    inline void SetNested(XmlNamespaceNested&& value) { m_nested = std::move(value); }
    inline XmlNamespacesResult& WithNested(const XmlNamespaceNested& value) { SetNested(value); return *this;}
    inline XmlNamespacesResult& WithNested(XmlNamespaceNested&& value) { SetNested(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline XmlNamespacesResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline XmlNamespacesResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    XmlNamespaceNested m_nested;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace QueryProtocol
} // namespace Aws
