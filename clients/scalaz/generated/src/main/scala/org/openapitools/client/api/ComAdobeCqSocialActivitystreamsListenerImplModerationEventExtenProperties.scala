package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties._

case class ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties (
  accepted: Option[ConfigNodePropertyBoolean],
ranked: Option[ConfigNodePropertyInteger])

object ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenPropertiesCodecJson: CodecJson[ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties] = CodecJson.derive[ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties]
  implicit val ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenPropertiesDecoder: EntityDecoder[ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties] = jsonOf[ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties]
  implicit val ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenPropertiesEncoder: EntityEncoder[ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties] = jsonEncoderOf[ComAdobeCqSocialActivitystreamsListenerImplModerationEventExtenProperties]
}
