package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialNotificationsImplNotificationsRouterProperties._

case class ComAdobeCqSocialNotificationsImplNotificationsRouterProperties (
  eventTopics: Option[ConfigNodePropertyString],
eventFilter: Option[ConfigNodePropertyString])

object ComAdobeCqSocialNotificationsImplNotificationsRouterProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialNotificationsImplNotificationsRouterPropertiesCodecJson: CodecJson[ComAdobeCqSocialNotificationsImplNotificationsRouterProperties] = CodecJson.derive[ComAdobeCqSocialNotificationsImplNotificationsRouterProperties]
  implicit val ComAdobeCqSocialNotificationsImplNotificationsRouterPropertiesDecoder: EntityDecoder[ComAdobeCqSocialNotificationsImplNotificationsRouterProperties] = jsonOf[ComAdobeCqSocialNotificationsImplNotificationsRouterProperties]
  implicit val ComAdobeCqSocialNotificationsImplNotificationsRouterPropertiesEncoder: EntityEncoder[ComAdobeCqSocialNotificationsImplNotificationsRouterProperties] = jsonEncoderOf[ComAdobeCqSocialNotificationsImplNotificationsRouterProperties]
}