package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplMissingMetadataNotificationJobProperties._

case class ComDayCqDamCoreImplMissingMetadataNotificationJobProperties (
  cqDamMissingmetadataNotificationSchedulerIstimebased: Option[ConfigNodePropertyBoolean],
cqDamMissingmetadataNotificationSchedulerTimebasedRule: Option[ConfigNodePropertyString],
cqDamMissingmetadataNotificationSchedulerPeriodRule: Option[ConfigNodePropertyInteger],
cqDamMissingmetadataNotificationRecipient: Option[ConfigNodePropertyString])

object ComDayCqDamCoreImplMissingMetadataNotificationJobProperties {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplMissingMetadataNotificationJobPropertiesCodecJson: CodecJson[ComDayCqDamCoreImplMissingMetadataNotificationJobProperties] = CodecJson.derive[ComDayCqDamCoreImplMissingMetadataNotificationJobProperties]
  implicit val ComDayCqDamCoreImplMissingMetadataNotificationJobPropertiesDecoder: EntityDecoder[ComDayCqDamCoreImplMissingMetadataNotificationJobProperties] = jsonOf[ComDayCqDamCoreImplMissingMetadataNotificationJobProperties]
  implicit val ComDayCqDamCoreImplMissingMetadataNotificationJobPropertiesEncoder: EntityEncoder[ComDayCqDamCoreImplMissingMetadataNotificationJobProperties] = jsonEncoderOf[ComDayCqDamCoreImplMissingMetadataNotificationJobProperties]
}
