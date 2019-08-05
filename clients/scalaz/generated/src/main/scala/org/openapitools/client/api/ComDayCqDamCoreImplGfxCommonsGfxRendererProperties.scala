package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplGfxCommonsGfxRendererProperties._

case class ComDayCqDamCoreImplGfxCommonsGfxRendererProperties (
  skipBufferedcache: Option[ConfigNodePropertyBoolean])

object ComDayCqDamCoreImplGfxCommonsGfxRendererProperties {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplGfxCommonsGfxRendererPropertiesCodecJson: CodecJson[ComDayCqDamCoreImplGfxCommonsGfxRendererProperties] = CodecJson.derive[ComDayCqDamCoreImplGfxCommonsGfxRendererProperties]
  implicit val ComDayCqDamCoreImplGfxCommonsGfxRendererPropertiesDecoder: EntityDecoder[ComDayCqDamCoreImplGfxCommonsGfxRendererProperties] = jsonOf[ComDayCqDamCoreImplGfxCommonsGfxRendererProperties]
  implicit val ComDayCqDamCoreImplGfxCommonsGfxRendererPropertiesEncoder: EntityEncoder[ComDayCqDamCoreImplGfxCommonsGfxRendererProperties] = jsonEncoderOf[ComDayCqDamCoreImplGfxCommonsGfxRendererProperties]
}