package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties._

case class ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties (
  name: Option[ConfigNodePropertyString],
locale: Option[ConfigNodePropertyString],
imsConfig: Option[ConfigNodePropertyString])

object ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties {
  import DateTimeCodecs._

  implicit val ComDayCqDamStockIntegrationImplConfigurationStockConfigurationPropertiesCodecJson: CodecJson[ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties] = CodecJson.derive[ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties]
  implicit val ComDayCqDamStockIntegrationImplConfigurationStockConfigurationPropertiesDecoder: EntityDecoder[ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties] = jsonOf[ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties]
  implicit val ComDayCqDamStockIntegrationImplConfigurationStockConfigurationPropertiesEncoder: EntityEncoder[ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties] = jsonEncoderOf[ComDayCqDamStockIntegrationImplConfigurationStockConfigurationProperties]
}
