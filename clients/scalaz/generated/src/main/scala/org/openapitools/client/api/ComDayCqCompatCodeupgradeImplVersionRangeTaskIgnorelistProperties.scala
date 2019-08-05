package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties._

case class ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties (
  effectiveBundleListPath: Option[ConfigNodePropertyString])

object ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties {
  import DateTimeCodecs._

  implicit val ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesCodecJson: CodecJson[ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties] = CodecJson.derive[ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties]
  implicit val ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesDecoder: EntityDecoder[ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties] = jsonOf[ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties]
  implicit val ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistPropertiesEncoder: EntityEncoder[ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties] = jsonEncoderOf[ComDayCqCompatCodeupgradeImplVersionRangeTaskIgnorelistProperties]
}