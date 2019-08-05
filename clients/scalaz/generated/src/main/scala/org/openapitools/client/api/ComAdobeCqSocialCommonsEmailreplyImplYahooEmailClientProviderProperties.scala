package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties._

case class ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties (
  priorityOrder: Option[ConfigNodePropertyInteger],
replyEmailPatterns: Option[ConfigNodePropertyArray])

object ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderPropertiesCodecJson: CodecJson[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties] = CodecJson.derive[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderPropertiesDecoder: EntityDecoder[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties] = jsonOf[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderPropertiesEncoder: EntityEncoder[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties] = jsonEncoderOf[ComAdobeCqSocialCommonsEmailreplyImplYahooEmailClientProviderProperties]
}