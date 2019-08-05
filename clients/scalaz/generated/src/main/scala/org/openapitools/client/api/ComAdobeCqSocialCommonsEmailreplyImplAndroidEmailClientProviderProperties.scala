package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties._

case class ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties (
  priorityOrder: Option[ConfigNodePropertyInteger],
replyEmailPatterns: Option[ConfigNodePropertyArray])

object ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderPropertiesCodecJson: CodecJson[ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties] = CodecJson.derive[ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderPropertiesDecoder: EntityDecoder[ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties] = jsonOf[ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties]
  implicit val ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderPropertiesEncoder: EntityEncoder[ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties] = jsonEncoderOf[ComAdobeCqSocialCommonsEmailreplyImplAndroidEmailClientProviderProperties]
}