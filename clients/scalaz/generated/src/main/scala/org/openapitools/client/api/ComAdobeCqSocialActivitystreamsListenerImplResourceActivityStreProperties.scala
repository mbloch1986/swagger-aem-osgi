package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties._

case class ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties (
  streamPath: Option[ConfigNodePropertyString],
streamName: Option[ConfigNodePropertyString])

object ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStrePropertiesCodecJson: CodecJson[ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties] = CodecJson.derive[ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties]
  implicit val ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStrePropertiesDecoder: EntityDecoder[ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties] = jsonOf[ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties]
  implicit val ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStrePropertiesEncoder: EntityEncoder[ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties] = jsonEncoderOf[ComAdobeCqSocialActivitystreamsListenerImplResourceActivityStreProperties]
}
