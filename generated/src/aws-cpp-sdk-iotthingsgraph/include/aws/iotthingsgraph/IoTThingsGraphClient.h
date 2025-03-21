﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotthingsgraph/IoTThingsGraph_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/iotthingsgraph/IoTThingsGraphServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/iotthingsgraph/IoTThingsGraphErrorMarshaller.h>

namespace Aws
{
namespace IoTThingsGraph
{
  AWS_IOTTHINGSGRAPH_API extern const char SERVICE_NAME[];
  /**
   * <fullname>AWS IoT Things Graph</fullname> <p>AWS IoT Things Graph provides an
   * integrated set of tools that enable developers to connect devices and services
   * that use different standards, such as units of measure and communication
   * protocols. AWS IoT Things Graph makes it possible to build IoT applications with
   * little to no code by connecting devices and services and defining how they
   * interact at an abstract level.</p> <p>For more information about how AWS IoT
   * Things Graph works, see the <a
   * href="https://docs.aws.amazon.com/thingsgraph/latest/ug/iot-tg-whatis.html">User
   * Guide</a>.</p> <p>The AWS IoT Things Graph service is discontinued.</p>
   */
  class AWS_IOTTHINGSGRAPH_API IoTThingsGraphClient : smithy::client::AwsSmithyClientT<Aws::IoTThingsGraph::SERVICE_NAME,
      Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      IoTThingsGraphEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::IoTThingsGraphErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<IoTThingsGraphClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "IoTThingsGraph"; }

      typedef IoTThingsGraphClientConfiguration ClientConfigurationType;
      typedef IoTThingsGraphEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTThingsGraphClient(const Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration& clientConfiguration = Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration(),
                             std::shared_ptr<IoTThingsGraphEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTThingsGraphClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<IoTThingsGraphEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration& clientConfiguration = Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTThingsGraphClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<IoTThingsGraphEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration& clientConfiguration = Aws::IoTThingsGraph::IoTThingsGraphClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTThingsGraphClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTThingsGraphClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTThingsGraphClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTThingsGraphClient();


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTThingsGraphEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTThingsGraphClient>;

  };

} // namespace IoTThingsGraph
} // namespace Aws
