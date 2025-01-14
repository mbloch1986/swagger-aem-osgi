package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmFoundationFormsImplMailServletProperties._

case class ComDayCqWcmFoundationFormsImplMailServletProperties (
  slingServletResourceTypes: Option[ConfigNodePropertyString],
slingServletSelectors: Option[ConfigNodePropertyString],
resourceWhitelist: Option[ConfigNodePropertyArray],
resourceBlacklist: Option[ConfigNodePropertyString])

object ComDayCqWcmFoundationFormsImplMailServletProperties {
  import DateTimeCodecs._

  implicit val ComDayCqWcmFoundationFormsImplMailServletPropertiesCodecJson: CodecJson[ComDayCqWcmFoundationFormsImplMailServletProperties] = CodecJson.derive[ComDayCqWcmFoundationFormsImplMailServletProperties]
  implicit val ComDayCqWcmFoundationFormsImplMailServletPropertiesDecoder: EntityDecoder[ComDayCqWcmFoundationFormsImplMailServletProperties] = jsonOf[ComDayCqWcmFoundationFormsImplMailServletProperties]
  implicit val ComDayCqWcmFoundationFormsImplMailServletPropertiesEncoder: EntityEncoder[ComDayCqWcmFoundationFormsImplMailServletProperties] = jsonEncoderOf[ComDayCqWcmFoundationFormsImplMailServletProperties]
}
