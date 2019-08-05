package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties._

case class ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties (
  fieldWhitelist: Option[ConfigNodePropertyArray])

object ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouPropertiesCodecJson: CodecJson[ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties] = CodecJson.derive[ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties]
  implicit val ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouPropertiesDecoder: EntityDecoder[ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties] = jsonOf[ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties]
  implicit val ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouPropertiesEncoder: EntityEncoder[ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties] = jsonEncoderOf[ComAdobeCqSocialEnablementResourceEndpointsImplEnablementResouProperties]
}