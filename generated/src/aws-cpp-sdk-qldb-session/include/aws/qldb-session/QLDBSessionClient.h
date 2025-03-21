﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qldb-session/QLDBSession_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/qldb-session/QLDBSessionServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/qldb-session/QLDBSessionErrorMarshaller.h>

namespace Aws
{
namespace QLDBSession
{
  AWS_QLDBSESSION_API extern const char SERVICE_NAME[];
  /**
   * <p>The transactional data APIs for Amazon QLDB</p>  <p>Instead of
   * interacting directly with this API, we recommend using the QLDB driver or the
   * QLDB shell to execute data transactions on a ledger.</p> <ul> <li> <p>If you are
   * working with an AWS SDK, use the QLDB driver. The driver provides a high-level
   * abstraction layer above this <i>QLDB Session</i> data plane and manages
   * <code>SendCommand</code> API calls for you. For information and a list of
   * supported programming languages, see <a
   * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-driver.html">Getting
   * started with the driver</a> in the <i>Amazon QLDB Developer Guide</i>.</p> </li>
   * <li> <p>If you are working with the AWS Command Line Interface (AWS CLI), use
   * the QLDB shell. The shell is a command line interface that uses the QLDB driver
   * to interact with a ledger. For information, see <a
   * href="https://docs.aws.amazon.com/qldb/latest/developerguide/data-shell.html">Accessing
   * Amazon QLDB using the QLDB shell</a>.</p> </li> </ul> 
   */
  class AWS_QLDBSESSION_API QLDBSessionClient : smithy::client::AwsSmithyClientT<Aws::QLDBSession::SERVICE_NAME,
      Aws::QLDBSession::QLDBSessionClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      QLDBSessionEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::QLDBSessionErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<QLDBSessionClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "QLDB Session"; }

      typedef QLDBSessionClientConfiguration ClientConfigurationType;
      typedef QLDBSessionEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBSessionClient(const Aws::QLDBSession::QLDBSessionClientConfiguration& clientConfiguration = Aws::QLDBSession::QLDBSessionClientConfiguration(),
                          std::shared_ptr<QLDBSessionEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBSessionClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<QLDBSessionEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::QLDBSession::QLDBSessionClientConfiguration& clientConfiguration = Aws::QLDBSession::QLDBSessionClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QLDBSessionClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<QLDBSessionEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::QLDBSession::QLDBSessionClientConfiguration& clientConfiguration = Aws::QLDBSession::QLDBSessionClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBSessionClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        QLDBSessionClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        QLDBSessionClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~QLDBSessionClient();

        /**
         * <p>Sends a command to an Amazon QLDB ledger.</p>  <p>Instead of
         * interacting directly with this API, we recommend using the QLDB driver or the
         * QLDB shell to execute data transactions on a ledger.</p> <ul> <li> <p>If you are
         * working with an AWS SDK, use the QLDB driver. The driver provides a high-level
         * abstraction layer above this <i>QLDB Session</i> data plane and manages
         * <code>SendCommand</code> API calls for you. For information and a list of
         * supported programming languages, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/getting-started-driver.html">Getting
         * started with the driver</a> in the <i>Amazon QLDB Developer Guide</i>.</p> </li>
         * <li> <p>If you are working with the AWS Command Line Interface (AWS CLI), use
         * the QLDB shell. The shell is a command line interface that uses the QLDB driver
         * to interact with a ledger. For information, see <a
         * href="https://docs.aws.amazon.com/qldb/latest/developerguide/data-shell.html">Accessing
         * Amazon QLDB using the QLDB shell</a>.</p> </li> </ul> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/qldb-session-2019-07-11/SendCommand">AWS
         * API Reference</a></p>
         */
        virtual Model::SendCommandOutcome SendCommand(const Model::SendCommandRequest& request = {}) const;

        /**
         * A Callable wrapper for SendCommand that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendCommandRequestT = Model::SendCommandRequest>
        Model::SendCommandOutcomeCallable SendCommandCallable(const SendCommandRequestT& request = {}) const
        {
            return SubmitCallable(&QLDBSessionClient::SendCommand, request);
        }

        /**
         * An Async wrapper for SendCommand that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendCommandRequestT = Model::SendCommandRequest>
        void SendCommandAsync(const SendCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const SendCommandRequestT& request = {}) const
        {
            return SubmitAsync(&QLDBSessionClient::SendCommand, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<QLDBSessionEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<QLDBSessionClient>;

  };

} // namespace QLDBSession
} // namespace Aws
