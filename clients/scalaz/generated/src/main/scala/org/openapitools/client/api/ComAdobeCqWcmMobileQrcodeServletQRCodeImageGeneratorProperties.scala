package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties._

case class ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties (
  cqWcmQrcodeServletWhitelist: Option[ConfigNodePropertyArray])

object ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties {
  import DateTimeCodecs._

  implicit val ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorPropertiesCodecJson: CodecJson[ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties] = CodecJson.derive[ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties]
  implicit val ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorPropertiesDecoder: EntityDecoder[ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties] = jsonOf[ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties]
  implicit val ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorPropertiesEncoder: EntityEncoder[ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties] = jsonEncoderOf[ComAdobeCqWcmMobileQrcodeServletQRCodeImageGeneratorProperties]
}
