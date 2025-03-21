﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/bcm-pricing-calculator/model/FilterTimestamp.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bcm-pricing-calculator/model/ListWorkloadEstimatesFilter.h>
#include <utility>

namespace Aws
{
namespace BCMPricingCalculator
{
namespace Model
{

  /**
   */
  class ListWorkloadEstimatesRequest : public BCMPricingCalculatorRequest
  {
  public:
    AWS_BCMPRICINGCALCULATOR_API ListWorkloadEstimatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkloadEstimates"; }

    AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

    AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> Filter workload estimates based on the creation date. </p>
     */
    inline const FilterTimestamp& GetCreatedAtFilter() const{ return m_createdAtFilter; }
    inline bool CreatedAtFilterHasBeenSet() const { return m_createdAtFilterHasBeenSet; }
    inline void SetCreatedAtFilter(const FilterTimestamp& value) { m_createdAtFilterHasBeenSet = true; m_createdAtFilter = value; }
    inline void SetCreatedAtFilter(FilterTimestamp&& value) { m_createdAtFilterHasBeenSet = true; m_createdAtFilter = std::move(value); }
    inline ListWorkloadEstimatesRequest& WithCreatedAtFilter(const FilterTimestamp& value) { SetCreatedAtFilter(value); return *this;}
    inline ListWorkloadEstimatesRequest& WithCreatedAtFilter(FilterTimestamp&& value) { SetCreatedAtFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filter workload estimates based on the expiration date. </p>
     */
    inline const FilterTimestamp& GetExpiresAtFilter() const{ return m_expiresAtFilter; }
    inline bool ExpiresAtFilterHasBeenSet() const { return m_expiresAtFilterHasBeenSet; }
    inline void SetExpiresAtFilter(const FilterTimestamp& value) { m_expiresAtFilterHasBeenSet = true; m_expiresAtFilter = value; }
    inline void SetExpiresAtFilter(FilterTimestamp&& value) { m_expiresAtFilterHasBeenSet = true; m_expiresAtFilter = std::move(value); }
    inline ListWorkloadEstimatesRequest& WithExpiresAtFilter(const FilterTimestamp& value) { SetExpiresAtFilter(value); return *this;}
    inline ListWorkloadEstimatesRequest& WithExpiresAtFilter(FilterTimestamp&& value) { SetExpiresAtFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Filters to apply to the list of workload estimates. </p>
     */
    inline const Aws::Vector<ListWorkloadEstimatesFilter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<ListWorkloadEstimatesFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<ListWorkloadEstimatesFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListWorkloadEstimatesRequest& WithFilters(const Aws::Vector<ListWorkloadEstimatesFilter>& value) { SetFilters(value); return *this;}
    inline ListWorkloadEstimatesRequest& WithFilters(Aws::Vector<ListWorkloadEstimatesFilter>&& value) { SetFilters(std::move(value)); return *this;}
    inline ListWorkloadEstimatesRequest& AddFilters(const ListWorkloadEstimatesFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline ListWorkloadEstimatesRequest& AddFilters(ListWorkloadEstimatesFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token to retrieve the next page of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListWorkloadEstimatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListWorkloadEstimatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListWorkloadEstimatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to return per page. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListWorkloadEstimatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    FilterTimestamp m_createdAtFilter;
    bool m_createdAtFilterHasBeenSet = false;

    FilterTimestamp m_expiresAtFilter;
    bool m_expiresAtFilterHasBeenSet = false;

    Aws::Vector<ListWorkloadEstimatesFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMPricingCalculator
} // namespace Aws
