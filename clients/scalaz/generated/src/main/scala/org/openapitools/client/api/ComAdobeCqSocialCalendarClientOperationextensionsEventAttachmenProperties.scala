package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties._

case class ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties (
  attachmentTypeBlacklist: Option[ConfigNodePropertyString],
extensionOrder: Option[ConfigNodePropertyInteger])

object ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenPropertiesCodecJson: CodecJson[ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties] = CodecJson.derive[ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties]
  implicit val ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenPropertiesDecoder: EntityDecoder[ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties] = jsonOf[ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties]
  implicit val ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenPropertiesEncoder: EntityEncoder[ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties] = jsonEncoderOf[ComAdobeCqSocialCalendarClientOperationextensionsEventAttachmenProperties]
}