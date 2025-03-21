﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/model/XmlAttributesPayloadResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RestXmlProtocol
{
namespace Model
{
  class XmlAttributesOnPayloadResult
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlAttributesOnPayloadResult();
    AWS_RESTXMLPROTOCOL_API XmlAttributesOnPayloadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_RESTXMLPROTOCOL_API XmlAttributesOnPayloadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    
    inline const XmlAttributesPayloadResponse& GetPayload() const{ return m_payload; }
    inline void SetPayload(const XmlAttributesPayloadResponse& value) { m_payload = value; }
    inline void SetPayload(XmlAttributesPayloadResponse&& value) { m_payload = std::move(value); }
    inline XmlAttributesOnPayloadResult& WithPayload(const XmlAttributesPayloadResponse& value) { SetPayload(value); return *this;}
    inline XmlAttributesOnPayloadResult& WithPayload(XmlAttributesPayloadResponse&& value) { SetPayload(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline XmlAttributesOnPayloadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline XmlAttributesOnPayloadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline XmlAttributesOnPayloadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    XmlAttributesPayloadResponse m_payload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
