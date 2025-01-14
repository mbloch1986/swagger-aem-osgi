package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties._

case class ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties (
  priority: Option[ConfigNodePropertyInteger])

object ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoPropertiesCodecJson: CodecJson[ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties] = CodecJson.derive[ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties]
  implicit val ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoPropertiesDecoder: EntityDecoder[ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties] = jsonOf[ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties]
  implicit val ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoPropertiesEncoder: EntityEncoder[ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties] = jsonEncoderOf[ComAdobeCqSocialActivitystreamsClientImplSocialActivityStreamCoProperties]
}
