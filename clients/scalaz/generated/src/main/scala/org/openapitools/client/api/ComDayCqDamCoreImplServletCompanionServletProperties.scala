package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqDamCoreImplServletCompanionServletProperties._

case class ComDayCqDamCoreImplServletCompanionServletProperties (
  moreInfo: Option[ConfigNodePropertyString],
mntoverlaydamguicontentassetsmoreinfoHtmlpath: Option[ConfigNodePropertyString])

object ComDayCqDamCoreImplServletCompanionServletProperties {
  import DateTimeCodecs._

  implicit val ComDayCqDamCoreImplServletCompanionServletPropertiesCodecJson: CodecJson[ComDayCqDamCoreImplServletCompanionServletProperties] = CodecJson.derive[ComDayCqDamCoreImplServletCompanionServletProperties]
  implicit val ComDayCqDamCoreImplServletCompanionServletPropertiesDecoder: EntityDecoder[ComDayCqDamCoreImplServletCompanionServletProperties] = jsonOf[ComDayCqDamCoreImplServletCompanionServletProperties]
  implicit val ComDayCqDamCoreImplServletCompanionServletPropertiesEncoder: EntityEncoder[ComDayCqDamCoreImplServletCompanionServletProperties] = jsonEncoderOf[ComDayCqDamCoreImplServletCompanionServletProperties]
}