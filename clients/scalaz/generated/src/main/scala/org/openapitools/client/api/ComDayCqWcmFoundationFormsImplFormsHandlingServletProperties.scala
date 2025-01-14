package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties._

case class ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties (
  nameWhitelist: Option[ConfigNodePropertyString],
allowExpressions: Option[ConfigNodePropertyBoolean])

object ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties {
  import DateTimeCodecs._

  implicit val ComDayCqWcmFoundationFormsImplFormsHandlingServletPropertiesCodecJson: CodecJson[ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties] = CodecJson.derive[ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties]
  implicit val ComDayCqWcmFoundationFormsImplFormsHandlingServletPropertiesDecoder: EntityDecoder[ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties] = jsonOf[ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties]
  implicit val ComDayCqWcmFoundationFormsImplFormsHandlingServletPropertiesEncoder: EntityEncoder[ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties] = jsonEncoderOf[ComDayCqWcmFoundationFormsImplFormsHandlingServletProperties]
}
