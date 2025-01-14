package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties._

case class ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties (
  isEnabled: Option[ConfigNodePropertyBoolean])

object ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationPropertiesCodecJson: CodecJson[ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties] = CodecJson.derive[ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties]
  implicit val ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationPropertiesDecoder: EntityDecoder[ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties] = jsonOf[ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties]
  implicit val ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationPropertiesEncoder: EntityEncoder[ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties] = jsonEncoderOf[ComDayCqDamCoreImplAssethomeAssetHomePageConfigurationProperties]
}
