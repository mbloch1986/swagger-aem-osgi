package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties._

case class ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties (
  cqDamScene7DamchangeeventlistenerEnabled: Option[ConfigNodePropertyBoolean],
cqDamScene7DamchangeeventlistenerObservedPaths: Option[ConfigNodePropertyArray])

object ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties {
  import DateTimeCodecs._

  implicit val ComDayCqDamScene7ImplScene7DamChangeEventListenerPropertiesCodecJson: CodecJson[ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties] = CodecJson.derive[ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties]
  implicit val ComDayCqDamScene7ImplScene7DamChangeEventListenerPropertiesDecoder: EntityDecoder[ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties] = jsonOf[ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties]
  implicit val ComDayCqDamScene7ImplScene7DamChangeEventListenerPropertiesEncoder: EntityEncoder[ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties] = jsonEncoderOf[ComDayCqDamScene7ImplScene7DamChangeEventListenerProperties]
}