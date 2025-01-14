package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties._

case class ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties (
  getPeriod: Option[ConfigNodePropertyInteger])

object ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsPropertiesCodecJson: CodecJson[ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties] = CodecJson.derive[ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties]
  implicit val ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsPropertiesDecoder: EntityDecoder[ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties] = jsonOf[ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties]
  implicit val ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsPropertiesEncoder: EntityEncoder[ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties] = jsonEncoderOf[ComAdobeGraniteQueriesImplHcQueryHealthCheckMetricsProperties]
}
