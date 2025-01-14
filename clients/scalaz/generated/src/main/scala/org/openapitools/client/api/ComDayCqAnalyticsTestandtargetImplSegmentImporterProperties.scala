package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties._

case class ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties (
  cqAnalyticsTestandtargetSegmentimporterEnabled: Option[ConfigNodePropertyBoolean])

object ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties {
  import DateTimeCodecs._

  implicit val ComDayCqAnalyticsTestandtargetImplSegmentImporterPropertiesCodecJson: CodecJson[ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties] = CodecJson.derive[ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties]
  implicit val ComDayCqAnalyticsTestandtargetImplSegmentImporterPropertiesDecoder: EntityDecoder[ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties] = jsonOf[ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties]
  implicit val ComDayCqAnalyticsTestandtargetImplSegmentImporterPropertiesEncoder: EntityEncoder[ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties] = jsonEncoderOf[ComDayCqAnalyticsTestandtargetImplSegmentImporterProperties]
}
