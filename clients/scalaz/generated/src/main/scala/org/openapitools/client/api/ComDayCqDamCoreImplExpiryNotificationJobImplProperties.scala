package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplExpiryNotificationJobImplProperties._

case class ComDayCqDamCoreImplExpiryNotificationJobImplProperties (
  cqDamExpiryNotificationSchedulerIstimebased: Option[ConfigNodePropertyBoolean],
cqDamExpiryNotificationSchedulerTimebasedRule: Option[ConfigNodePropertyString],
cqDamExpiryNotificationSchedulerPeriodRule: Option[ConfigNodePropertyInteger],
sendEmail: Option[ConfigNodePropertyBoolean],
assetExpiredLimit: Option[ConfigNodePropertyInteger],
priorNotificationSeconds: Option[ConfigNodePropertyInteger],
cqDamExpiryNotificationUrlProtocol: Option[ConfigNodePropertyString])

object ComDayCqDamCoreImplExpiryNotificationJobImplProperties {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplExpiryNotificationJobImplPropertiesCodecJson: CodecJson[ComDayCqDamCoreImplExpiryNotificationJobImplProperties] = CodecJson.derive[ComDayCqDamCoreImplExpiryNotificationJobImplProperties]
  implicit val ComDayCqDamCoreImplExpiryNotificationJobImplPropertiesDecoder: EntityDecoder[ComDayCqDamCoreImplExpiryNotificationJobImplProperties] = jsonOf[ComDayCqDamCoreImplExpiryNotificationJobImplProperties]
  implicit val ComDayCqDamCoreImplExpiryNotificationJobImplPropertiesEncoder: EntityEncoder[ComDayCqDamCoreImplExpiryNotificationJobImplProperties] = jsonEncoderOf[ComDayCqDamCoreImplExpiryNotificationJobImplProperties]
}
