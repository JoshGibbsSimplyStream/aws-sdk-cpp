﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/S3TablesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace S3Tables
{
namespace Model
{

  /**
   */
  class RenameTableRequest : public S3TablesRequest
  {
  public:
    AWS_S3TABLES_API RenameTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RenameTable"; }

    AWS_S3TABLES_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the table bucket. </p>
     */
    inline const Aws::String& GetTableBucketARN() const{ return m_tableBucketARN; }
    inline bool TableBucketARNHasBeenSet() const { return m_tableBucketARNHasBeenSet; }
    inline void SetTableBucketARN(const Aws::String& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = value; }
    inline void SetTableBucketARN(Aws::String&& value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN = std::move(value); }
    inline void SetTableBucketARN(const char* value) { m_tableBucketARNHasBeenSet = true; m_tableBucketARN.assign(value); }
    inline RenameTableRequest& WithTableBucketARN(const Aws::String& value) { SetTableBucketARN(value); return *this;}
    inline RenameTableRequest& WithTableBucketARN(Aws::String&& value) { SetTableBucketARN(std::move(value)); return *this;}
    inline RenameTableRequest& WithTableBucketARN(const char* value) { SetTableBucketARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace associated with the table. </p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }
    inline RenameTableRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}
    inline RenameTableRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}
    inline RenameTableRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current name of the table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RenameTableRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RenameTableRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RenameTableRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the namespace.</p>
     */
    inline const Aws::String& GetNewNamespaceName() const{ return m_newNamespaceName; }
    inline bool NewNamespaceNameHasBeenSet() const { return m_newNamespaceNameHasBeenSet; }
    inline void SetNewNamespaceName(const Aws::String& value) { m_newNamespaceNameHasBeenSet = true; m_newNamespaceName = value; }
    inline void SetNewNamespaceName(Aws::String&& value) { m_newNamespaceNameHasBeenSet = true; m_newNamespaceName = std::move(value); }
    inline void SetNewNamespaceName(const char* value) { m_newNamespaceNameHasBeenSet = true; m_newNamespaceName.assign(value); }
    inline RenameTableRequest& WithNewNamespaceName(const Aws::String& value) { SetNewNamespaceName(value); return *this;}
    inline RenameTableRequest& WithNewNamespaceName(Aws::String&& value) { SetNewNamespaceName(std::move(value)); return *this;}
    inline RenameTableRequest& WithNewNamespaceName(const char* value) { SetNewNamespaceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the table.</p>
     */
    inline const Aws::String& GetNewName() const{ return m_newName; }
    inline bool NewNameHasBeenSet() const { return m_newNameHasBeenSet; }
    inline void SetNewName(const Aws::String& value) { m_newNameHasBeenSet = true; m_newName = value; }
    inline void SetNewName(Aws::String&& value) { m_newNameHasBeenSet = true; m_newName = std::move(value); }
    inline void SetNewName(const char* value) { m_newNameHasBeenSet = true; m_newName.assign(value); }
    inline RenameTableRequest& WithNewName(const Aws::String& value) { SetNewName(value); return *this;}
    inline RenameTableRequest& WithNewName(Aws::String&& value) { SetNewName(std::move(value)); return *this;}
    inline RenameTableRequest& WithNewName(const char* value) { SetNewName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version token of the table.</p>
     */
    inline const Aws::String& GetVersionToken() const{ return m_versionToken; }
    inline bool VersionTokenHasBeenSet() const { return m_versionTokenHasBeenSet; }
    inline void SetVersionToken(const Aws::String& value) { m_versionTokenHasBeenSet = true; m_versionToken = value; }
    inline void SetVersionToken(Aws::String&& value) { m_versionTokenHasBeenSet = true; m_versionToken = std::move(value); }
    inline void SetVersionToken(const char* value) { m_versionTokenHasBeenSet = true; m_versionToken.assign(value); }
    inline RenameTableRequest& WithVersionToken(const Aws::String& value) { SetVersionToken(value); return *this;}
    inline RenameTableRequest& WithVersionToken(Aws::String&& value) { SetVersionToken(std::move(value)); return *this;}
    inline RenameTableRequest& WithVersionToken(const char* value) { SetVersionToken(value); return *this;}
    ///@}
  private:

    Aws::String m_tableBucketARN;
    bool m_tableBucketARNHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_newNamespaceName;
    bool m_newNamespaceNameHasBeenSet = false;

    Aws::String m_newName;
    bool m_newNameHasBeenSet = false;

    Aws::String m_versionToken;
    bool m_versionTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
