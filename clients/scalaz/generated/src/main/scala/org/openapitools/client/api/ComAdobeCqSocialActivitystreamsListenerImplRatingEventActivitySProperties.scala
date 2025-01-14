package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties._

case class ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties (
  ranking: Option[ConfigNodePropertyInteger],
enable: Option[ConfigNodePropertyBoolean])

object ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySPropertiesCodecJson: CodecJson[ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties] = CodecJson.derive[ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties]
  implicit val ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySPropertiesDecoder: EntityDecoder[ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties] = jsonOf[ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties]
  implicit val ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySPropertiesEncoder: EntityEncoder[ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties] = jsonEncoderOf[ComAdobeCqSocialActivitystreamsListenerImplRatingEventActivitySProperties]
}
