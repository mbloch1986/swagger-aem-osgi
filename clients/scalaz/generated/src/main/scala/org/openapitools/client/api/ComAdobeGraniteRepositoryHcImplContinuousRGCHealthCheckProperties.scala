package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckProperties._

case class ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckProperties (
  hcTags: Option[ConfigNodePropertyArray])

object ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckProperties {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckPropertiesCodecJson: CodecJson[ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckProperties] = CodecJson.derive[ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckProperties]
  implicit val ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckPropertiesDecoder: EntityDecoder[ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckProperties] = jsonOf[ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckProperties]
  implicit val ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckPropertiesEncoder: EntityEncoder[ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckProperties] = jsonEncoderOf[ComAdobeGraniteRepositoryHcImplContinuousRGCHealthCheckProperties]
}