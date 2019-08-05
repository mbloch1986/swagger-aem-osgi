package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqMcmCampaignImplIntegrationConfigImplProperties._

case class ComDayCqMcmCampaignImplIntegrationConfigImplProperties (
  aemMcmCampaignFormConstraints: Option[ConfigNodePropertyArray],
aemMcmCampaignPublicUrl: Option[ConfigNodePropertyString],
aemMcmCampaignRelaxedSSL: Option[ConfigNodePropertyBoolean])

object ComDayCqMcmCampaignImplIntegrationConfigImplProperties {
  import DateTimeCodecs._

  implicit val ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesCodecJson: CodecJson[ComDayCqMcmCampaignImplIntegrationConfigImplProperties] = CodecJson.derive[ComDayCqMcmCampaignImplIntegrationConfigImplProperties]
  implicit val ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesDecoder: EntityDecoder[ComDayCqMcmCampaignImplIntegrationConfigImplProperties] = jsonOf[ComDayCqMcmCampaignImplIntegrationConfigImplProperties]
  implicit val ComDayCqMcmCampaignImplIntegrationConfigImplPropertiesEncoder: EntityEncoder[ComDayCqMcmCampaignImplIntegrationConfigImplProperties] = jsonEncoderOf[ComDayCqMcmCampaignImplIntegrationConfigImplProperties]
}