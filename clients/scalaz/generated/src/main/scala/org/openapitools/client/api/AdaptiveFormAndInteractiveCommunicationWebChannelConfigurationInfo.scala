package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo._

case class AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationProperties])

object AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo {
  import DateTimeCodecs._

  implicit val AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfoCodecJson: CodecJson[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo] = CodecJson.derive[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo]
  implicit val AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfoDecoder: EntityDecoder[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo] = jsonOf[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo]
  implicit val AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfoEncoder: EntityEncoder[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo] = jsonEncoderOf[AdaptiveFormAndInteractiveCommunicationWebChannelConfigurationInfo]
}