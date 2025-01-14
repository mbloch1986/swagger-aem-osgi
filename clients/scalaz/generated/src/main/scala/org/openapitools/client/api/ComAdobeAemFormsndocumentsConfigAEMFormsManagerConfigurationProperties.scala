package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties._

case class ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties (
  formsManagerConfigIncludeOOTBTemplates: Option[ConfigNodePropertyBoolean],
formsManagerConfigIncludeDeprecatedTemplates: Option[ConfigNodePropertyBoolean])

object ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties {
  import DateTimeCodecs._

  implicit val ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationPropertiesCodecJson: CodecJson[ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties] = CodecJson.derive[ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties]
  implicit val ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationPropertiesDecoder: EntityDecoder[ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties] = jsonOf[ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties]
  implicit val ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationPropertiesEncoder: EntityEncoder[ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties] = jsonEncoderOf[ComAdobeAemFormsndocumentsConfigAEMFormsManagerConfigurationProperties]
}
