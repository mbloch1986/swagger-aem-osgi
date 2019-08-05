package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqNotificationImplNotificationServiceImplProperties._

case class ComDayCqNotificationImplNotificationServiceImplProperties (
  eventFilter: Option[ConfigNodePropertyString])

object ComDayCqNotificationImplNotificationServiceImplProperties {
  import DateTimeCodecs._

  implicit val ComDayCqNotificationImplNotificationServiceImplPropertiesCodecJson: CodecJson[ComDayCqNotificationImplNotificationServiceImplProperties] = CodecJson.derive[ComDayCqNotificationImplNotificationServiceImplProperties]
  implicit val ComDayCqNotificationImplNotificationServiceImplPropertiesDecoder: EntityDecoder[ComDayCqNotificationImplNotificationServiceImplProperties] = jsonOf[ComDayCqNotificationImplNotificationServiceImplProperties]
  implicit val ComDayCqNotificationImplNotificationServiceImplPropertiesEncoder: EntityEncoder[ComDayCqNotificationImplNotificationServiceImplProperties] = jsonEncoderOf[ComDayCqNotificationImplNotificationServiceImplProperties]
}