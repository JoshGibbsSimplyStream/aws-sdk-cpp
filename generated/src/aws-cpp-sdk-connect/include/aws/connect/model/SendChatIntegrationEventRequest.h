﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/ChatEvent.h>
#include <aws/connect/model/NewSessionDetails.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class SendChatIntegrationEventRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API SendChatIntegrationEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendChatIntegrationEvent"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>External identifier of chat customer participant, used in part to uniquely
     * identify a chat. For SMS, this is the E164 phone number of the chat customer
     * participant.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }
    inline SendChatIntegrationEventRequest& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline SendChatIntegrationEventRequest& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline SendChatIntegrationEventRequest& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Chat system identifier, used in part to uniquely identify chat. This is
     * associated with the Amazon Connect instance and flow to be used to start chats.
     * For Server Migration Service, this is the phone number destination of inbound
     * Server Migration Service messages represented by an Amazon Web Services End User
     * Messaging phone number ARN.</p>
     */
    inline const Aws::String& GetDestinationId() const{ return m_destinationId; }
    inline bool DestinationIdHasBeenSet() const { return m_destinationIdHasBeenSet; }
    inline void SetDestinationId(const Aws::String& value) { m_destinationIdHasBeenSet = true; m_destinationId = value; }
    inline void SetDestinationId(Aws::String&& value) { m_destinationIdHasBeenSet = true; m_destinationId = std::move(value); }
    inline void SetDestinationId(const char* value) { m_destinationIdHasBeenSet = true; m_destinationId.assign(value); }
    inline SendChatIntegrationEventRequest& WithDestinationId(const Aws::String& value) { SetDestinationId(value); return *this;}
    inline SendChatIntegrationEventRequest& WithDestinationId(Aws::String&& value) { SetDestinationId(std::move(value)); return *this;}
    inline SendChatIntegrationEventRequest& WithDestinationId(const char* value) { SetDestinationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Classification of a channel. This is used in part to uniquely identify chat.
     * </p> <p>Valid value: <code>["connect:sms", connect:"WhatsApp"]</code> </p>
     */
    inline const Aws::String& GetSubtype() const{ return m_subtype; }
    inline bool SubtypeHasBeenSet() const { return m_subtypeHasBeenSet; }
    inline void SetSubtype(const Aws::String& value) { m_subtypeHasBeenSet = true; m_subtype = value; }
    inline void SetSubtype(Aws::String&& value) { m_subtypeHasBeenSet = true; m_subtype = std::move(value); }
    inline void SetSubtype(const char* value) { m_subtypeHasBeenSet = true; m_subtype.assign(value); }
    inline SendChatIntegrationEventRequest& WithSubtype(const Aws::String& value) { SetSubtype(value); return *this;}
    inline SendChatIntegrationEventRequest& WithSubtype(Aws::String&& value) { SetSubtype(std::move(value)); return *this;}
    inline SendChatIntegrationEventRequest& WithSubtype(const char* value) { SetSubtype(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Chat integration event payload</p>
     */
    inline const ChatEvent& GetEvent() const{ return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(const ChatEvent& value) { m_eventHasBeenSet = true; m_event = value; }
    inline void SetEvent(ChatEvent&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }
    inline SendChatIntegrationEventRequest& WithEvent(const ChatEvent& value) { SetEvent(value); return *this;}
    inline SendChatIntegrationEventRequest& WithEvent(ChatEvent&& value) { SetEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contact properties to apply when starting a new chat. If the integration
     * event is handled with an existing chat, this is ignored.</p>
     */
    inline const NewSessionDetails& GetNewSessionDetails() const{ return m_newSessionDetails; }
    inline bool NewSessionDetailsHasBeenSet() const { return m_newSessionDetailsHasBeenSet; }
    inline void SetNewSessionDetails(const NewSessionDetails& value) { m_newSessionDetailsHasBeenSet = true; m_newSessionDetails = value; }
    inline void SetNewSessionDetails(NewSessionDetails&& value) { m_newSessionDetailsHasBeenSet = true; m_newSessionDetails = std::move(value); }
    inline SendChatIntegrationEventRequest& WithNewSessionDetails(const NewSessionDetails& value) { SetNewSessionDetails(value); return *this;}
    inline SendChatIntegrationEventRequest& WithNewSessionDetails(NewSessionDetails&& value) { SetNewSessionDetails(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::String m_destinationId;
    bool m_destinationIdHasBeenSet = false;

    Aws::String m_subtype;
    bool m_subtypeHasBeenSet = false;

    ChatEvent m_event;
    bool m_eventHasBeenSet = false;

    NewSessionDetails m_newSessionDetails;
    bool m_newSessionDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
