package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComDayCqWcmFoundationFormsImplFormChooserServletProperties._

case class ComDayCqWcmFoundationFormsImplFormChooserServletProperties (
  serviceName: Option[ConfigNodePropertyString],
slingServletResourceTypes: Option[ConfigNodePropertyString],
slingServletSelectors: Option[ConfigNodePropertyString],
slingServletMethods: Option[ConfigNodePropertyArray],
formsFormchooserservletAdvansesearchRequire: Option[ConfigNodePropertyBoolean])

object ComDayCqWcmFoundationFormsImplFormChooserServletProperties {
  import DateTimeCodecs._

  implicit val ComDayCqWcmFoundationFormsImplFormChooserServletPropertiesCodecJson: CodecJson[ComDayCqWcmFoundationFormsImplFormChooserServletProperties] = CodecJson.derive[ComDayCqWcmFoundationFormsImplFormChooserServletProperties]
  implicit val ComDayCqWcmFoundationFormsImplFormChooserServletPropertiesDecoder: EntityDecoder[ComDayCqWcmFoundationFormsImplFormChooserServletProperties] = jsonOf[ComDayCqWcmFoundationFormsImplFormChooserServletProperties]
  implicit val ComDayCqWcmFoundationFormsImplFormChooserServletPropertiesEncoder: EntityEncoder[ComDayCqWcmFoundationFormsImplFormChooserServletProperties] = jsonEncoderOf[ComDayCqWcmFoundationFormsImplFormChooserServletProperties]
}
