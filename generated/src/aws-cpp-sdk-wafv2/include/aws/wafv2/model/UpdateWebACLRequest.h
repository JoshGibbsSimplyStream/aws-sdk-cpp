﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/WAFV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/Scope.h>
#include <aws/wafv2/model/DefaultAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/VisibilityConfig.h>
#include <aws/wafv2/model/DataProtectionConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wafv2/model/CaptchaConfig.h>
#include <aws/wafv2/model/ChallengeConfig.h>
#include <aws/wafv2/model/AssociationConfig.h>
#include <aws/wafv2/model/Rule.h>
#include <aws/wafv2/model/CustomResponseBody.h>
#include <utility>

namespace Aws
{
namespace WAFV2
{
namespace Model
{

  /**
   */
  class UpdateWebACLRequest : public WAFV2Request
  {
  public:
    AWS_WAFV2_API UpdateWebACLRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWebACL"; }

    AWS_WAFV2_API Aws::String SerializePayload() const override;

    AWS_WAFV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the web ACL. You cannot change the name of a web ACL after you
     * create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline UpdateWebACLRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline UpdateWebACLRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline UpdateWebACLRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this is for a global resource type, such as a Amazon
     * CloudFront distribution. </p> <p>To work with CloudFront, you must also specify
     * the Region US East (N. Virginia) as follows: </p> <ul> <li> <p>CLI - Specify the
     * Region when you use the CloudFront scope: <code>--scope=CLOUDFRONT
     * --region=us-east-1</code>. </p> </li> <li> <p>API and SDKs - For all calls, use
     * the Region endpoint us-east-1. </p> </li> </ul>
     */
    inline const Scope& GetScope() const{ return m_scope; }
    inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
    inline void SetScope(const Scope& value) { m_scopeHasBeenSet = true; m_scope = value; }
    inline void SetScope(Scope&& value) { m_scopeHasBeenSet = true; m_scope = std::move(value); }
    inline UpdateWebACLRequest& WithScope(const Scope& value) { SetScope(value); return *this;}
    inline UpdateWebACLRequest& WithScope(Scope&& value) { SetScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the web ACL. This ID is returned in the responses
     * to create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline UpdateWebACLRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline UpdateWebACLRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline UpdateWebACLRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. </p>
     */
    inline const DefaultAction& GetDefaultAction() const{ return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    inline void SetDefaultAction(const DefaultAction& value) { m_defaultActionHasBeenSet = true; m_defaultAction = value; }
    inline void SetDefaultAction(DefaultAction&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::move(value); }
    inline UpdateWebACLRequest& WithDefaultAction(const DefaultAction& value) { SetDefaultAction(value); return *this;}
    inline UpdateWebACLRequest& WithDefaultAction(DefaultAction&& value) { SetDefaultAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the web ACL that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateWebACLRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateWebACLRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateWebACLRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a>Rule</a> statements used to identify the web requests that you want to
     * manage. Each rule includes one top-level statement that WAF uses to identify
     * matching web requests, and parameters that govern how WAF handles them. </p>
     */
    inline const Aws::Vector<Rule>& GetRules() const{ return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    inline void SetRules(const Aws::Vector<Rule>& value) { m_rulesHasBeenSet = true; m_rules = value; }
    inline void SetRules(Aws::Vector<Rule>&& value) { m_rulesHasBeenSet = true; m_rules = std::move(value); }
    inline UpdateWebACLRequest& WithRules(const Aws::Vector<Rule>& value) { SetRules(value); return *this;}
    inline UpdateWebACLRequest& WithRules(Aws::Vector<Rule>&& value) { SetRules(std::move(value)); return *this;}
    inline UpdateWebACLRequest& AddRules(const Rule& value) { m_rulesHasBeenSet = true; m_rules.push_back(value); return *this; }
    inline UpdateWebACLRequest& AddRules(Rule&& value) { m_rulesHasBeenSet = true; m_rules.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines and enables Amazon CloudWatch metrics and web request sample
     * collection. </p>
     */
    inline const VisibilityConfig& GetVisibilityConfig() const{ return m_visibilityConfig; }
    inline bool VisibilityConfigHasBeenSet() const { return m_visibilityConfigHasBeenSet; }
    inline void SetVisibilityConfig(const VisibilityConfig& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = value; }
    inline void SetVisibilityConfig(VisibilityConfig&& value) { m_visibilityConfigHasBeenSet = true; m_visibilityConfig = std::move(value); }
    inline UpdateWebACLRequest& WithVisibilityConfig(const VisibilityConfig& value) { SetVisibilityConfig(value); return *this;}
    inline UpdateWebACLRequest& WithVisibilityConfig(VisibilityConfig&& value) { SetVisibilityConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies data protection to apply to the web request data that WAF stores
     * for the web ACL. This is a web ACL level data protection option. </p> <p>The
     * data protection that you configure for the web ACL alters the data that's
     * available for any other data collection activity, including WAF logging, web ACL
     * request sampling, Amazon Web Services Managed Rules, and Amazon Security Lake
     * data collection and management. Your other option for data protection is in the
     * logging configuration, which only affects logging. </p>
     */
    inline const DataProtectionConfig& GetDataProtectionConfig() const{ return m_dataProtectionConfig; }
    inline bool DataProtectionConfigHasBeenSet() const { return m_dataProtectionConfigHasBeenSet; }
    inline void SetDataProtectionConfig(const DataProtectionConfig& value) { m_dataProtectionConfigHasBeenSet = true; m_dataProtectionConfig = value; }
    inline void SetDataProtectionConfig(DataProtectionConfig&& value) { m_dataProtectionConfigHasBeenSet = true; m_dataProtectionConfig = std::move(value); }
    inline UpdateWebACLRequest& WithDataProtectionConfig(const DataProtectionConfig& value) { SetDataProtectionConfig(value); return *this;}
    inline UpdateWebACLRequest& WithDataProtectionConfig(DataProtectionConfig&& value) { SetDataProtectionConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for optimistic locking. WAF returns a token to your
     * <code>get</code> and <code>list</code> requests, to mark the state of the entity
     * at the time of the request. To make changes to the entity associated with the
     * token, you provide the token to operations like <code>update</code> and
     * <code>delete</code>. WAF uses the token to ensure that no changes have been made
     * to the entity since you last retrieved it. If a change has been made, the update
     * fails with a <code>WAFOptimisticLockException</code>. If this happens, perform
     * another <code>get</code>, and use the new token returned by that operation. </p>
     */
    inline const Aws::String& GetLockToken() const{ return m_lockToken; }
    inline bool LockTokenHasBeenSet() const { return m_lockTokenHasBeenSet; }
    inline void SetLockToken(const Aws::String& value) { m_lockTokenHasBeenSet = true; m_lockToken = value; }
    inline void SetLockToken(Aws::String&& value) { m_lockTokenHasBeenSet = true; m_lockToken = std::move(value); }
    inline void SetLockToken(const char* value) { m_lockTokenHasBeenSet = true; m_lockToken.assign(value); }
    inline UpdateWebACLRequest& WithLockToken(const Aws::String& value) { SetLockToken(value); return *this;}
    inline UpdateWebACLRequest& WithLockToken(Aws::String&& value) { SetLockToken(std::move(value)); return *this;}
    inline UpdateWebACLRequest& WithLockToken(const char* value) { SetLockToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of custom response keys and content bodies. When you create a rule with
     * a block action, you can send a custom response to the web request. You define
     * these for the web ACL, and then use them in the rules and default actions that
     * you define in the web ACL. </p> <p>For information about customizing web
     * requests and responses, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-custom-request-response.html">Customizing
     * web requests and responses in WAF</a> in the <i>WAF Developer Guide</i>. </p>
     * <p>For information about the limits on count and size for custom request and
     * response settings, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/limits.html">WAF
     * quotas</a> in the <i>WAF Developer Guide</i>. </p>
     */
    inline const Aws::Map<Aws::String, CustomResponseBody>& GetCustomResponseBodies() const{ return m_customResponseBodies; }
    inline bool CustomResponseBodiesHasBeenSet() const { return m_customResponseBodiesHasBeenSet; }
    inline void SetCustomResponseBodies(const Aws::Map<Aws::String, CustomResponseBody>& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies = value; }
    inline void SetCustomResponseBodies(Aws::Map<Aws::String, CustomResponseBody>&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies = std::move(value); }
    inline UpdateWebACLRequest& WithCustomResponseBodies(const Aws::Map<Aws::String, CustomResponseBody>& value) { SetCustomResponseBodies(value); return *this;}
    inline UpdateWebACLRequest& WithCustomResponseBodies(Aws::Map<Aws::String, CustomResponseBody>&& value) { SetCustomResponseBodies(std::move(value)); return *this;}
    inline UpdateWebACLRequest& AddCustomResponseBodies(const Aws::String& key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, value); return *this; }
    inline UpdateWebACLRequest& AddCustomResponseBodies(Aws::String&& key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::move(key), value); return *this; }
    inline UpdateWebACLRequest& AddCustomResponseBodies(const Aws::String& key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, std::move(value)); return *this; }
    inline UpdateWebACLRequest& AddCustomResponseBodies(Aws::String&& key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateWebACLRequest& AddCustomResponseBodies(const char* key, CustomResponseBody&& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, std::move(value)); return *this; }
    inline UpdateWebACLRequest& AddCustomResponseBodies(const char* key, const CustomResponseBody& value) { m_customResponseBodiesHasBeenSet = true; m_customResponseBodies.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies how WAF should handle <code>CAPTCHA</code> evaluations for rules
     * that don't have their own <code>CaptchaConfig</code> settings. If you don't
     * specify this, WAF uses its default settings for <code>CaptchaConfig</code>. </p>
     */
    inline const CaptchaConfig& GetCaptchaConfig() const{ return m_captchaConfig; }
    inline bool CaptchaConfigHasBeenSet() const { return m_captchaConfigHasBeenSet; }
    inline void SetCaptchaConfig(const CaptchaConfig& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = value; }
    inline void SetCaptchaConfig(CaptchaConfig&& value) { m_captchaConfigHasBeenSet = true; m_captchaConfig = std::move(value); }
    inline UpdateWebACLRequest& WithCaptchaConfig(const CaptchaConfig& value) { SetCaptchaConfig(value); return *this;}
    inline UpdateWebACLRequest& WithCaptchaConfig(CaptchaConfig&& value) { SetCaptchaConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies how WAF should handle challenge evaluations for rules that don't
     * have their own <code>ChallengeConfig</code> settings. If you don't specify this,
     * WAF uses its default settings for <code>ChallengeConfig</code>. </p>
     */
    inline const ChallengeConfig& GetChallengeConfig() const{ return m_challengeConfig; }
    inline bool ChallengeConfigHasBeenSet() const { return m_challengeConfigHasBeenSet; }
    inline void SetChallengeConfig(const ChallengeConfig& value) { m_challengeConfigHasBeenSet = true; m_challengeConfig = value; }
    inline void SetChallengeConfig(ChallengeConfig&& value) { m_challengeConfigHasBeenSet = true; m_challengeConfig = std::move(value); }
    inline UpdateWebACLRequest& WithChallengeConfig(const ChallengeConfig& value) { SetChallengeConfig(value); return *this;}
    inline UpdateWebACLRequest& WithChallengeConfig(ChallengeConfig&& value) { SetChallengeConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the domains that WAF should accept in a web request token. This
     * enables the use of tokens across multiple protected websites. When WAF provides
     * a token, it uses the domain of the Amazon Web Services resource that the web ACL
     * is protecting. If you don't specify a list of token domains, WAF accepts tokens
     * only for the domain of the protected resource. With a token domain list, WAF
     * accepts the resource's host domain plus all domains in the token domain list,
     * including their prefixed subdomains.</p> <p>Example JSON: <code>"TokenDomains":
     * { "mywebsite.com", "myotherwebsite.com" }</code> </p> <p>Public suffixes aren't
     * allowed. For example, you can't use <code>gov.au</code> or <code>co.uk</code> as
     * token domains.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTokenDomains() const{ return m_tokenDomains; }
    inline bool TokenDomainsHasBeenSet() const { return m_tokenDomainsHasBeenSet; }
    inline void SetTokenDomains(const Aws::Vector<Aws::String>& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = value; }
    inline void SetTokenDomains(Aws::Vector<Aws::String>&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains = std::move(value); }
    inline UpdateWebACLRequest& WithTokenDomains(const Aws::Vector<Aws::String>& value) { SetTokenDomains(value); return *this;}
    inline UpdateWebACLRequest& WithTokenDomains(Aws::Vector<Aws::String>&& value) { SetTokenDomains(std::move(value)); return *this;}
    inline UpdateWebACLRequest& AddTokenDomains(const Aws::String& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(value); return *this; }
    inline UpdateWebACLRequest& AddTokenDomains(Aws::String&& value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(std::move(value)); return *this; }
    inline UpdateWebACLRequest& AddTokenDomains(const char* value) { m_tokenDomainsHasBeenSet = true; m_tokenDomains.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies custom configurations for the associations between the web ACL and
     * protected resources. </p> <p>Use this to customize the maximum size of the
     * request body that your protected resources forward to WAF for inspection. You
     * can customize this setting for CloudFront, API Gateway, Amazon Cognito, App
     * Runner, or Verified Access resources. The default setting is 16 KB (16,384
     * bytes). </p>  <p>You are charged additional fees when your protected
     * resources forward body sizes that are larger than the default. For more
     * information, see <a href="http://aws.amazon.com/waf/pricing/">WAF
     * Pricing</a>.</p>  <p>For Application Load Balancer and AppSync, the limit
     * is fixed at 8 KB (8,192 bytes).</p>
     */
    inline const AssociationConfig& GetAssociationConfig() const{ return m_associationConfig; }
    inline bool AssociationConfigHasBeenSet() const { return m_associationConfigHasBeenSet; }
    inline void SetAssociationConfig(const AssociationConfig& value) { m_associationConfigHasBeenSet = true; m_associationConfig = value; }
    inline void SetAssociationConfig(AssociationConfig&& value) { m_associationConfigHasBeenSet = true; m_associationConfig = std::move(value); }
    inline UpdateWebACLRequest& WithAssociationConfig(const AssociationConfig& value) { SetAssociationConfig(value); return *this;}
    inline UpdateWebACLRequest& WithAssociationConfig(AssociationConfig&& value) { SetAssociationConfig(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Scope m_scope;
    bool m_scopeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DefaultAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Rule> m_rules;
    bool m_rulesHasBeenSet = false;

    VisibilityConfig m_visibilityConfig;
    bool m_visibilityConfigHasBeenSet = false;

    DataProtectionConfig m_dataProtectionConfig;
    bool m_dataProtectionConfigHasBeenSet = false;

    Aws::String m_lockToken;
    bool m_lockTokenHasBeenSet = false;

    Aws::Map<Aws::String, CustomResponseBody> m_customResponseBodies;
    bool m_customResponseBodiesHasBeenSet = false;

    CaptchaConfig m_captchaConfig;
    bool m_captchaConfigHasBeenSet = false;

    ChallengeConfig m_challengeConfig;
    bool m_challengeConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_tokenDomains;
    bool m_tokenDomainsHasBeenSet = false;

    AssociationConfig m_associationConfig;
    bool m_associationConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
