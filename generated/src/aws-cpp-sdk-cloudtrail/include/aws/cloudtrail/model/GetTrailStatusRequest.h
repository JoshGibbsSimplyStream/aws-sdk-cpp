﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/cloudtrail/CloudTrailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudTrail
{
namespace Model
{

  /**
   * <p>The name of a trail about which you want the current status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudtrail-2013-11-01/GetTrailStatusRequest">AWS
   * API Reference</a></p>
   */
  class GetTrailStatusRequest : public CloudTrailRequest
  {
  public:
    AWS_CLOUDTRAIL_API GetTrailStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTrailStatus"; }

    AWS_CLOUDTRAIL_API Aws::String SerializePayload() const override;

    AWS_CLOUDTRAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the name or the CloudTrail ARN of the trail for which you are
     * requesting status. To get the status of a shadow trail (a replication of the
     * trail in another Region), you must specify its ARN.</p> <p> The following is the
     * format of a trail ARN:
     * <code>arn:aws:cloudtrail:us-east-2:123456789012:trail/MyTrail</code> </p> 
     * <p>If the trail is an organization trail and you are a member account in the
     * organization in Organizations, you must provide the full ARN of that trail, and
     * not just the name.</p> 
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GetTrailStatusRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetTrailStatusRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetTrailStatusRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
