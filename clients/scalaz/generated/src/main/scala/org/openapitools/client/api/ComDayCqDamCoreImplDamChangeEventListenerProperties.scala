package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplDamChangeEventListenerProperties._

case class ComDayCqDamCoreImplDamChangeEventListenerProperties (
  changeeventlistenerObservedPaths: Option[ConfigNodePropertyArray])

object ComDayCqDamCoreImplDamChangeEventListenerProperties {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplDamChangeEventListenerPropertiesCodecJson: CodecJson[ComDayCqDamCoreImplDamChangeEventListenerProperties] = CodecJson.derive[ComDayCqDamCoreImplDamChangeEventListenerProperties]
  implicit val ComDayCqDamCoreImplDamChangeEventListenerPropertiesDecoder: EntityDecoder[ComDayCqDamCoreImplDamChangeEventListenerProperties] = jsonOf[ComDayCqDamCoreImplDamChangeEventListenerProperties]
  implicit val ComDayCqDamCoreImplDamChangeEventListenerPropertiesEncoder: EntityEncoder[ComDayCqDamCoreImplDamChangeEventListenerProperties] = jsonEncoderOf[ComDayCqDamCoreImplDamChangeEventListenerProperties]
}
