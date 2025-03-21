﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/SharingSettings.h>
#include <aws/sagemaker/model/JupyterServerAppSettings.h>
#include <aws/sagemaker/model/KernelGatewayAppSettings.h>
#include <aws/sagemaker/model/TensorBoardAppSettings.h>
#include <aws/sagemaker/model/RStudioServerProAppSettings.h>
#include <aws/sagemaker/model/RSessionAppSettings.h>
#include <aws/sagemaker/model/CanvasAppSettings.h>
#include <aws/sagemaker/model/CodeEditorAppSettings.h>
#include <aws/sagemaker/model/JupyterLabAppSettings.h>
#include <aws/sagemaker/model/DefaultSpaceStorageSettings.h>
#include <aws/sagemaker/model/StudioWebPortal.h>
#include <aws/sagemaker/model/CustomPosixUserConfig.h>
#include <aws/sagemaker/model/StudioWebPortalSettings.h>
#include <aws/sagemaker/model/AutoMountHomeEFS.h>
#include <aws/sagemaker/model/CustomFileSystemConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A collection of settings that apply to users in a domain. These settings are
   * specified when the <code>CreateUserProfile</code> API is called, and as
   * <code>DefaultUserSettings</code> when the <code>CreateDomain</code> API is
   * called.</p> <p> <code>SecurityGroups</code> is aggregated when specified in both
   * calls. For all other settings in <code>UserSettings</code>, the values specified
   * in <code>CreateUserProfile</code> take precedence over those specified in
   * <code>CreateDomain</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/UserSettings">AWS
   * API Reference</a></p>
   */
  class UserSettings
  {
  public:
    AWS_SAGEMAKER_API UserSettings();
    AWS_SAGEMAKER_API UserSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API UserSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The execution role for the user.</p> <p>SageMaker applies this setting only
     * to private spaces that the user creates in the domain. SageMaker doesn't apply
     * this setting to shared spaces.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline UserSettings& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline UserSettings& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline UserSettings& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups for the Amazon Virtual Private Cloud (VPC) that the
     * domain uses for communication.</p> <p>Optional when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>PublicInternetOnly</code>.</p> <p>Required when the
     * <code>CreateDomain.AppNetworkAccessType</code> parameter is set to
     * <code>VpcOnly</code>, unless specified as part of the
     * <code>DefaultUserSettings</code> for the domain.</p> <p>Amazon SageMaker AI adds
     * a security group to allow NFS traffic from Amazon SageMaker AI Studio.
     * Therefore, the number of security groups that you can specify is one less than
     * the maximum number shown.</p> <p>SageMaker applies these settings only to
     * private spaces that the user creates in the domain. SageMaker doesn't apply
     * these settings to shared spaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline UserSettings& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline UserSettings& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline UserSettings& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline UserSettings& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline UserSettings& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies options for sharing Amazon SageMaker AI Studio notebooks.</p>
     */
    inline const SharingSettings& GetSharingSettings() const{ return m_sharingSettings; }
    inline bool SharingSettingsHasBeenSet() const { return m_sharingSettingsHasBeenSet; }
    inline void SetSharingSettings(const SharingSettings& value) { m_sharingSettingsHasBeenSet = true; m_sharingSettings = value; }
    inline void SetSharingSettings(SharingSettings&& value) { m_sharingSettingsHasBeenSet = true; m_sharingSettings = std::move(value); }
    inline UserSettings& WithSharingSettings(const SharingSettings& value) { SetSharingSettings(value); return *this;}
    inline UserSettings& WithSharingSettings(SharingSettings&& value) { SetSharingSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Jupyter server's app settings.</p>
     */
    inline const JupyterServerAppSettings& GetJupyterServerAppSettings() const{ return m_jupyterServerAppSettings; }
    inline bool JupyterServerAppSettingsHasBeenSet() const { return m_jupyterServerAppSettingsHasBeenSet; }
    inline void SetJupyterServerAppSettings(const JupyterServerAppSettings& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = value; }
    inline void SetJupyterServerAppSettings(JupyterServerAppSettings&& value) { m_jupyterServerAppSettingsHasBeenSet = true; m_jupyterServerAppSettings = std::move(value); }
    inline UserSettings& WithJupyterServerAppSettings(const JupyterServerAppSettings& value) { SetJupyterServerAppSettings(value); return *this;}
    inline UserSettings& WithJupyterServerAppSettings(JupyterServerAppSettings&& value) { SetJupyterServerAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The kernel gateway app settings.</p>
     */
    inline const KernelGatewayAppSettings& GetKernelGatewayAppSettings() const{ return m_kernelGatewayAppSettings; }
    inline bool KernelGatewayAppSettingsHasBeenSet() const { return m_kernelGatewayAppSettingsHasBeenSet; }
    inline void SetKernelGatewayAppSettings(const KernelGatewayAppSettings& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = value; }
    inline void SetKernelGatewayAppSettings(KernelGatewayAppSettings&& value) { m_kernelGatewayAppSettingsHasBeenSet = true; m_kernelGatewayAppSettings = std::move(value); }
    inline UserSettings& WithKernelGatewayAppSettings(const KernelGatewayAppSettings& value) { SetKernelGatewayAppSettings(value); return *this;}
    inline UserSettings& WithKernelGatewayAppSettings(KernelGatewayAppSettings&& value) { SetKernelGatewayAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TensorBoard app settings.</p>
     */
    inline const TensorBoardAppSettings& GetTensorBoardAppSettings() const{ return m_tensorBoardAppSettings; }
    inline bool TensorBoardAppSettingsHasBeenSet() const { return m_tensorBoardAppSettingsHasBeenSet; }
    inline void SetTensorBoardAppSettings(const TensorBoardAppSettings& value) { m_tensorBoardAppSettingsHasBeenSet = true; m_tensorBoardAppSettings = value; }
    inline void SetTensorBoardAppSettings(TensorBoardAppSettings&& value) { m_tensorBoardAppSettingsHasBeenSet = true; m_tensorBoardAppSettings = std::move(value); }
    inline UserSettings& WithTensorBoardAppSettings(const TensorBoardAppSettings& value) { SetTensorBoardAppSettings(value); return *this;}
    inline UserSettings& WithTensorBoardAppSettings(TensorBoardAppSettings&& value) { SetTensorBoardAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure user interaction with the
     * <code>RStudioServerPro</code> app.</p>
     */
    inline const RStudioServerProAppSettings& GetRStudioServerProAppSettings() const{ return m_rStudioServerProAppSettings; }
    inline bool RStudioServerProAppSettingsHasBeenSet() const { return m_rStudioServerProAppSettingsHasBeenSet; }
    inline void SetRStudioServerProAppSettings(const RStudioServerProAppSettings& value) { m_rStudioServerProAppSettingsHasBeenSet = true; m_rStudioServerProAppSettings = value; }
    inline void SetRStudioServerProAppSettings(RStudioServerProAppSettings&& value) { m_rStudioServerProAppSettingsHasBeenSet = true; m_rStudioServerProAppSettings = std::move(value); }
    inline UserSettings& WithRStudioServerProAppSettings(const RStudioServerProAppSettings& value) { SetRStudioServerProAppSettings(value); return *this;}
    inline UserSettings& WithRStudioServerProAppSettings(RStudioServerProAppSettings&& value) { SetRStudioServerProAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of settings that configure the <code>RSessionGateway</code>
     * app.</p>
     */
    inline const RSessionAppSettings& GetRSessionAppSettings() const{ return m_rSessionAppSettings; }
    inline bool RSessionAppSettingsHasBeenSet() const { return m_rSessionAppSettingsHasBeenSet; }
    inline void SetRSessionAppSettings(const RSessionAppSettings& value) { m_rSessionAppSettingsHasBeenSet = true; m_rSessionAppSettings = value; }
    inline void SetRSessionAppSettings(RSessionAppSettings&& value) { m_rSessionAppSettingsHasBeenSet = true; m_rSessionAppSettings = std::move(value); }
    inline UserSettings& WithRSessionAppSettings(const RSessionAppSettings& value) { SetRSessionAppSettings(value); return *this;}
    inline UserSettings& WithRSessionAppSettings(RSessionAppSettings&& value) { SetRSessionAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Canvas app settings.</p> <p>SageMaker applies these settings only to
     * private spaces that SageMaker creates for the Canvas app.</p>
     */
    inline const CanvasAppSettings& GetCanvasAppSettings() const{ return m_canvasAppSettings; }
    inline bool CanvasAppSettingsHasBeenSet() const { return m_canvasAppSettingsHasBeenSet; }
    inline void SetCanvasAppSettings(const CanvasAppSettings& value) { m_canvasAppSettingsHasBeenSet = true; m_canvasAppSettings = value; }
    inline void SetCanvasAppSettings(CanvasAppSettings&& value) { m_canvasAppSettingsHasBeenSet = true; m_canvasAppSettings = std::move(value); }
    inline UserSettings& WithCanvasAppSettings(const CanvasAppSettings& value) { SetCanvasAppSettings(value); return *this;}
    inline UserSettings& WithCanvasAppSettings(CanvasAppSettings&& value) { SetCanvasAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Code Editor application settings.</p> <p>SageMaker applies these settings
     * only to private spaces that the user creates in the domain. SageMaker doesn't
     * apply these settings to shared spaces.</p>
     */
    inline const CodeEditorAppSettings& GetCodeEditorAppSettings() const{ return m_codeEditorAppSettings; }
    inline bool CodeEditorAppSettingsHasBeenSet() const { return m_codeEditorAppSettingsHasBeenSet; }
    inline void SetCodeEditorAppSettings(const CodeEditorAppSettings& value) { m_codeEditorAppSettingsHasBeenSet = true; m_codeEditorAppSettings = value; }
    inline void SetCodeEditorAppSettings(CodeEditorAppSettings&& value) { m_codeEditorAppSettingsHasBeenSet = true; m_codeEditorAppSettings = std::move(value); }
    inline UserSettings& WithCodeEditorAppSettings(const CodeEditorAppSettings& value) { SetCodeEditorAppSettings(value); return *this;}
    inline UserSettings& WithCodeEditorAppSettings(CodeEditorAppSettings&& value) { SetCodeEditorAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for the JupyterLab application.</p> <p>SageMaker applies these
     * settings only to private spaces that the user creates in the domain. SageMaker
     * doesn't apply these settings to shared spaces.</p>
     */
    inline const JupyterLabAppSettings& GetJupyterLabAppSettings() const{ return m_jupyterLabAppSettings; }
    inline bool JupyterLabAppSettingsHasBeenSet() const { return m_jupyterLabAppSettingsHasBeenSet; }
    inline void SetJupyterLabAppSettings(const JupyterLabAppSettings& value) { m_jupyterLabAppSettingsHasBeenSet = true; m_jupyterLabAppSettings = value; }
    inline void SetJupyterLabAppSettings(JupyterLabAppSettings&& value) { m_jupyterLabAppSettingsHasBeenSet = true; m_jupyterLabAppSettings = std::move(value); }
    inline UserSettings& WithJupyterLabAppSettings(const JupyterLabAppSettings& value) { SetJupyterLabAppSettings(value); return *this;}
    inline UserSettings& WithJupyterLabAppSettings(JupyterLabAppSettings&& value) { SetJupyterLabAppSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage settings for a space.</p> <p>SageMaker applies these settings
     * only to private spaces that the user creates in the domain. SageMaker doesn't
     * apply these settings to shared spaces.</p>
     */
    inline const DefaultSpaceStorageSettings& GetSpaceStorageSettings() const{ return m_spaceStorageSettings; }
    inline bool SpaceStorageSettingsHasBeenSet() const { return m_spaceStorageSettingsHasBeenSet; }
    inline void SetSpaceStorageSettings(const DefaultSpaceStorageSettings& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = value; }
    inline void SetSpaceStorageSettings(DefaultSpaceStorageSettings&& value) { m_spaceStorageSettingsHasBeenSet = true; m_spaceStorageSettings = std::move(value); }
    inline UserSettings& WithSpaceStorageSettings(const DefaultSpaceStorageSettings& value) { SetSpaceStorageSettings(value); return *this;}
    inline UserSettings& WithSpaceStorageSettings(DefaultSpaceStorageSettings&& value) { SetSpaceStorageSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default experience that the user is directed to when accessing the
     * domain. The supported values are:</p> <ul> <li> <p> <code>studio::</code>:
     * Indicates that Studio is the default experience. This value can only be passed
     * if <code>StudioWebPortal</code> is set to <code>ENABLED</code>.</p> </li> <li>
     * <p> <code>app:JupyterServer:</code>: Indicates that Studio Classic is the
     * default experience.</p> </li> </ul>
     */
    inline const Aws::String& GetDefaultLandingUri() const{ return m_defaultLandingUri; }
    inline bool DefaultLandingUriHasBeenSet() const { return m_defaultLandingUriHasBeenSet; }
    inline void SetDefaultLandingUri(const Aws::String& value) { m_defaultLandingUriHasBeenSet = true; m_defaultLandingUri = value; }
    inline void SetDefaultLandingUri(Aws::String&& value) { m_defaultLandingUriHasBeenSet = true; m_defaultLandingUri = std::move(value); }
    inline void SetDefaultLandingUri(const char* value) { m_defaultLandingUriHasBeenSet = true; m_defaultLandingUri.assign(value); }
    inline UserSettings& WithDefaultLandingUri(const Aws::String& value) { SetDefaultLandingUri(value); return *this;}
    inline UserSettings& WithDefaultLandingUri(Aws::String&& value) { SetDefaultLandingUri(std::move(value)); return *this;}
    inline UserSettings& WithDefaultLandingUri(const char* value) { SetDefaultLandingUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the user can access Studio. If this value is set to
     * <code>DISABLED</code>, the user cannot access Studio, even if that is the
     * default experience for the domain.</p>
     */
    inline const StudioWebPortal& GetStudioWebPortal() const{ return m_studioWebPortal; }
    inline bool StudioWebPortalHasBeenSet() const { return m_studioWebPortalHasBeenSet; }
    inline void SetStudioWebPortal(const StudioWebPortal& value) { m_studioWebPortalHasBeenSet = true; m_studioWebPortal = value; }
    inline void SetStudioWebPortal(StudioWebPortal&& value) { m_studioWebPortalHasBeenSet = true; m_studioWebPortal = std::move(value); }
    inline UserSettings& WithStudioWebPortal(const StudioWebPortal& value) { SetStudioWebPortal(value); return *this;}
    inline UserSettings& WithStudioWebPortal(StudioWebPortal&& value) { SetStudioWebPortal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the POSIX identity that is used for file system operations.</p>
     * <p>SageMaker applies these settings only to private spaces that the user creates
     * in the domain. SageMaker doesn't apply these settings to shared spaces.</p>
     */
    inline const CustomPosixUserConfig& GetCustomPosixUserConfig() const{ return m_customPosixUserConfig; }
    inline bool CustomPosixUserConfigHasBeenSet() const { return m_customPosixUserConfigHasBeenSet; }
    inline void SetCustomPosixUserConfig(const CustomPosixUserConfig& value) { m_customPosixUserConfigHasBeenSet = true; m_customPosixUserConfig = value; }
    inline void SetCustomPosixUserConfig(CustomPosixUserConfig&& value) { m_customPosixUserConfigHasBeenSet = true; m_customPosixUserConfig = std::move(value); }
    inline UserSettings& WithCustomPosixUserConfig(const CustomPosixUserConfig& value) { SetCustomPosixUserConfig(value); return *this;}
    inline UserSettings& WithCustomPosixUserConfig(CustomPosixUserConfig&& value) { SetCustomPosixUserConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The settings for assigning a custom file system to a user profile. Permitted
     * users can access this file system in Amazon SageMaker AI Studio.</p>
     * <p>SageMaker applies these settings only to private spaces that the user creates
     * in the domain. SageMaker doesn't apply these settings to shared spaces.</p>
     */
    inline const Aws::Vector<CustomFileSystemConfig>& GetCustomFileSystemConfigs() const{ return m_customFileSystemConfigs; }
    inline bool CustomFileSystemConfigsHasBeenSet() const { return m_customFileSystemConfigsHasBeenSet; }
    inline void SetCustomFileSystemConfigs(const Aws::Vector<CustomFileSystemConfig>& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs = value; }
    inline void SetCustomFileSystemConfigs(Aws::Vector<CustomFileSystemConfig>&& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs = std::move(value); }
    inline UserSettings& WithCustomFileSystemConfigs(const Aws::Vector<CustomFileSystemConfig>& value) { SetCustomFileSystemConfigs(value); return *this;}
    inline UserSettings& WithCustomFileSystemConfigs(Aws::Vector<CustomFileSystemConfig>&& value) { SetCustomFileSystemConfigs(std::move(value)); return *this;}
    inline UserSettings& AddCustomFileSystemConfigs(const CustomFileSystemConfig& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs.push_back(value); return *this; }
    inline UserSettings& AddCustomFileSystemConfigs(CustomFileSystemConfig&& value) { m_customFileSystemConfigsHasBeenSet = true; m_customFileSystemConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Studio settings. If these settings are applied on a user level, they take
     * priority over the settings applied on a domain level.</p>
     */
    inline const StudioWebPortalSettings& GetStudioWebPortalSettings() const{ return m_studioWebPortalSettings; }
    inline bool StudioWebPortalSettingsHasBeenSet() const { return m_studioWebPortalSettingsHasBeenSet; }
    inline void SetStudioWebPortalSettings(const StudioWebPortalSettings& value) { m_studioWebPortalSettingsHasBeenSet = true; m_studioWebPortalSettings = value; }
    inline void SetStudioWebPortalSettings(StudioWebPortalSettings&& value) { m_studioWebPortalSettingsHasBeenSet = true; m_studioWebPortalSettings = std::move(value); }
    inline UserSettings& WithStudioWebPortalSettings(const StudioWebPortalSettings& value) { SetStudioWebPortalSettings(value); return *this;}
    inline UserSettings& WithStudioWebPortalSettings(StudioWebPortalSettings&& value) { SetStudioWebPortalSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether auto-mounting of an EFS volume is supported for the user
     * profile. The <code>DefaultAsDomain</code> value is only supported for user
     * profiles. Do not use the <code>DefaultAsDomain</code> value when setting this
     * parameter for a domain.</p> <p>SageMaker applies this setting only to private
     * spaces that the user creates in the domain. SageMaker doesn't apply this setting
     * to shared spaces.</p>
     */
    inline const AutoMountHomeEFS& GetAutoMountHomeEFS() const{ return m_autoMountHomeEFS; }
    inline bool AutoMountHomeEFSHasBeenSet() const { return m_autoMountHomeEFSHasBeenSet; }
    inline void SetAutoMountHomeEFS(const AutoMountHomeEFS& value) { m_autoMountHomeEFSHasBeenSet = true; m_autoMountHomeEFS = value; }
    inline void SetAutoMountHomeEFS(AutoMountHomeEFS&& value) { m_autoMountHomeEFSHasBeenSet = true; m_autoMountHomeEFS = std::move(value); }
    inline UserSettings& WithAutoMountHomeEFS(const AutoMountHomeEFS& value) { SetAutoMountHomeEFS(value); return *this;}
    inline UserSettings& WithAutoMountHomeEFS(AutoMountHomeEFS&& value) { SetAutoMountHomeEFS(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    SharingSettings m_sharingSettings;
    bool m_sharingSettingsHasBeenSet = false;

    JupyterServerAppSettings m_jupyterServerAppSettings;
    bool m_jupyterServerAppSettingsHasBeenSet = false;

    KernelGatewayAppSettings m_kernelGatewayAppSettings;
    bool m_kernelGatewayAppSettingsHasBeenSet = false;

    TensorBoardAppSettings m_tensorBoardAppSettings;
    bool m_tensorBoardAppSettingsHasBeenSet = false;

    RStudioServerProAppSettings m_rStudioServerProAppSettings;
    bool m_rStudioServerProAppSettingsHasBeenSet = false;

    RSessionAppSettings m_rSessionAppSettings;
    bool m_rSessionAppSettingsHasBeenSet = false;

    CanvasAppSettings m_canvasAppSettings;
    bool m_canvasAppSettingsHasBeenSet = false;

    CodeEditorAppSettings m_codeEditorAppSettings;
    bool m_codeEditorAppSettingsHasBeenSet = false;

    JupyterLabAppSettings m_jupyterLabAppSettings;
    bool m_jupyterLabAppSettingsHasBeenSet = false;

    DefaultSpaceStorageSettings m_spaceStorageSettings;
    bool m_spaceStorageSettingsHasBeenSet = false;

    Aws::String m_defaultLandingUri;
    bool m_defaultLandingUriHasBeenSet = false;

    StudioWebPortal m_studioWebPortal;
    bool m_studioWebPortalHasBeenSet = false;

    CustomPosixUserConfig m_customPosixUserConfig;
    bool m_customPosixUserConfigHasBeenSet = false;

    Aws::Vector<CustomFileSystemConfig> m_customFileSystemConfigs;
    bool m_customFileSystemConfigsHasBeenSet = false;

    StudioWebPortalSettings m_studioWebPortalSettings;
    bool m_studioWebPortalSettingsHasBeenSet = false;

    AutoMountHomeEFS m_autoMountHomeEFS;
    bool m_autoMountHomeEFSHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
