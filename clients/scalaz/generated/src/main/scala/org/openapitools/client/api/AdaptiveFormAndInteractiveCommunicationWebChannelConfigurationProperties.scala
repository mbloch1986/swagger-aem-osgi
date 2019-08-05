package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties._

case class AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties (
  showPlaceholder: Option[ConfigNodePropertyBoolean],
maximumCacheEntries: Option[ConfigNodePropertyInteger],
afScriptingCompatversion: Option[ConfigNodePropertyDropDown],
makeFileNameUnique: Option[ConfigNodePropertyBoolean],
generatingCompliantData: Option[ConfigNodePropertyBoolean])

object AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties {
  import DateTimeCodecs._

  implicit val AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationPropertiesCodecJson: CodecJson[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties] = CodecJson.derive[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties]
  implicit val AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationPropertiesDecoder: EntityDecoder[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties] = jsonOf[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties]
  implicit val AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationPropertiesEncoder: EntityEncoder[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties] = jsonEncoderOf[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties]
}