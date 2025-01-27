package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties._

case class ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties (
  hcTags: Option[ConfigNodePropertyArray])

object ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckPropertiesCodecJson: CodecJson[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties] = CodecJson.derive[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties]
  implicit val ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckPropertiesDecoder: EntityDecoder[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties] = jsonOf[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties]
  implicit val ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckPropertiesEncoder: EntityEncoder[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties] = jsonEncoderOf[ComAdobeGraniteRepositoryHcImplAuthorizableNodeNameHealthCheckProperties]
}
