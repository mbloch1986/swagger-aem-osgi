package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties._

case class ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties (
  priorityOrder: Option[ConfigNodePropertyInteger],
replyEmailPatterns: Option[ConfigNodePropertyArray])

object ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderPropertiesCodecJson: CodecJson[ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties] = CodecJson.derive[ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderPropertiesDecoder: EntityDecoder[ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties] = jsonOf[ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderPropertiesEncoder: EntityEncoder[ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties] = jsonEncoderOf[ComAdobeCqSocialCommonsEmailreplyImplOutLookEmailClientProviderProperties]
}