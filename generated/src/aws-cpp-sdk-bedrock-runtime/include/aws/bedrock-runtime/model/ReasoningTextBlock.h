﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace BedrockRuntime
{
namespace Model
{

  /**
   * <p>Contains the reasoning that the model used to return the
   * output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-runtime-2023-09-30/ReasoningTextBlock">AWS
   * API Reference</a></p>
   */
  class ReasoningTextBlock
  {
  public:
    AWS_BEDROCKRUNTIME_API ReasoningTextBlock();
    AWS_BEDROCKRUNTIME_API ReasoningTextBlock(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API ReasoningTextBlock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The reasoning that the model used to return the output.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline ReasoningTextBlock& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline ReasoningTextBlock& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline ReasoningTextBlock& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that verifies that the reasoning text was generated by the model. If
     * you pass a reasoning block back to the API in a multi-turn conversation, include
     * the text and its signature unmodified.</p>
     */
    inline const Aws::String& GetSignature() const{ return m_signature; }
    inline bool SignatureHasBeenSet() const { return m_signatureHasBeenSet; }
    inline void SetSignature(const Aws::String& value) { m_signatureHasBeenSet = true; m_signature = value; }
    inline void SetSignature(Aws::String&& value) { m_signatureHasBeenSet = true; m_signature = std::move(value); }
    inline void SetSignature(const char* value) { m_signatureHasBeenSet = true; m_signature.assign(value); }
    inline ReasoningTextBlock& WithSignature(const Aws::String& value) { SetSignature(value); return *this;}
    inline ReasoningTextBlock& WithSignature(Aws::String&& value) { SetSignature(std::move(value)); return *this;}
    inline ReasoningTextBlock& WithSignature(const char* value) { SetSignature(value); return *this;}
    ///@}
  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_signature;
    bool m_signatureHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
