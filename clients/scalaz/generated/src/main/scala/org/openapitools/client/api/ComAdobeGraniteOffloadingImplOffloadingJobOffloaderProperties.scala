package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties._

case class ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties (
  offloadingOffloaderEnabled: Option[ConfigNodePropertyBoolean])

object ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesCodecJson: CodecJson[ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties] = CodecJson.derive[ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties]
  implicit val ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesDecoder: EntityDecoder[ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties] = jsonOf[ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties]
  implicit val ComAdobeGraniteOffloadingImplOffloadingJobOffloaderPropertiesEncoder: EntityEncoder[ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties] = jsonEncoderOf[ComAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties]
}