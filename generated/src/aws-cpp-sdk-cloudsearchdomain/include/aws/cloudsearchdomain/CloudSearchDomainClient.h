﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudsearchdomain/CloudSearchDomain_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/cloudsearchdomain/CloudSearchDomainServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/cloudsearchdomain/CloudSearchDomainErrorMarshaller.h>

namespace Aws
{
namespace CloudSearchDomain
{
  AWS_CLOUDSEARCHDOMAIN_API extern const char SERVICE_NAME[];
  /**
   * <p>You use the AmazonCloudSearch2013 API to upload documents to a search domain
   * and search those documents. </p> <p>The endpoints for submitting
   * <code>UploadDocuments</code>, <code>Search</code>, and <code>Suggest</code>
   * requests are domain-specific. To get the endpoints for your domain, use the
   * Amazon CloudSearch configuration service <code>DescribeDomains</code> action.
   * The domain endpoints are also displayed on the domain dashboard in the Amazon
   * CloudSearch console. You submit suggest requests to the search endpoint. </p>
   * <p>For more information, see the <a
   * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide">Amazon
   * CloudSearch Developer Guide</a>.</p>
   */
  class AWS_CLOUDSEARCHDOMAIN_API CloudSearchDomainClient : smithy::client::AwsSmithyClientT<Aws::CloudSearchDomain::SERVICE_NAME,
      Aws::CloudSearchDomain::CloudSearchDomainClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      CloudSearchDomainEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::CloudSearchDomainErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<CloudSearchDomainClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "CloudSearch Domain"; }

