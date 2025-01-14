package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties._

case class ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties (
  slingPostOperation: Option[ConfigNodePropertyString],
slingServletMethods: Option[ConfigNodePropertyString])

object ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties {
  import DateTimeCodecs._

  implicit val ComDayCqDamS7damCommonPostServletsSetModifyHandlerPropertiesCodecJson: CodecJson[ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties] = CodecJson.derive[ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties]
  implicit val ComDayCqDamS7damCommonPostServletsSetModifyHandlerPropertiesDecoder: EntityDecoder[ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties] = jsonOf[ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties]
  implicit val ComDayCqDamS7damCommonPostServletsSetModifyHandlerPropertiesEncoder: EntityEncoder[ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties] = jsonEncoderOf[ComDayCqDamS7damCommonPostServletsSetModifyHandlerProperties]
}
