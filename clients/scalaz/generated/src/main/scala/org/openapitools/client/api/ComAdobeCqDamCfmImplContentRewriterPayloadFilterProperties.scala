package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties._

case class ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties (
  pipelineType: Option[ConfigNodePropertyString])

object ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqDamCfmImplContentRewriterPayloadFilterPropertiesCodecJson: CodecJson[ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties] = CodecJson.derive[ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties]
  implicit val ComAdobeCqDamCfmImplContentRewriterPayloadFilterPropertiesDecoder: EntityDecoder[ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties] = jsonOf[ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties]
  implicit val ComAdobeCqDamCfmImplContentRewriterPayloadFilterPropertiesEncoder: EntityEncoder[ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties] = jsonEncoderOf[ComAdobeCqDamCfmImplContentRewriterPayloadFilterProperties]
}