      typedef CloudSearchDomainClientConfiguration ClientConfigurationType;
      typedef CloudSearchDomainEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchDomainClient(const Aws::CloudSearchDomain::CloudSearchDomainClientConfiguration& clientConfiguration = Aws::CloudSearchDomain::CloudSearchDomainClientConfiguration(),
                                std::shared_ptr<CloudSearchDomainEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchDomainClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<CloudSearchDomainEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::CloudSearchDomain::CloudSearchDomainClientConfiguration& clientConfiguration = Aws::CloudSearchDomain::CloudSearchDomainClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudSearchDomainClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<CloudSearchDomainEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::CloudSearchDomain::CloudSearchDomainClientConfiguration& clientConfiguration = Aws::CloudSearchDomain::CloudSearchDomainClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchDomainClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        CloudSearchDomainClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        CloudSearchDomainClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~CloudSearchDomainClient();

        /**
         * <p>Retrieves a list of documents that match the specified search criteria. How
         * you specify the search criteria depends on which query parser you use. Amazon
         * CloudSearch supports four query parsers:</p> <ul> <li><code>simple</code>:
         * search all <code>text</code> and <code>text-array</code> fields for the
         * specified string. Search for phrases, individual terms, and prefixes. </li>
         * <li><code>structured</code>: search specific fields, construct compound queries
         * using Boolean operators, and use advanced features such as term boosting and
         * proximity searching.</li> <li><code>lucene</code>: specify search criteria using
         * the Apache Lucene query parser syntax.</li> <li><code>dismax</code>: specify
         * search criteria using the simplified subset of the Apache Lucene query parser
         * syntax defined by the DisMax query parser.</li> </ul> <p>For more information,
         * see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/searching.html">Searching
         * Your Data</a> in the <i>Amazon CloudSearch Developer Guide</i>.</p> <p>The
         * endpoint for submitting <code>Search</code> requests is domain-specific. You
         * submit search requests to a domain's search endpoint. To get the search endpoint
         * for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Search">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchOutcome Search(const Model::SearchRequest& request) const;

        /**
         * A Callable wrapper for Search that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchRequestT = Model::SearchRequest>
        Model::SearchOutcomeCallable SearchCallable(const SearchRequestT& request) const
        {
            return SubmitCallable(&CloudSearchDomainClient::Search, request);
        }

        /**
         * An Async wrapper for Search that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchRequestT = Model::SearchRequest>
        void SearchAsync(const SearchRequestT& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchDomainClient::Search, request, handler, context);
        }

        /**
         * <p>Retrieves autocomplete suggestions for a partial query string. You can use
         * suggestions enable you to display likely matches before users finish typing. In
         * Amazon CloudSearch, suggestions are based on the contents of a particular text
         * field. When you request suggestions, Amazon CloudSearch finds all of the
         * documents whose values in the suggester field start with the specified query
         * string. The beginning of the field must match the query string to be considered
         * a match. </p> <p>For more information about configuring suggesters and
         * retrieving suggestions, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/getting-suggestions.html">Getting
         * Suggestions</a> in the <i>Amazon CloudSearch Developer Guide</i>. </p> <p>The
         * endpoint for submitting <code>Suggest</code> requests is domain-specific. You
         * submit suggest requests to a domain's search endpoint. To get the search
         * endpoint for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/Suggest">AWS
         * API Reference</a></p>
         */
        virtual Model::SuggestOutcome Suggest(const Model::SuggestRequest& request) const;

        /**
         * A Callable wrapper for Suggest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SuggestRequestT = Model::SuggestRequest>
        Model::SuggestOutcomeCallable SuggestCallable(const SuggestRequestT& request) const
        {
            return SubmitCallable(&CloudSearchDomainClient::Suggest, request);
        }

        /**
         * An Async wrapper for Suggest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SuggestRequestT = Model::SuggestRequest>
        void SuggestAsync(const SuggestRequestT& request, const SuggestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchDomainClient::Suggest, request, handler, context);
        }

        /**
         * <p>Posts a batch of documents to a search domain for indexing. A document batch
         * is a collection of add and delete operations that represent the documents you
         * want to add, update, or delete from your domain. Batches can be described in
         * either JSON or XML. Each item that you want Amazon CloudSearch to return as a
         * search result (such as a product) is represented as a document. Every document
         * has a unique ID and one or more fields that contain the data that you want to
         * search and return in results. Individual documents cannot contain more than 1 MB
         * of data. The entire batch cannot exceed 5 MB. To get the best possible upload
         * performance, group add and delete operations in batches that are close the 5 MB
         * limit. Submitting a large volume of single-document batches can overload a
         * domain's document service. </p> <p>The endpoint for submitting
         * <code>UploadDocuments</code> requests is domain-specific. To get the document
         * endpoint for your domain, use the Amazon CloudSearch configuration service
         * <code>DescribeDomains</code> action. A domain's endpoints are also displayed on
         * the domain dashboard in the Amazon CloudSearch console. </p> <p>For more
         * information about formatting your data for Amazon CloudSearch, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/preparing-data.html">Preparing
         * Your Data</a> in the <i>Amazon CloudSearch Developer Guide</i>. For more
         * information about uploading data for indexing, see <a
         * href="http://docs.aws.amazon.com/cloudsearch/latest/developerguide/uploading-data.html">Uploading
         * Data</a> in the <i>Amazon CloudSearch Developer Guide</i>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearchdomain-2013-01-01/UploadDocuments">AWS
         * API Reference</a></p>
         */
        virtual Model::UploadDocumentsOutcome UploadDocuments(const Model::UploadDocumentsRequest& request) const;

        /**
         * A Callable wrapper for UploadDocuments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UploadDocumentsRequestT = Model::UploadDocumentsRequest>
        Model::UploadDocumentsOutcomeCallable UploadDocumentsCallable(const UploadDocumentsRequestT& request) const
        {
            return SubmitCallable(&CloudSearchDomainClient::UploadDocuments, request);
        }

        /**
         * An Async wrapper for UploadDocuments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UploadDocumentsRequestT = Model::UploadDocumentsRequest>
        void UploadDocumentsAsync(const UploadDocumentsRequestT& request, const UploadDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&CloudSearchDomainClient::UploadDocuments, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<CloudSearchDomainEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<CloudSearchDomainClient>;

  };

} // namespace CloudSearchDomain
} // namespace Aws
