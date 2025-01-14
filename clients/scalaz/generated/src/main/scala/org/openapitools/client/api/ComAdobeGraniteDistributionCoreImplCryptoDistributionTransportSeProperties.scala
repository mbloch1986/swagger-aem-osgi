package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties._

case class ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties (
  name: Option[ConfigNodePropertyString],
username: Option[ConfigNodePropertyString],
encryptedPassword: Option[ConfigNodePropertyString])

object ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties {
  import DateTimeCodecs._

  implicit val ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSePropertiesCodecJson: CodecJson[ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties] = CodecJson.derive[ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties]
  implicit val ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSePropertiesDecoder: EntityDecoder[ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties] = jsonOf[ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties]
  implicit val ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSePropertiesEncoder: EntityEncoder[ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties] = jsonEncoderOf[ComAdobeGraniteDistributionCoreImplCryptoDistributionTransportSeProperties]
}
