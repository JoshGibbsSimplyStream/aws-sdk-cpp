﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>
#include <aws/rest-xml-protocol/RestXmlProtocolRequest.h>
#include <aws/rest-xml-protocol/model/FooEnum.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RestXmlProtocol
{
namespace Model
{

  /**
   */
  class XmlEnumsRequest : public RestXmlProtocolRequest
  {
  public:
    AWS_RESTXMLPROTOCOL_API XmlEnumsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "XmlEnums"; }

    AWS_RESTXMLPROTOCOL_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const FooEnum& GetFooEnum1() const{ return m_fooEnum1; }
    inline bool FooEnum1HasBeenSet() const { return m_fooEnum1HasBeenSet; }
    inline void SetFooEnum1(const FooEnum& value) { m_fooEnum1HasBeenSet = true; m_fooEnum1 = value; }
    inline void SetFooEnum1(FooEnum&& value) { m_fooEnum1HasBeenSet = true; m_fooEnum1 = std::move(value); }
    inline XmlEnumsRequest& WithFooEnum1(const FooEnum& value) { SetFooEnum1(value); return *this;}
    inline XmlEnumsRequest& WithFooEnum1(FooEnum&& value) { SetFooEnum1(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FooEnum& GetFooEnum2() const{ return m_fooEnum2; }
    inline bool FooEnum2HasBeenSet() const { return m_fooEnum2HasBeenSet; }
    inline void SetFooEnum2(const FooEnum& value) { m_fooEnum2HasBeenSet = true; m_fooEnum2 = value; }
    inline void SetFooEnum2(FooEnum&& value) { m_fooEnum2HasBeenSet = true; m_fooEnum2 = std::move(value); }
    inline XmlEnumsRequest& WithFooEnum2(const FooEnum& value) { SetFooEnum2(value); return *this;}
    inline XmlEnumsRequest& WithFooEnum2(FooEnum&& value) { SetFooEnum2(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const FooEnum& GetFooEnum3() const{ return m_fooEnum3; }
    inline bool FooEnum3HasBeenSet() const { return m_fooEnum3HasBeenSet; }
    inline void SetFooEnum3(const FooEnum& value) { m_fooEnum3HasBeenSet = true; m_fooEnum3 = value; }
    inline void SetFooEnum3(FooEnum&& value) { m_fooEnum3HasBeenSet = true; m_fooEnum3 = std::move(value); }
    inline XmlEnumsRequest& WithFooEnum3(const FooEnum& value) { SetFooEnum3(value); return *this;}
    inline XmlEnumsRequest& WithFooEnum3(FooEnum&& value) { SetFooEnum3(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetFooEnumList() const{ return m_fooEnumList; }
    inline bool FooEnumListHasBeenSet() const { return m_fooEnumListHasBeenSet; }
    inline void SetFooEnumList(const Aws::Vector<FooEnum>& value) { m_fooEnumListHasBeenSet = true; m_fooEnumList = value; }
    inline void SetFooEnumList(Aws::Vector<FooEnum>&& value) { m_fooEnumListHasBeenSet = true; m_fooEnumList = std::move(value); }
    inline XmlEnumsRequest& WithFooEnumList(const Aws::Vector<FooEnum>& value) { SetFooEnumList(value); return *this;}
    inline XmlEnumsRequest& WithFooEnumList(Aws::Vector<FooEnum>&& value) { SetFooEnumList(std::move(value)); return *this;}
    inline XmlEnumsRequest& AddFooEnumList(const FooEnum& value) { m_fooEnumListHasBeenSet = true; m_fooEnumList.push_back(value); return *this; }
    inline XmlEnumsRequest& AddFooEnumList(FooEnum&& value) { m_fooEnumListHasBeenSet = true; m_fooEnumList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<FooEnum>& GetFooEnumSet() const{ return m_fooEnumSet; }
    inline bool FooEnumSetHasBeenSet() const { return m_fooEnumSetHasBeenSet; }
    inline void SetFooEnumSet(const Aws::Vector<FooEnum>& value) { m_fooEnumSetHasBeenSet = true; m_fooEnumSet = value; }
    inline void SetFooEnumSet(Aws::Vector<FooEnum>&& value) { m_fooEnumSetHasBeenSet = true; m_fooEnumSet = std::move(value); }
    inline XmlEnumsRequest& WithFooEnumSet(const Aws::Vector<FooEnum>& value) { SetFooEnumSet(value); return *this;}
    inline XmlEnumsRequest& WithFooEnumSet(Aws::Vector<FooEnum>&& value) { SetFooEnumSet(std::move(value)); return *this;}
    inline XmlEnumsRequest& AddFooEnumSet(const FooEnum& value) { m_fooEnumSetHasBeenSet = true; m_fooEnumSet.push_back(value); return *this; }
    inline XmlEnumsRequest& AddFooEnumSet(FooEnum&& value) { m_fooEnumSetHasBeenSet = true; m_fooEnumSet.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, FooEnum>& GetFooEnumMap() const{ return m_fooEnumMap; }
    inline bool FooEnumMapHasBeenSet() const { return m_fooEnumMapHasBeenSet; }
    inline void SetFooEnumMap(const Aws::Map<Aws::String, FooEnum>& value) { m_fooEnumMapHasBeenSet = true; m_fooEnumMap = value; }
    inline void SetFooEnumMap(Aws::Map<Aws::String, FooEnum>&& value) { m_fooEnumMapHasBeenSet = true; m_fooEnumMap = std::move(value); }
    inline XmlEnumsRequest& WithFooEnumMap(const Aws::Map<Aws::String, FooEnum>& value) { SetFooEnumMap(value); return *this;}
    inline XmlEnumsRequest& WithFooEnumMap(Aws::Map<Aws::String, FooEnum>&& value) { SetFooEnumMap(std::move(value)); return *this;}
    inline XmlEnumsRequest& AddFooEnumMap(const Aws::String& key, const FooEnum& value) { m_fooEnumMapHasBeenSet = true; m_fooEnumMap.emplace(key, value); return *this; }
    inline XmlEnumsRequest& AddFooEnumMap(Aws::String&& key, const FooEnum& value) { m_fooEnumMapHasBeenSet = true; m_fooEnumMap.emplace(std::move(key), value); return *this; }
    inline XmlEnumsRequest& AddFooEnumMap(const Aws::String& key, FooEnum&& value) { m_fooEnumMapHasBeenSet = true; m_fooEnumMap.emplace(key, std::move(value)); return *this; }
    inline XmlEnumsRequest& AddFooEnumMap(Aws::String&& key, FooEnum&& value) { m_fooEnumMapHasBeenSet = true; m_fooEnumMap.emplace(std::move(key), std::move(value)); return *this; }
    inline XmlEnumsRequest& AddFooEnumMap(const char* key, FooEnum&& value) { m_fooEnumMapHasBeenSet = true; m_fooEnumMap.emplace(key, std::move(value)); return *this; }
    inline XmlEnumsRequest& AddFooEnumMap(const char* key, const FooEnum& value) { m_fooEnumMapHasBeenSet = true; m_fooEnumMap.emplace(key, value); return *this; }
    ///@}
  private:

    FooEnum m_fooEnum1;
    bool m_fooEnum1HasBeenSet = false;

    FooEnum m_fooEnum2;
    bool m_fooEnum2HasBeenSet = false;

    FooEnum m_fooEnum3;
    bool m_fooEnum3HasBeenSet = false;

    Aws::Vector<FooEnum> m_fooEnumList;
    bool m_fooEnumListHasBeenSet = false;

    Aws::Vector<FooEnum> m_fooEnumSet;
    bool m_fooEnumSetHasBeenSet = false;

    Aws::Map<Aws::String, FooEnum> m_fooEnumMap;
    bool m_fooEnumMapHasBeenSet = false;
  };

} // namespace Model
} // namespace RestXmlProtocol
} // namespace Aws
