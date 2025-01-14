package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteCompatrouterImplRoutingConfigProperties._

case class ComAdobeGraniteCompatrouterImplRoutingConfigProperties (
  id: Option[ConfigNodePropertyString],
compatPath: Option[ConfigNodePropertyString],
newPath: Option[ConfigNodePropertyString])

object ComAdobeGraniteCompatrouterImplRoutingConfigProperties {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesCodecJson: CodecJson[ComAdobeGraniteCompatrouterImplRoutingConfigProperties] = CodecJson.derive[ComAdobeGraniteCompatrouterImplRoutingConfigProperties]
  implicit val ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesDecoder: EntityDecoder[ComAdobeGraniteCompatrouterImplRoutingConfigProperties] = jsonOf[ComAdobeGraniteCompatrouterImplRoutingConfigProperties]
  implicit val ComAdobeGraniteCompatrouterImplRoutingConfigPropertiesEncoder: EntityEncoder[ComAdobeGraniteCompatrouterImplRoutingConfigProperties] = jsonEncoderOf[ComAdobeGraniteCompatrouterImplRoutingConfigProperties]
}
