﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class GetLimitRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API GetLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetLimit"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the farm that contains the limit.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline GetLimitRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline GetLimitRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline GetLimitRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the limit to return.</p>
     */
    inline const Aws::String& GetLimitId() const{ return m_limitId; }
    inline bool LimitIdHasBeenSet() const { return m_limitIdHasBeenSet; }
    inline void SetLimitId(const Aws::String& value) { m_limitIdHasBeenSet = true; m_limitId = value; }
    inline void SetLimitId(Aws::String&& value) { m_limitIdHasBeenSet = true; m_limitId = std::move(value); }
    inline void SetLimitId(const char* value) { m_limitIdHasBeenSet = true; m_limitId.assign(value); }
    inline GetLimitRequest& WithLimitId(const Aws::String& value) { SetLimitId(value); return *this;}
    inline GetLimitRequest& WithLimitId(Aws::String&& value) { SetLimitId(std::move(value)); return *this;}
    inline GetLimitRequest& WithLimitId(const char* value) { SetLimitId(value); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_limitId;
    bool m_limitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
