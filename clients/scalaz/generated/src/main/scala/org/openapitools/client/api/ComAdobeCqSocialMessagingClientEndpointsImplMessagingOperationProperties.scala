package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties._

case class ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties (
  messageProperties: Option[ConfigNodePropertyArray],
messageBoxSizeLimit: Option[ConfigNodePropertyInteger],
messageCountLimit: Option[ConfigNodePropertyInteger],
notifyFailure: Option[ConfigNodePropertyBoolean],
failureMessageFrom: Option[ConfigNodePropertyString],
failureTemplatePath: Option[ConfigNodePropertyString],
maxRetries: Option[ConfigNodePropertyInteger],
minWaitBetweenRetries: Option[ConfigNodePropertyInteger],
countUpdatePoolSize: Option[ConfigNodePropertyInteger],
inboxPath: Option[ConfigNodePropertyString],
sentitemsPath: Option[ConfigNodePropertyString],
supportAttachments: Option[ConfigNodePropertyBoolean],
supportGroupMessaging: Option[ConfigNodePropertyBoolean],
maxTotalRecipients: Option[ConfigNodePropertyInteger],
batchSize: Option[ConfigNodePropertyInteger],
maxTotalAttachmentSize: Option[ConfigNodePropertyInteger],
attachmentTypeBlacklist: Option[ConfigNodePropertyArray],
allowedAttachmentTypes: Option[ConfigNodePropertyArray],
serviceSelector: Option[ConfigNodePropertyString],
fieldWhitelist: Option[ConfigNodePropertyArray])

object ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesCodecJson: CodecJson[ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties] = CodecJson.derive[ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties]
  implicit val ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesDecoder: EntityDecoder[ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties] = jsonOf[ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties]
  implicit val ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationPropertiesEncoder: EntityEncoder[ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties] = jsonEncoderOf[ComAdobeCqSocialMessagingClientEndpointsImplMessagingOperationProperties]
}
