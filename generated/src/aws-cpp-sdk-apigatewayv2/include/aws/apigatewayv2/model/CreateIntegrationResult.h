﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/ConnectionType.h>
#include <aws/apigatewayv2/model/ContentHandlingStrategy.h>
#include <aws/apigatewayv2/model/IntegrationType.h>
#include <aws/apigatewayv2/model/PassthroughBehavior.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigatewayv2/model/TlsConfig.h>
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
namespace ApiGatewayV2
{
namespace Model
{
  class CreateIntegrationResult
  {
  public:
    AWS_APIGATEWAYV2_API CreateIntegrationResult();
    AWS_APIGATEWAYV2_API CreateIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API CreateIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Specifies whether an integration is managed by API Gateway. If you created an
     * API using using quick create, the resulting integration is managed by API
     * Gateway. You can update a managed integration, but you can't delete it.</p>
     */
    inline bool GetApiGatewayManaged() const{ return m_apiGatewayManaged; }
    inline void SetApiGatewayManaged(bool value) { m_apiGatewayManaged = value; }
    inline CreateIntegrationResult& WithApiGatewayManaged(bool value) { SetApiGatewayManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC link for a private integration. Supported only for HTTP
     * APIs.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }
    inline CreateIntegrationResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline CreateIntegrationResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the network connection to the integration endpoint. Specify
     * INTERNET for connections through the public routable internet or VPC_LINK for
     * private connections between API Gateway and resources in a VPC. The default
     * value is INTERNET.</p>
     */
    inline const ConnectionType& GetConnectionType() const{ return m_connectionType; }
    inline void SetConnectionType(const ConnectionType& value) { m_connectionType = value; }
    inline void SetConnectionType(ConnectionType&& value) { m_connectionType = std::move(value); }
    inline CreateIntegrationResult& WithConnectionType(const ConnectionType& value) { SetConnectionType(value); return *this;}
    inline CreateIntegrationResult& WithConnectionType(ConnectionType&& value) { SetConnectionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supported only for WebSocket APIs. Specifies how to handle response payload
     * content type conversions. Supported values are CONVERT_TO_BINARY and
     * CONVERT_TO_TEXT, with the following behaviors:</p> <p>CONVERT_TO_BINARY:
     * Converts a response payload from a Base64-encoded string to the corresponding
     * binary blob.</p> <p>CONVERT_TO_TEXT: Converts a response payload from a binary
     * blob to a Base64-encoded string.</p> <p>If this property is not defined, the
     * response payload will be passed through from the integration response to the
     * route response or method response without modification.</p>
     */
    inline const ContentHandlingStrategy& GetContentHandlingStrategy() const{ return m_contentHandlingStrategy; }
    inline void SetContentHandlingStrategy(const ContentHandlingStrategy& value) { m_contentHandlingStrategy = value; }
    inline void SetContentHandlingStrategy(ContentHandlingStrategy&& value) { m_contentHandlingStrategy = std::move(value); }
    inline CreateIntegrationResult& WithContentHandlingStrategy(const ContentHandlingStrategy& value) { SetContentHandlingStrategy(value); return *this;}
    inline CreateIntegrationResult& WithContentHandlingStrategy(ContentHandlingStrategy&& value) { SetContentHandlingStrategy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the credentials required for the integration, if any. For AWS
     * integrations, three options are available. To specify an IAM Role for API
     * Gateway to assume, use the role's Amazon Resource Name (ARN). To require that
     * the caller's identity be passed through from the request, specify the string
     * arn:aws:iam::*:user/ *. To use resource-based permissions on supported AWS
     * services, specify null.</p>
     */
    inline const Aws::String& GetCredentialsArn() const{ return m_credentialsArn; }
    inline void SetCredentialsArn(const Aws::String& value) { m_credentialsArn = value; }
    inline void SetCredentialsArn(Aws::String&& value) { m_credentialsArn = std::move(value); }
    inline void SetCredentialsArn(const char* value) { m_credentialsArn.assign(value); }
    inline CreateIntegrationResult& WithCredentialsArn(const Aws::String& value) { SetCredentialsArn(value); return *this;}
    inline CreateIntegrationResult& WithCredentialsArn(Aws::String&& value) { SetCredentialsArn(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithCredentialsArn(const char* value) { SetCredentialsArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the description of an integration.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline CreateIntegrationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateIntegrationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the identifier of an integration.</p>
     */
    inline const Aws::String& GetIntegrationId() const{ return m_integrationId; }
    inline void SetIntegrationId(const Aws::String& value) { m_integrationId = value; }
    inline void SetIntegrationId(Aws::String&& value) { m_integrationId = std::move(value); }
    inline void SetIntegrationId(const char* value) { m_integrationId.assign(value); }
    inline CreateIntegrationResult& WithIntegrationId(const Aws::String& value) { SetIntegrationId(value); return *this;}
    inline CreateIntegrationResult& WithIntegrationId(Aws::String&& value) { SetIntegrationId(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithIntegrationId(const char* value) { SetIntegrationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the integration's HTTP method type.</p>
     */
    inline const Aws::String& GetIntegrationMethod() const{ return m_integrationMethod; }
    inline void SetIntegrationMethod(const Aws::String& value) { m_integrationMethod = value; }
    inline void SetIntegrationMethod(Aws::String&& value) { m_integrationMethod = std::move(value); }
    inline void SetIntegrationMethod(const char* value) { m_integrationMethod.assign(value); }
    inline CreateIntegrationResult& WithIntegrationMethod(const Aws::String& value) { SetIntegrationMethod(value); return *this;}
    inline CreateIntegrationResult& WithIntegrationMethod(Aws::String&& value) { SetIntegrationMethod(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithIntegrationMethod(const char* value) { SetIntegrationMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration response selection expression for the integration. Supported
     * only for WebSocket APIs. See <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/apigateway-websocket-api-selection-expressions.html#apigateway-websocket-api-integration-response-selection-expressions">Integration
     * Response Selection Expressions</a>.</p>
     */
    inline const Aws::String& GetIntegrationResponseSelectionExpression() const{ return m_integrationResponseSelectionExpression; }
    inline void SetIntegrationResponseSelectionExpression(const Aws::String& value) { m_integrationResponseSelectionExpression = value; }
    inline void SetIntegrationResponseSelectionExpression(Aws::String&& value) { m_integrationResponseSelectionExpression = std::move(value); }
    inline void SetIntegrationResponseSelectionExpression(const char* value) { m_integrationResponseSelectionExpression.assign(value); }
    inline CreateIntegrationResult& WithIntegrationResponseSelectionExpression(const Aws::String& value) { SetIntegrationResponseSelectionExpression(value); return *this;}
    inline CreateIntegrationResult& WithIntegrationResponseSelectionExpression(Aws::String&& value) { SetIntegrationResponseSelectionExpression(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithIntegrationResponseSelectionExpression(const char* value) { SetIntegrationResponseSelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supported only for HTTP API AWS_PROXY integrations. Specifies the AWS service
     * action to invoke. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services-reference.html">Integration
     * subtype reference</a>.</p>
     */
    inline const Aws::String& GetIntegrationSubtype() const{ return m_integrationSubtype; }
    inline void SetIntegrationSubtype(const Aws::String& value) { m_integrationSubtype = value; }
    inline void SetIntegrationSubtype(Aws::String&& value) { m_integrationSubtype = std::move(value); }
    inline void SetIntegrationSubtype(const char* value) { m_integrationSubtype.assign(value); }
    inline CreateIntegrationResult& WithIntegrationSubtype(const Aws::String& value) { SetIntegrationSubtype(value); return *this;}
    inline CreateIntegrationResult& WithIntegrationSubtype(Aws::String&& value) { SetIntegrationSubtype(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithIntegrationSubtype(const char* value) { SetIntegrationSubtype(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The integration type of an integration. One of the following:</p> <p>AWS: for
     * integrating the route or method request with an AWS service action, including
     * the Lambda function-invoking action. With the Lambda function-invoking action,
     * this is referred to as the Lambda custom integration. With any other AWS service
     * action, this is known as AWS integration. Supported only for WebSocket APIs.</p>
     * <p>AWS_PROXY: for integrating the route or method request with a Lambda function
     * or other AWS service action. This integration is also referred to as a Lambda
     * proxy integration.</p> <p>HTTP: for integrating the route or method request with
     * an HTTP endpoint. This integration is also referred to as the HTTP custom
     * integration. Supported only for WebSocket APIs.</p> <p>HTTP_PROXY: for
     * integrating the route or method request with an HTTP endpoint, with the client
     * request passed through as-is. This is also referred to as HTTP proxy
     * integration.</p> <p>MOCK: for integrating the route or method request with API
     * Gateway as a "loopback" endpoint without invoking any backend. Supported only
     * for WebSocket APIs.</p>
     */
    inline const IntegrationType& GetIntegrationType() const{ return m_integrationType; }
    inline void SetIntegrationType(const IntegrationType& value) { m_integrationType = value; }
    inline void SetIntegrationType(IntegrationType&& value) { m_integrationType = std::move(value); }
    inline CreateIntegrationResult& WithIntegrationType(const IntegrationType& value) { SetIntegrationType(value); return *this;}
    inline CreateIntegrationResult& WithIntegrationType(IntegrationType&& value) { SetIntegrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a Lambda integration, specify the URI of a Lambda function.</p> <p>For an
     * HTTP integration, specify a fully-qualified URL.</p> <p>For an HTTP API private
     * integration, specify the ARN of an Application Load Balancer listener, Network
     * Load Balancer listener, or AWS Cloud Map service. If you specify the ARN of an
     * AWS Cloud Map service, API Gateway uses DiscoverInstances to identify resources.
     * You can use query parameters to target specific resources. To learn more, see <a
     * href="https://docs.aws.amazon.com/cloud-map/latest/api/API_DiscoverInstances.html">DiscoverInstances</a>.
     * For private integrations, all resources must be owned by the same AWS
     * account.</p>
     */
    inline const Aws::String& GetIntegrationUri() const{ return m_integrationUri; }
    inline void SetIntegrationUri(const Aws::String& value) { m_integrationUri = value; }
    inline void SetIntegrationUri(Aws::String&& value) { m_integrationUri = std::move(value); }
    inline void SetIntegrationUri(const char* value) { m_integrationUri.assign(value); }
    inline CreateIntegrationResult& WithIntegrationUri(const Aws::String& value) { SetIntegrationUri(value); return *this;}
    inline CreateIntegrationResult& WithIntegrationUri(Aws::String&& value) { SetIntegrationUri(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithIntegrationUri(const char* value) { SetIntegrationUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the pass-through behavior for incoming requests based on the
     * Content-Type header in the request, and the available mapping templates
     * specified as the requestTemplates property on the Integration resource. There
     * are three valid values: WHEN_NO_MATCH, WHEN_NO_TEMPLATES, and NEVER. Supported
     * only for WebSocket APIs.</p> <p>WHEN_NO_MATCH passes the request body for
     * unmapped content types through to the integration backend without
     * transformation.</p> <p>NEVER rejects unmapped content types with an HTTP 415
     * Unsupported Media Type response.</p> <p>WHEN_NO_TEMPLATES allows pass-through
     * when the integration has no content types mapped to templates. However, if there
     * is at least one content type defined, unmapped content types will be rejected
     * with the same HTTP 415 Unsupported Media Type response.</p>
     */
    inline const PassthroughBehavior& GetPassthroughBehavior() const{ return m_passthroughBehavior; }
    inline void SetPassthroughBehavior(const PassthroughBehavior& value) { m_passthroughBehavior = value; }
    inline void SetPassthroughBehavior(PassthroughBehavior&& value) { m_passthroughBehavior = std::move(value); }
    inline CreateIntegrationResult& WithPassthroughBehavior(const PassthroughBehavior& value) { SetPassthroughBehavior(value); return *this;}
    inline CreateIntegrationResult& WithPassthroughBehavior(PassthroughBehavior&& value) { SetPassthroughBehavior(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the format of the payload sent to an integration. Required for HTTP
     * APIs. Supported values for Lambda proxy integrations are 1.0 and 2.0. For all
     * other integrations, 1.0 is the only supported value. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-lambda.html">Working
     * with AWS Lambda proxy integrations for HTTP APIs</a>.</p>
     */
    inline const Aws::String& GetPayloadFormatVersion() const{ return m_payloadFormatVersion; }
    inline void SetPayloadFormatVersion(const Aws::String& value) { m_payloadFormatVersion = value; }
    inline void SetPayloadFormatVersion(Aws::String&& value) { m_payloadFormatVersion = std::move(value); }
    inline void SetPayloadFormatVersion(const char* value) { m_payloadFormatVersion.assign(value); }
    inline CreateIntegrationResult& WithPayloadFormatVersion(const Aws::String& value) { SetPayloadFormatVersion(value); return *this;}
    inline CreateIntegrationResult& WithPayloadFormatVersion(Aws::String&& value) { SetPayloadFormatVersion(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithPayloadFormatVersion(const char* value) { SetPayloadFormatVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>For WebSocket APIs, a key-value map specifying request parameters that are
     * passed from the method request to the backend. The key is an integration request
     * parameter name and the associated value is a method request parameter value or
     * static value that must be enclosed within single quotes and pre-encoded as
     * required by the backend. The method request parameter value must match the
     * pattern of
     * method.request.<replaceable>{location}</replaceable>.<replaceable>{name}</replaceable>

     * , where 
            <replaceable>{location}</replaceable>
           is
     * querystring, path, or header; and 
           
     * <replaceable>{name}</replaceable>
           must be a valid and unique method
     * request parameter name.</p> <p>For HTTP API integrations with a specified
     * integrationSubtype, request parameters are a key-value map specifying parameters
     * that are passed to AWS_PROXY integrations. You can provide static values, or map
     * request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-develop-integrations-aws-services.html">Working
     * with AWS service integrations for HTTP APIs</a>.</p> <p>For HTTP API
     * integrations, without a specified integrationSubtype request parameters are a
     * key-value map specifying how to transform HTTP requests before sending them to
     * backend integrations. The key should follow the pattern
     * &lt;action&gt;:&lt;header|querystring|path&gt;.&lt;location&gt;. The action can
     * be append, overwrite or remove. For values, you can provide static values, or
     * map request data, stage variables, or context variables that are evaluated at
     * runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestParameters() const{ return m_requestParameters; }
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParameters = value; }
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParameters = std::move(value); }
    inline CreateIntegrationResult& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}
    inline CreateIntegrationResult& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(std::move(value)); return *this;}
    inline CreateIntegrationResult& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParameters.emplace(key, value); return *this; }
    inline CreateIntegrationResult& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParameters.emplace(std::move(key), value); return *this; }
    inline CreateIntegrationResult& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParameters.emplace(key, std::move(value)); return *this; }
    inline CreateIntegrationResult& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateIntegrationResult& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParameters.emplace(key, std::move(value)); return *this; }
    inline CreateIntegrationResult& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParameters.emplace(std::move(key), value); return *this; }
    inline CreateIntegrationResult& AddRequestParameters(const char* key, const char* value) { m_requestParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents a map of Velocity templates that are applied on the request
     * payload based on the value of the Content-Type header sent by the client. The
     * content type value is the key in this map, and the template (as a String) is the
     * value. Supported only for WebSocket APIs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestTemplates() const{ return m_requestTemplates; }
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplates = value; }
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplates = std::move(value); }
    inline CreateIntegrationResult& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}
    inline CreateIntegrationResult& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(std::move(value)); return *this;}
    inline CreateIntegrationResult& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplates.emplace(key, value); return *this; }
    inline CreateIntegrationResult& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplates.emplace(std::move(key), value); return *this; }
    inline CreateIntegrationResult& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplates.emplace(key, std::move(value)); return *this; }
    inline CreateIntegrationResult& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplates.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateIntegrationResult& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplates.emplace(key, std::move(value)); return *this; }
    inline CreateIntegrationResult& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplates.emplace(std::move(key), value); return *this; }
    inline CreateIntegrationResult& AddRequestTemplates(const char* key, const char* value) { m_requestTemplates.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Supported only for HTTP APIs. You use response parameters to transform the
     * HTTP response from a backend integration before returning the response to
     * clients. Specify a key-value map from a selection key to response parameters.
     * The selection key must be a valid HTTP status code within the range of 200-599.
     * Response parameters are a key-value map. The key must match pattern
     * &lt;action&gt;:&lt;header&gt;.&lt;location&gt; or overwrite.statuscode. The
     * action can be append, overwrite or remove. The value can be a static value, or
     * map to response data, stage variables, or context variables that are evaluated
     * at runtime. To learn more, see <a
     * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/http-api-parameter-mapping.html">Transforming
     * API requests and responses</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetResponseParameters() const{ return m_responseParameters; }
    inline void SetResponseParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_responseParameters = value; }
    inline void SetResponseParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_responseParameters = std::move(value); }
    inline CreateIntegrationResult& WithResponseParameters(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetResponseParameters(value); return *this;}
    inline CreateIntegrationResult& WithResponseParameters(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetResponseParameters(std::move(value)); return *this;}
    inline CreateIntegrationResult& AddResponseParameters(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_responseParameters.emplace(key, value); return *this; }
    inline CreateIntegrationResult& AddResponseParameters(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_responseParameters.emplace(std::move(key), value); return *this; }
    inline CreateIntegrationResult& AddResponseParameters(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline CreateIntegrationResult& AddResponseParameters(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateIntegrationResult& AddResponseParameters(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline CreateIntegrationResult& AddResponseParameters(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_responseParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The template selection expression for the integration. Supported only for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetTemplateSelectionExpression() const{ return m_templateSelectionExpression; }
    inline void SetTemplateSelectionExpression(const Aws::String& value) { m_templateSelectionExpression = value; }
    inline void SetTemplateSelectionExpression(Aws::String&& value) { m_templateSelectionExpression = std::move(value); }
    inline void SetTemplateSelectionExpression(const char* value) { m_templateSelectionExpression.assign(value); }
    inline CreateIntegrationResult& WithTemplateSelectionExpression(const Aws::String& value) { SetTemplateSelectionExpression(value); return *this;}
    inline CreateIntegrationResult& WithTemplateSelectionExpression(Aws::String&& value) { SetTemplateSelectionExpression(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithTemplateSelectionExpression(const char* value) { SetTemplateSelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom timeout between 50 and 29,000 milliseconds for WebSocket APIs and
     * between 50 and 30,000 milliseconds for HTTP APIs. The default timeout is 29
     * seconds for WebSocket APIs and 30 seconds for HTTP APIs.</p>
     */
    inline int GetTimeoutInMillis() const{ return m_timeoutInMillis; }
    inline void SetTimeoutInMillis(int value) { m_timeoutInMillis = value; }
    inline CreateIntegrationResult& WithTimeoutInMillis(int value) { SetTimeoutInMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TLS configuration for a private integration. If you specify a TLS
     * configuration, private integration traffic uses the HTTPS protocol. Supported
     * only for HTTP APIs.</p>
     */
    inline const TlsConfig& GetTlsConfig() const{ return m_tlsConfig; }
    inline void SetTlsConfig(const TlsConfig& value) { m_tlsConfig = value; }
    inline void SetTlsConfig(TlsConfig&& value) { m_tlsConfig = std::move(value); }
    inline CreateIntegrationResult& WithTlsConfig(const TlsConfig& value) { SetTlsConfig(value); return *this;}
    inline CreateIntegrationResult& WithTlsConfig(TlsConfig&& value) { SetTlsConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateIntegrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateIntegrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateIntegrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_apiGatewayManaged;

    Aws::String m_connectionId;

    ConnectionType m_connectionType;

    ContentHandlingStrategy m_contentHandlingStrategy;

    Aws::String m_credentialsArn;

    Aws::String m_description;

    Aws::String m_integrationId;

    Aws::String m_integrationMethod;

    Aws::String m_integrationResponseSelectionExpression;

    Aws::String m_integrationSubtype;

    IntegrationType m_integrationType;

    Aws::String m_integrationUri;

    PassthroughBehavior m_passthroughBehavior;

    Aws::String m_payloadFormatVersion;

    Aws::Map<Aws::String, Aws::String> m_requestParameters;

    Aws::Map<Aws::String, Aws::String> m_requestTemplates;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_responseParameters;

    Aws::String m_templateSelectionExpression;

    int m_timeoutInMillis;

    TlsConfig m_tlsConfig;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
